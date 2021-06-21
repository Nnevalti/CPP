#include <iostream>
#include <unistd.h>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void)
{
	srand(time(NULL));
	std::string const str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	Data *data = new Data();
	data->s1 = "";
	data->s2 = "";

	for (int i = 0; i < 8; i++)
	{
		data->s1 += str[rand() % str.length()];
		usleep(50);
	}
	data->n = rand();
	for (int i = 0; i < 8; i++)
	{
		data->s2 += str[rand() % str.length()];
		usleep(50);
	}
	return (reinterpret_cast<void *>(data));
}

Data *deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	void *test = serialize();
	Data *data = deserialize(test);
	std::cout << data->s1 << ", " << data->n << ", " << data->s2 << std::endl;
	delete data;
	return 0;
}
