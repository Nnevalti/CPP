#include "Brain.hpp"

Brain::Brain()
{
	std::string ideas[48] = {"lust","anticipation","envy","passion","awe","pain","madness","terror",
		"pride","optimism","bewilderment","happiness","smugness","fury","humility","excitement",
		"satisfaction","despair","surprise","joy","rage","irritation","bliss","gratitude","horror",
		"love","remorse","pleasure","anger","hunger","contempt","confusion","boredom","ecstasy","contentment",
		"shame","interest","guilt","melancholy","longing","fright","disappointment","pity","sadness","sorrow",
		"hatred","shock","torment"};

	std::srand(time(NULL) + clock());
	std::cout << "Brain class contructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[rand() % 48];
}

Brain::~Brain()
{
	std::cout << "Brain class destructor called." << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain class copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain &Brain::operator=(const Brain& src)
{
	std::cout << "Brain class assignement operator called." << std::endl;
	if (this != &src)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	return (*this);
}

void Brain::displayIdeas() const
{
	for(int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}
