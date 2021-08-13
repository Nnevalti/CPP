#include <iostream>
#include <unistd.h>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

Data *randData(void)
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
	return (data);
}
uintptr_t *serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t *>(ptr));
}

Data *deserialize(uintptr_t *raw)
{
	return (reinterpret_cast<Data *>(raw));
}
void displayData(Data *data)
{
	std::cout << data->s1 << ", " << data->n << ", " << data->s2 << std::endl;

}

int main(void)
{
	Data *data = randData();
	std::cout << "Before serialization :" << std::endl;
	displayData(data);

	uintptr_t *test = serialize(data);
	std::cout << std::endl << "After serialization :" << std::endl;
	std::cout << *test << std::endl;

	Data *deserializeData = deserialize(test);
	std::cout << std::endl << "After Deserialization :" << std::endl;
	displayData(deserializeData);

	delete data;
	return 0;
}
