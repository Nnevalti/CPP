#include <iostream>
#include <fstream>

std::string ft_replace(std::string buffer, std::string str1, std::string str2)
{
	std::string newStr;

	for (int i = 0; i < buffer.length(); i++)
	{
		if (buffer[i] == str1[0])
		{
			int j;
			for (j = 0; j < str1.length(); j++)
			{
				if (buffer[i + j] != str1[j])
					break ;
			}
			if (j == str1.length())
			{
				newStr += str2;
				i += str1.length() - 1;
			}
			else
				newStr += buffer[i];
		}
		else
			newStr += buffer[i];
	}
	return (newStr);
}

int main(int ac, char const *av[])
{
	std::string filename;
	std::string str1;
	std::string str2;
	std::string output;
	std::string	buffer;

	if (ac == 4)
	{
		filename = av[1];
		str1 = av[2];
		str2 = av[3];
		std::ifstream inputFile(filename);
		if (inputFile.fail())
		{
			std::cout << "Error: Cannot open " << filename << std::endl;
			return (1);
		}
		output = filename + ".replace";
		std::ofstream outputFile(output);
		if (outputFile.fail())
		{
			std::cout << "Error: Cannot open/create " << output << std::endl;
			return (1);
		}

		while (std::getline(inputFile, buffer))
		{
			outputFile << ft_replace(buffer, str1, str2) << std::endl;
		}
		inputFile.close();
		outputFile.close();
	}
	else
		std::cout << "Usage: " << std::endl << av[0] << " filename <string1> <string2>" << std::endl;

	return (0);
}
