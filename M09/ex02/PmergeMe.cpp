#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PmergeMe::sort_vector(std::vector<int> &vec) const
{
	int unpaired = -1;
	if (vec.size() % 2)
	{
		unpaired = vec.back();
		vec.pop_back();
	}
	std::vector<std::pair<int, int> > pairs;
	for (size_t i = 0; i < vec.size(); i += 2)
	{
		std::pair<int, int> tp(vec[i], vec[i + 1]);
		if (tp.first < tp.second)
			std::swap(tp.first, tp.second);
		pairs.push_back(tp);
	}
	vec.resize(0);
	std::sort(pairs.begin(), pairs.end());
	for (size_t i = 0; i < pairs.size(); i++)
	{
		vec.push_back(pairs[i].first);
	}

	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::vector<int>::iterator it = std::upper_bound(vec.begin(), vec.end(), pairs[i].second);
		vec.insert(it, pairs[i].second);
	}
	if (unpaired != -1)
	{
		std::vector<int>::iterator it = std::upper_bound(vec.begin(), vec.end(), unpaired);
		vec.insert(it, unpaired);
	}
}

void PmergeMe::sort_deque(std::deque<int> &deq) const
{
	int unpaired = -1;
	if (deq.size() % 2)
	{
		unpaired = deq.back();
		deq.pop_back();
	}
	std::deque<std::pair<int, int> > pairs;
	for (size_t i = 0; i < deq.size(); i += 2)
	{
		std::pair<int, int> tp(deq[i], deq[i + 1]);
		if (tp.first < tp.second)
			std::swap(tp.first, tp.second);
		pairs.push_back(tp);
	}
	deq.resize(0);
	std::sort(pairs.begin(), pairs.end());
	for (size_t i = 0; i < pairs.size(); i++)
	{
		deq.push_back(pairs[i].first);
	}

	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::deque<int>::iterator it = std::upper_bound(deq.begin(), deq.end(), pairs[i].second);
		deq.insert(it, pairs[i].second);
	}
	if (unpaired != -1)
	{
		std::deque<int>::iterator it = std::upper_bound(deq.begin(), deq.end(), unpaired);
		deq.insert(it, unpaired);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */