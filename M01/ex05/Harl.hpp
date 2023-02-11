#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <map>

class Harl
{

	public:
		Harl();
		~Harl();
		void complain( std::string level );

	private:
		void (Harl::*func[4])(void);
		std::string levels[4];
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif /* ************************************************************ HARL_H */