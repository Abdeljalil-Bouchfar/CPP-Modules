#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MutantStack::MutantStack()
{
}

MutantStack::MutantStack( const MutantStack & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MutantStack::~MutantStack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MutantStack &				MutantStack::operator=( MutantStack const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MutantStack const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */