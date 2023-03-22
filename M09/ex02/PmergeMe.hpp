#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{

	public:

		PmergeMe();
		PmergeMe( PmergeMe const & src );
		~PmergeMe();

		PmergeMe &		operator=( PmergeMe const & rhs );

		void	sort_vector(std::vector<int> &vec) const;
		void	sort_deque(std::deque<int> &deq) const;

	private:

};

#endif /* ******************************************************** PMERGEME_H */