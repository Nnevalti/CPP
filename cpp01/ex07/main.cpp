#include <iostream>
#include <fstream>

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
			if (buffer.find(str1) != std::string::npos)
				buffer.replace(buffer.find(str1), str1.length(), str2);
			outputFile << buffer << std::endl;
		}
		inputFile.close();
		outputFile.close();
	}
	else
		std::cout << "Usage: " << std::endl << av[0] << " filename <string1> <string2>" << std::endl;

	return (0);
}
