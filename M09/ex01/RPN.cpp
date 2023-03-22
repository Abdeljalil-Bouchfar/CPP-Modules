#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN()
{
}

RPN::RPN(const RPN &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN &RPN::operator=(RPN const &rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int RPN::get_result(std::string s) const
{
	std::stack<int> st;
	for (size_t i = 0; i < s.length(); i++)
	{
		if ((s[i] != ' ' && s[i] != '+' && s[i] != '-' && s[i] != '/' && s[i] != '*' && !isdigit(s[i])) || ((s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*') && st.size() < 2))
		{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
		else if (isdigit(s[i]))
			st.push(s[i] - '0');
		else if (s[i] != ' ')
		{
			int n1 = st.top();
			st.pop();
			int n2 = st.top();
			st.pop();
			if (s[i] == '+')
				st.push(n2 + n1);
			else if (s[i] == '-')
				st.push(n2 - n1);
			else if (s[i] == '*')
				st.push(n2 * n1);
			else if (s[i] == '/')
			{
				if (!n1)
				{
					std::cerr << "Error" << std::endl;
					exit(1);
				}
				st.push(n2 / n1);
			}
		}
	}
	return st.top();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */