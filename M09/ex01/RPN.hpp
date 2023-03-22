#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{

	public:

		RPN();
		RPN( RPN const & src );
		~RPN();

		RPN &		operator=( RPN const & rhs );

		int get_result(std::string s) const;
};

#endif /* ************************************************************* RPN_H */