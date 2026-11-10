# **************************************************************************** #
#                                                                              #
#                                                    ▒▓              ▓▒        #
#    Makefile                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒       #
#                                                   ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒       #
#    By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█        #
#                                                    ███████░░░░███████        #
#    Created: 2026/08/14 12:43:50 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░       #
#    Updated: 2026/08/21 22:55:49 by lde-san-           ▒ ░██  ██░ ▒           #
#                                                          ██████              #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap
LIB = $(OBJ_DIR)libfragtrap.a
DEBUG ?= 1

NEOR	= \033[3m\033[38;2;255;153;51m
MINT    = \033[1;38;2;55;250;133m
ORNG    = \033[1;38;2;255;153;51m
PURP	= \033[1;38;2;174;5;252m
PINK    = \033[1;38;2;255;0;251m
BABY    = \033[1;38;2;0;255;247m
BLOD	= \033[1;38;2;255;0;0m
LIME    = \033[1;38;2;0;255;0m
BLAK	= \033[1;38;2;0;0;0m
B_WI    = \033[1;37m
RSET	= \033[0m

OBJ_DIR = obj/
OBJ = $(FILE:%.cpp=$(OBJ_DIR)%.o)

MAIN_FILE = main.cpp

CLASSES = ScavTrap.hpp
CLASSES += ClapTrap.hpp
CLASSES += FragTrap.hpp

FILE = ScavTrap.cpp
FILE += ClapTrap.cpp
FILE += FragTrap.cpp

.PRECIOUS: $(MAIN_FILE) $(CLASSES) $(FILE)

COMPILE = c++ -g -O0 -Wall -Wextra -Werror -std=c++98 -D DEBUG=$(DEBUG)

LEAK_FLAGS = --leak-check=full --show-leak-kinds=all --track-origins=yes

all: $(NAME)

$(NAME): $(LIB) $(MAIN_FILE) $(FILE) $(CLASSES)
	@printf "$(BABY)"
	$(COMPILE) $(MAIN_FILE) $(LIB) -o $(NAME)
	@printf "$(RSET)\n"

$(OBJ_DIR)%.o: %.cpp $(CLASSES) | $(OBJ_DIR)
	@printf "$(PURP)"
	$(COMPILE) -c $< -o $@
	@printf "$(RSET)\n"

$(OBJ_DIR):
	@printf "$(LIME)"
	mkdir -p $(OBJ_DIR)
	@printf "$(RSET)\n"

$(LIB): $(OBJ)
	@printf "$(PINK)"
	ar -rcs $@ $^
	@printf "$(RSET)\n"

clean:
	@printf "$(ORNG)"
	rm -rf $(OBJ_DIR)
	@printf "$(BLOD)"
	rm -rf $(LIB)
	@printf "$(RSET)"

fclean: clean
	@printf "$(PURP)"
	rm -f $(NAME)
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

re: fclean all

# /////////////////////// -- * Functionality * -- ////////////////////// #

open:
	@printf "$(MINT)"
	open $(MAIN_FILE)
	for f in $(FILE); do xdg-open $$f; done
	@printf "$(RSET)"

leaks: $(NAME)
	@printf "\n$(PINK)valgrind $(ORNG)$(LEAK_FLAGS) $(MINT)./$(NAME)"
	@printf "$(RSET)\n"
	@valgrind $(LEAK_FLAGS) ./$(NAME)
	@sleep 0.3

chill: Mapache_main.cpp Mapache_ClapTrap.cpp Mapache_ClapTrap.hpp Mapache_ScavTrap.cpp Mapache_FragTrap.cpp re

strict: strict_main.cpp strict_ClapTrap.cpp strict_ClapTrap.hpp strict_ScavTrap.cpp strict_FragTrap.cpp re

Mapache_ClapTrap.hpp:
	@> ClapTrap.hpp
	@printf "%s\n" '/* ************************************************************************** */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                                            */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> ClapTrap.hpp
	@printf "%s\n" '/*   ClapTrap.hpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> ClapTrap.hpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> ClapTrap.hpp
	@printf "%s\n" '/*   Created: 2026/08/20 17:18:58 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> ClapTrap.hpp
	@printf "%s\n" '/*   Updated: 2026/08/21 13:34:21 by lde-san-           ▒ ░██  ██░ ▒          */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                         ██████             */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                                            */' >> ClapTrap.hpp
	@printf "%s\n" '/* ************************************************************************** */' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '#ifndef CLAPTRAP_HPP' >> ClapTrap.hpp
	@printf "%s\n" '# define CLAPTRAP_HPP' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '#include <string>' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" 'class ClapTrap' >> ClapTrap.hpp
	@printf "%s\n" '{' >> ClapTrap.hpp
	@printf "%s\n" '	public:' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '		ClapTrap();' >> ClapTrap.hpp
	@printf "%s\n" '		ClapTrap(std::string name);' >> ClapTrap.hpp
	@printf "%s\n" '		ClapTrap(ClapTrap const &original);' >> ClapTrap.hpp
	@printf "%s\n" '		~ClapTrap();' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '		void	attack(const std::string& target);' >> ClapTrap.hpp
	@printf "%s\n" '		void	takeDamage(unsigned int amount);' >> ClapTrap.hpp
	@printf "%s\n" '		void	beRepaired(unsigned int amount);' >> ClapTrap.hpp
	@printf "%s\n" '		void	state_display(void) const;' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '		ClapTrap &operator=(ClapTrap const &rhs);' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '	protected:' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '		std::string	trap_name;' >> ClapTrap.hpp
	@printf "%s\n" '		int			hit_points;' >> ClapTrap.hpp
	@printf "%s\n" '		int			energy_points;' >> ClapTrap.hpp
	@printf "%s\n" '		int			attack_damage;' >> ClapTrap.hpp
	@printf "%s\n" '};' >> ClapTrap.hpp
	@printf "%s\n" '#endif' >> ClapTrap.hpp

Mapache_ScavTrap.cpp:
	@> ScavTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> ScavTrap.cpp
	@printf "%s\n" '/*   ScavTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> ScavTrap.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> ScavTrap.cpp
	@printf "%s\n" '/*   Created: 2026/08/21 09:39:27 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> ScavTrap.cpp
	@printf "%s\n" '/*   Updated: 2026/08/21 16:09:18 by lde-san-           ▒ ░██  ██░ ▒          */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> ScavTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '#include "ScavTrap.hpp"' >> ScavTrap.cpp
	@printf "%s\n" '#include <iostream>' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '#ifndef DEBUG' >> ScavTrap.cpp
	@printf "%s\n" '# define DEBUG 1' >> ScavTrap.cpp
	@printf "%s\n" '#endif' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '# define RT	"\033[0m" // Reset' >> ScavTrap.cpp
	@printf "%s\n" '# define BW	"\033[1;37m" // Bold White' >> ScavTrap.cpp
	@printf "%s\n" '# define LM	"\033[1;38;2;0;255;0m" // Lime' >> ScavTrap.cpp
	@printf "%s\n" '# define BB	"\033[38;2;0;255;247m" // Baby Blue' >> ScavTrap.cpp
	@printf "%s\n" '# define BL	"\033[1;38;2;255;0;0m" // Blood Red' >> ScavTrap.cpp
	@printf "%s\n" '# define PR	"\033[1;38;2;174;5;252m" // Purple' >> ScavTrap.cpp
	@printf "%s\n" '# define HT	"\033[1;38;2;255;51;119m" // Hot Pink' >> ScavTrap.cpp
	@printf "%s\n" '# define MT	"\033[1;38;2;55;250;133m" // Mint' >> ScavTrap.cpp
	@printf "%s\n" '# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '	        //             Constructors & Destructor                //' >> ScavTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap::ScavTrap() : ClapTrap("Scavy")' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Default Constructor Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	this->hit_points += 90;' >> ScavTrap.cpp
	@printf "%s\n" '	this->energy_points += 40;' >> ScavTrap.cpp
	@printf "%s\n" '	this->attack_damage = 20;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap::ScavTrap(std::string name) : ClapTrap(name)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Main Constructor Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	this->hit_points += 90;' >> ScavTrap.cpp
	@printf "%s\n" '	this->energy_points += 40;' >> ScavTrap.cpp
	@printf "%s\n" '	this->attack_damage = 20;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap::ScavTrap(ScavTrap const &original) : ClapTrap(original)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " RT << NR "Copy Constructor Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap::~ScavTrap()' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Destructor Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '	        //                Operator Overloads                    //' >> ScavTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " RT << NR "Assignment Operator Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	if (this == &rhs)' >> ScavTrap.cpp
	@printf "%s\n" '		return(*this);' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	ClapTrap::operator=(rhs);' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return (*this);' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '	        //                  Member Functions                    //' >> ScavTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'void ScavTrap::attack(const std::string& target)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ScavTrap.cpp
	@printf "%s\n" '	{' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " wants to scav up " << target' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW ". But "<< this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '		return ;' >> ScavTrap.cpp
	@printf "%s\n" '	}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	if (this->energy_points < 1)' >> ScavTrap.cpp
	@printf "%s\n" '	{' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '			  	  << BW " scavenges " HT << target' >> ScavTrap.cpp
	@printf "%s\n" '			  	  << BW ". But it " BL "fails" BW "! "<< std::endl' >> ScavTrap.cpp
	@printf "%s\n" '				  <<    "Looks like " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " Is out of energy!" RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '	}' >> ScavTrap.cpp
	@printf "%s\n" '	else' >> ScavTrap.cpp
	@printf "%s\n" '	{' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " scavenges " HT << target' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW ", causing " BL << this->attack_damage' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " points of damage!" RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '		this->energy_points--;' >> ScavTrap.cpp
	@printf "%s\n" '	}' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'void	ScavTrap::guardGate(void)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ScavTrap.cpp
	@printf "%s\n" '	{' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " wants to guard the gate"' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW ". But "<< this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '		return ;' >> ScavTrap.cpp
	@printf "%s\n" '	}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '			  << BW " is now guarding the gate!" RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp

strict_ClapTrap.cpp:
	@> ClapTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> ClapTrap.cpp
	@printf "%s\n" '/*   ClapTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> ClapTrap.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> ClapTrap.cpp
	@printf "%s\n" '/*   Created: 2026/08/20 17:28:08 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> ClapTrap.cpp
	@printf "%s\n" '/*   Updated: 2026/08/21 17:23:59 by lde-san-           ▒ ░██  ██░ ▒          */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> ClapTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '#include "ClapTrap.hpp"' >> ClapTrap.cpp
	@printf "%s\n" '#include <iostream>' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '#ifndef DEBUG' >> ClapTrap.cpp
	@printf "%s\n" '# define DEBUG 1' >> ClapTrap.cpp
	@printf "%s\n" '#endif' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '# define RT	"\033[0m" // Reset' >> ClapTrap.cpp
	@printf "%s\n" '# define BW	"\033[1;37m" // Bold White' >> ClapTrap.cpp
	@printf "%s\n" '# define LM	"\033[1;38;2;0;255;0m" // Lime' >> ClapTrap.cpp
	@printf "%s\n" '# define BB	"\033[38;2;0;255;247m" // Baby Blue' >> ClapTrap.cpp
	@printf "%s\n" '# define BL	"\033[1;38;2;255;0;0m" // Blood Red' >> ClapTrap.cpp
	@printf "%s\n" '# define OG	"\033[38;2;255;153;51m" // Orange' >> ClapTrap.cpp
	@printf "%s\n" '# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow' >> ClapTrap.cpp
	@printf "%s\n" '# define HT	"\033[1;38;2;255;51;119m" // Hot Pink' >> ClapTrap.cpp
	@printf "%s\n" '# define MT	"\033[1;38;2;55;250;133m" // Mint' >> ClapTrap.cpp
	@printf "%s\n" '# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '	        //             Constructors & Destructor                //' >> ClapTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap::ClapTrap() : trap_name("Trappy"), hit_points(10), energy_points(10), attack_damage(0)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Default Constructor Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap::ClapTrap(std::string name) : trap_name(name), hit_points(10), energy_points(10), attack_damage(0)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Main Constructor Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap::ClapTrap(ClapTrap const &original)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Copy Constructor Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	this->trap_name = original.trap_name;' >> ClapTrap.cpp
	@printf "%s\n" '	this->hit_points = original.hit_points;' >> ClapTrap.cpp
	@printf "%s\n" '	this->energy_points = original.energy_points;' >> ClapTrap.cpp
	@printf "%s\n" '	this->attack_damage = original.attack_damage;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap::~ClapTrap()' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Destructor Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '	        //                Operator Overloads                    //' >> ClapTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (this == &rhs)' >> ClapTrap.cpp
	@printf "%s\n" '		return(*this);' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	this->trap_name = rhs.trap_name;' >> ClapTrap.cpp
	@printf "%s\n" '	this->hit_points = rhs.hit_points;' >> ClapTrap.cpp
	@printf "%s\n" '	this->energy_points = rhs.energy_points;' >> ClapTrap.cpp
	@printf "%s\n" '	this->attack_damage = rhs.attack_damage;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	return (*this);' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '	        //                  Member Functions                    //' >> ClapTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'void ClapTrap::attack(const std::string& target)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " wants to attack " << target' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW ". But "<< this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		return ;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->energy_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << BW " attacks " HT << target' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << BW ". But it " BL "fails" BW "! "<< std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  <<    "Looks like " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " Is out of energy!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " attacks " HT << target' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW ", causing " BL << this->attack_damage' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " points of damage!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		this->energy_points--;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'void ClapTrap::takeDamage(unsigned int amount)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " is attacked, but they are already " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		return ;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if ((unsigned int)this->hit_points < amount)' >> ClapTrap.cpp
	@printf "%s\n" '		this->hit_points = 0;' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '		this->hit_points -= amount;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " is overwhelmed by their oponent'\''s will! "<<std::endl' >> ClapTrap.cpp
	@printf "%s\n" '                  <<   "And recives " BL << amount' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " points of damage! They have"' >> ClapTrap.cpp
	@printf "%s\n" '				  << BL " DIED" BW "." RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " is overwhelmed by their oponent'\''s will! "<<std::endl' >> ClapTrap.cpp
	@printf "%s\n" '                  <<   "And recives " BL << amount' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " points of damage! They only have "' >> ClapTrap.cpp
	@printf "%s\n" '				  << LM <<this->hit_points' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " Hit Points left!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'void ClapTrap::beRepaired(unsigned int amount)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " wants to repair themselves"' >> ClapTrap.cpp
	@printf "%s\n" '				  <<   ". But "<< this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		return ;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->energy_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << BW " Tries to repair themselves. But it " BL "fails" BW "! "<< std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  <<    "Looks like " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " Is out of energy!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << LM " repairs " BW "themselves! " << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  <<    "They have recovered " LM << amount' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " Hit points!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		this->energy_points--;' >> ClapTrap.cpp
	@printf "%s\n" '		this->hit_points += amount;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp

strict_ClapTrap.hpp:
	@> ClapTrap.hpp
	@printf "%s\n" '/* ************************************************************************** */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                                            */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> ClapTrap.hpp
	@printf "%s\n" '/*   ClapTrap.hpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> ClapTrap.hpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> ClapTrap.hpp
	@printf "%s\n" '/*   Created: 2026/08/20 17:18:58 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> ClapTrap.hpp
	@printf "%s\n" '/*   Updated: 2026/08/21 17:24:00 by lde-san-           ▒ ░██  ██░ ▒          */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                         ██████             */' >> ClapTrap.hpp
	@printf "%s\n" '/*                                                                            */' >> ClapTrap.hpp
	@printf "%s\n" '/* ************************************************************************** */' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '#ifndef CLAPTRAP_HPP' >> ClapTrap.hpp
	@printf "%s\n" '# define CLAPTRAP_HPP' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '#include <string>' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" 'class ClapTrap' >> ClapTrap.hpp
	@printf "%s\n" '{' >> ClapTrap.hpp
	@printf "%s\n" '	public:' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '		ClapTrap();' >> ClapTrap.hpp
	@printf "%s\n" '		ClapTrap(std::string name);' >> ClapTrap.hpp
	@printf "%s\n" '		ClapTrap(ClapTrap const &original);' >> ClapTrap.hpp
	@printf "%s\n" '		~ClapTrap();' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '		void	attack(const std::string& target);' >> ClapTrap.hpp
	@printf "%s\n" '		void	takeDamage(unsigned int amount);' >> ClapTrap.hpp
	@printf "%s\n" '		void	beRepaired(unsigned int amount);' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '		ClapTrap &operator=(ClapTrap const &rhs);' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '	protected:' >> ClapTrap.hpp
	@printf "%s\n" '' >> ClapTrap.hpp
	@printf "%s\n" '		std::string	trap_name;' >> ClapTrap.hpp
	@printf "%s\n" '		int			hit_points;' >> ClapTrap.hpp
	@printf "%s\n" '		int			energy_points;' >> ClapTrap.hpp
	@printf "%s\n" '		int			attack_damage;' >> ClapTrap.hpp
	@printf "%s\n" '};' >> ClapTrap.hpp
	@printf "%s\n" '#endif' >> ClapTrap.hpp

strict_ScavTrap.cpp:
	@> ScavTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> ScavTrap.cpp
	@printf "%s\n" '/*   ScavTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> ScavTrap.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> ScavTrap.cpp
	@printf "%s\n" '/*   Created: 2026/08/21 09:39:27 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> ScavTrap.cpp
	@printf "%s\n" '/*   Updated: 2026/08/21 17:24:04 by lde-san-           ▒ ░██  ██░ ▒          */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> ScavTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> ScavTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '#include "ScavTrap.hpp"' >> ScavTrap.cpp
	@printf "%s\n" '#include "ClapTrap.hpp"' >> ScavTrap.cpp
	@printf "%s\n" '#include <iostream>' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '#ifndef DEBUG' >> ScavTrap.cpp
	@printf "%s\n" '# define DEBUG 1' >> ScavTrap.cpp
	@printf "%s\n" '#endif' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '# define RT	"\033[0m" // Reset' >> ScavTrap.cpp
	@printf "%s\n" '# define BW	"\033[1;37m" // Bold White' >> ScavTrap.cpp
	@printf "%s\n" '# define LM	"\033[1;38;2;0;255;0m" // Lime' >> ScavTrap.cpp
	@printf "%s\n" '# define BB	"\033[38;2;0;255;247m" // Baby Blue' >> ScavTrap.cpp
	@printf "%s\n" '# define BL	"\033[1;38;2;255;0;0m" // Blood Red' >> ScavTrap.cpp
	@printf "%s\n" '# define PR	"\033[1;38;2;174;5;252m" // Purple' >> ScavTrap.cpp
	@printf "%s\n" '# define HT	"\033[1;38;2;255;51;119m" // Hot Pink' >> ScavTrap.cpp
	@printf "%s\n" '# define MT	"\033[1;38;2;55;250;133m" // Mint' >> ScavTrap.cpp
	@printf "%s\n" '# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '	        //             Constructors & Destructor                //' >> ScavTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap::ScavTrap() : ClapTrap("Scavy")' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Default Constructor Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	this->trap_name = "Scavy";' >> ScavTrap.cpp
	@printf "%s\n" '	this->hit_points += 90;' >> ScavTrap.cpp
	@printf "%s\n" '	this->energy_points += 40;' >> ScavTrap.cpp
	@printf "%s\n" '	this->attack_damage = 20;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap::ScavTrap(std::string name)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Main Constructor Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	this->trap_name = name;' >> ScavTrap.cpp
	@printf "%s\n" '	this->hit_points += 90;' >> ScavTrap.cpp
	@printf "%s\n" '	this->energy_points += 40;' >> ScavTrap.cpp
	@printf "%s\n" '	this->attack_damage = 20;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap::ScavTrap(ScavTrap const &original) : ClapTrap()' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " RT << NR "Copy Constructor Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	this->trap_name = original.trap_name;' >> ScavTrap.cpp
	@printf "%s\n" '	this->hit_points = original.hit_points;' >> ScavTrap.cpp
	@printf "%s\n" '	this->energy_points = original.energy_points;' >> ScavTrap.cpp
	@printf "%s\n" '	this->attack_damage = original.attack_damage;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap::~ScavTrap()' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Destructor Called" RT << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '	        //                Operator Overloads                    //' >> ScavTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (this == &rhs)' >> ScavTrap.cpp
	@printf "%s\n" '		return(*this);' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	this->trap_name = rhs.trap_name;' >> ScavTrap.cpp
	@printf "%s\n" '	this->hit_points = rhs.hit_points;' >> ScavTrap.cpp
	@printf "%s\n" '	this->energy_points = rhs.energy_points;' >> ScavTrap.cpp
	@printf "%s\n" '	this->attack_damage = rhs.attack_damage;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return (*this);' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '	        //                  Member Functions                    //' >> ScavTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'void ScavTrap::attack(const std::string& target)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ScavTrap.cpp
	@printf "%s\n" '	{' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " wants to scav up " << target' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW ". But "<< this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '		return ;' >> ScavTrap.cpp
	@printf "%s\n" '	}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	if (this->energy_points < 1)' >> ScavTrap.cpp
	@printf "%s\n" '	{' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '			  	  << BW " scavenges " HT << target' >> ScavTrap.cpp
	@printf "%s\n" '			  	  << BW ". But it " BL "fails" BW "! "<< std::endl' >> ScavTrap.cpp
	@printf "%s\n" '				  <<    "Looks like " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " Is out of energy!" RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '	}' >> ScavTrap.cpp
	@printf "%s\n" '	else' >> ScavTrap.cpp
	@printf "%s\n" '	{' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " scavenges " HT << target' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW ", causing " BL << this->attack_damage' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " points of damage!" RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '		this->energy_points--;' >> ScavTrap.cpp
	@printf "%s\n" '	}' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" 'void	ScavTrap::guardGate(void)' >> ScavTrap.cpp
	@printf "%s\n" '{' >> ScavTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ScavTrap.cpp
	@printf "%s\n" '	{' >> ScavTrap.cpp
	@printf "%s\n" '		std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW " wants to guard the gate"' >> ScavTrap.cpp
	@printf "%s\n" '				  << BW ". But "<< this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '		return ;' >> ScavTrap.cpp
	@printf "%s\n" '	}' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	std::cout << PR "ScavTrap " MT << this->trap_name' >> ScavTrap.cpp
	@printf "%s\n" '			  << BW " is now guarding the gate!" RT << std::endl << std::endl;' >> ScavTrap.cpp
	@printf "%s\n" '' >> ScavTrap.cpp
	@printf "%s\n" '	return ;' >> ScavTrap.cpp
	@printf "%s\n" '}' >> ScavTrap.cpp

Mapache_ClapTrap.cpp:
	@> ClapTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> ClapTrap.cpp
	@printf "%s\n" '/*   ClapTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> ClapTrap.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> ClapTrap.cpp
	@printf "%s\n" '/*   Created: 2026/08/20 17:28:08 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> ClapTrap.cpp
	@printf "%s\n" '/*   Updated: 2026/08/21 20:07:27 by lde-san-           ▒ ░██  ██░ ▒          */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> ClapTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> ClapTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '#include "ClapTrap.hpp"' >> ClapTrap.cpp
	@printf "%s\n" '#include <iostream>' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '#ifndef DEBUG' >> ClapTrap.cpp
	@printf "%s\n" '# define DEBUG 1' >> ClapTrap.cpp
	@printf "%s\n" '#endif' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '# define RT	"\033[0m" // Reset' >> ClapTrap.cpp
	@printf "%s\n" '# define BW	"\033[1;37m" // Bold White' >> ClapTrap.cpp
	@printf "%s\n" '# define LM	"\033[1;38;2;0;255;0m" // Lime' >> ClapTrap.cpp
	@printf "%s\n" '# define BB	"\033[38;2;0;255;247m" // Baby Blue' >> ClapTrap.cpp
	@printf "%s\n" '# define BL	"\033[1;38;2;255;0;0m" // Blood Red' >> ClapTrap.cpp
	@printf "%s\n" '# define OG	"\033[38;2;255;153;51m" // Orange' >> ClapTrap.cpp
	@printf "%s\n" '# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow' >> ClapTrap.cpp
	@printf "%s\n" '# define HT	"\033[1;38;2;255;51;119m" // Hot Pink' >> ClapTrap.cpp
	@printf "%s\n" '# define MT	"\033[1;38;2;55;250;133m" // Mint' >> ClapTrap.cpp
	@printf "%s\n" '# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '	        //             Constructors & Destructor                //' >> ClapTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap::ClapTrap() : trap_name("Trappy"), hit_points(10), energy_points(10), attack_damage(0)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Default Constructor Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap::ClapTrap(std::string name) : trap_name(name), hit_points(10), energy_points(10), attack_damage(0)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Main Constructor Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap::ClapTrap(ClapTrap const &original)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Copy Constructor Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	this->trap_name = original.trap_name;' >> ClapTrap.cpp
	@printf "%s\n" '	this->hit_points = original.hit_points;' >> ClapTrap.cpp
	@printf "%s\n" '	this->energy_points = original.energy_points;' >> ClapTrap.cpp
	@printf "%s\n" '	this->attack_damage = original.attack_damage;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap::~ClapTrap()' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Destructor Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '	        //                Operator Overloads                    //' >> ClapTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BW BB "ClapTrap " RT << NR "Assignment Operator Called" RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if (this == &rhs)' >> ClapTrap.cpp
	@printf "%s\n" '		return(*this);' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	this->trap_name = rhs.trap_name;' >> ClapTrap.cpp
	@printf "%s\n" '	this->hit_points = rhs.hit_points;' >> ClapTrap.cpp
	@printf "%s\n" '	this->energy_points = rhs.energy_points;' >> ClapTrap.cpp
	@printf "%s\n" '	this->attack_damage = rhs.attack_damage;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	return (*this);' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '	        //                  Member Functions                    //' >> ClapTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'void ClapTrap::attack(const std::string& target)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " wants to attack " << target' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW ". But "<< this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		return ;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->energy_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << BW " attacks " HT << target' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << BW ". But it " BL "fails" BW "! "<< std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  <<    "Looks like " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " Is out of energy!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " attacks " HT << target' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW ", causing " BL << this->attack_damage' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " points of damage!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		this->energy_points--;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'void	ClapTrap::state_display(void) const' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->trap_name == "RaccTrap")' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BB << "/* ***********************************/" << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  << GD <<"       ▓░░▓       "<< MT "Name" BW ": " << GD << this->trap_name << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  << GD <<"        ░░   ░▒   "<< std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  << GD <<"       ░░░░  ░▒   "<< MT "HP" BW ": " << LM << this->hit_points << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  << GD <<"   ██▓  ██  ▓██   "<< MT "EP" BW ": " << HT << this->energy_points << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  << GD <<"   ▒░ ██  ██      "<< std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  << GD <<"      ██████      "<< MT "Attack Damage" BW ": " << BL << this->attack_damage << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  << BB << "/* ***********************************/" << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  << RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << BB << "/* ***********************************/" << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << OG <<"       ▓░░▓       "<< MT "Name" BW ": " << GD << this->trap_name << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << OG <<"        ░░        "<< std::endl' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << OG <<"       ░░░░       "<< MT "HP" BW ": " << LM << this->hit_points << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << OG <<"   ██▓  ██  ▓██   "<< MT "EP" BW ": " << HT << this->energy_points << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << OG <<"   ▒░ ██  ██ ░▒   "<< std::endl' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << OG <<"      ██████      "<< MT "Attack Damage" BW ": " << BL << this->attack_damage << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << BB << "/* ***********************************/" << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << RT << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'void ClapTrap::takeDamage(unsigned int amount)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " is attacked, but they are already " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		return ;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if ((unsigned int)this->hit_points < amount)' >> ClapTrap.cpp
	@printf "%s\n" '		this->hit_points = 0;' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '		this->hit_points -= amount;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " is overwhelmed by their oponent'\''s will! "<<std::endl' >> ClapTrap.cpp
	@printf "%s\n" '                  <<   "And recives " BL << amount' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " points of damage! They have"' >> ClapTrap.cpp
	@printf "%s\n" '				  << BL " DIED" BW "." RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " is overwhelmed by their oponent'\''s will! "<<std::endl' >> ClapTrap.cpp
	@printf "%s\n" '                  <<   "And recives " BL << amount' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " points of damage! They only have "' >> ClapTrap.cpp
	@printf "%s\n" '				  << LM <<this->hit_points' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " Hit Points left!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" 'void ClapTrap::beRepaired(unsigned int amount)' >> ClapTrap.cpp
	@printf "%s\n" '{' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " wants to repair themselves"' >> ClapTrap.cpp
	@printf "%s\n" '				  <<   ". But "<< this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		return ;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '' >> ClapTrap.cpp
	@printf "%s\n" '	if (this->energy_points < 1)' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '			  	  << BW " Tries to repair themselves. But it " BL "fails" BW "! "<< std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  <<    "Looks like " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " Is out of energy!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	else' >> ClapTrap.cpp
	@printf "%s\n" '	{' >> ClapTrap.cpp
	@printf "%s\n" '		std::cout << OG "Trap " MT << this->trap_name' >> ClapTrap.cpp
	@printf "%s\n" '				  << LM " repairs " BW "themselves! " << std::endl' >> ClapTrap.cpp
	@printf "%s\n" '				  <<    "They have recovered " LM << amount' >> ClapTrap.cpp
	@printf "%s\n" '				  << BW " Hit points!" RT << std::endl << std::endl;' >> ClapTrap.cpp
	@printf "%s\n" '		this->energy_points--;' >> ClapTrap.cpp
	@printf "%s\n" '		this->hit_points += amount;' >> ClapTrap.cpp
	@printf "%s\n" '	}' >> ClapTrap.cpp
	@printf "%s\n" '	return ;' >> ClapTrap.cpp
	@printf "%s\n" '}' >> ClapTrap.cpp

Mapache_FragTrap.cpp:
	@> FragTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> FragTrap.cpp
	@printf "%s\n" '/*   FragTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> FragTrap.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> FragTrap.cpp
	@printf "%s\n" '/*   Created: 2026/08/21 18:25:26 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> FragTrap.cpp
	@printf "%s\n" '/*   Updated: 2026/08/21 20:11:19 by lde-san-           ▒ ░██  ██░ ▒          */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> FragTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '#include "FragTrap.hpp"' >> FragTrap.cpp
	@printf "%s\n" '#include <iostream>' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '#ifndef DEBUG' >> FragTrap.cpp
	@printf "%s\n" '# define DEBUG 1' >> FragTrap.cpp
	@printf "%s\n" '#endif' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '# define RT	"\033[0m" // Reset' >> FragTrap.cpp
	@printf "%s\n" '# define BW	"\033[1;37m" // Bold White' >> FragTrap.cpp
	@printf "%s\n" '# define LM	"\033[1;38;2;0;255;0m" // Lime' >> FragTrap.cpp
	@printf "%s\n" '# define BB	"\033[38;2;0;255;247m" // Baby Blue' >> FragTrap.cpp
	@printf "%s\n" '# define BL	"\033[1;38;2;255;0;0m" // Blood Red' >> FragTrap.cpp
	@printf "%s\n" '# define PR	"\033[1;38;2;174;5;252m" // Purple' >> FragTrap.cpp
	@printf "%s\n" '# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow' >> FragTrap.cpp
	@printf "%s\n" '# define HT	"\033[1;38;2;255;51;119m" // Hot Pink' >> FragTrap.cpp
	@printf "%s\n" '# define MT	"\033[1;38;2;55;250;133m" // Mint' >> FragTrap.cpp
	@printf "%s\n" '# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '	        //             Constructors & Destructor                //' >> FragTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap::FragTrap() : ClapTrap("Froggy Nelson")' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Default Constructor Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	this->hit_points += 90;' >> FragTrap.cpp
	@printf "%s\n" '	this->energy_points += 90;' >> FragTrap.cpp
	@printf "%s\n" '	this->attack_damage = 30;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap::FragTrap(std::string name) : ClapTrap(name)' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Main Constructor Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	this->hit_points += 90;' >> FragTrap.cpp
	@printf "%s\n" '	this->energy_points += 90;' >> FragTrap.cpp
	@printf "%s\n" '	this->attack_damage = 30;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap::FragTrap(FragTrap const &original) : ClapTrap(original)' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " RT << NR "Copy Constructor Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap::~FragTrap()' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Destructor Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '	        //                Operator Overloads                    //' >> FragTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap &FragTrap::operator=(FragTrap const &rhs)' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " RT << NR "Assignment Operator Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	if (this == &rhs)' >> FragTrap.cpp
	@printf "%s\n" '		return(*this);' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	ClapTrap::operator=(rhs);' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return (*this);' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '	        //                  Member Functions                    //' >> FragTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'void	FragTrap::highFivesGuys(void)' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	static bool	high_five = true;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> FragTrap.cpp
	@printf "%s\n" '	{' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << GD "FragTrap " MT << this->trap_name' >> FragTrap.cpp
	@printf "%s\n" '				  << BW " wants to give you a high five!"' >> FragTrap.cpp
	@printf "%s\n" '				  << BW ". But "<< this->trap_name' >> FragTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '		return ;' >> FragTrap.cpp
	@printf "%s\n" '	}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	if (high_five)' >> FragTrap.cpp
	@printf "%s\n" '	{' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << LM "++"' >> FragTrap.cpp
	@printf "%s\n" '				  << GD "FragTrap " MT << this->trap_name' >> FragTrap.cpp
	@printf "%s\n" '				  << BW " wants to give you a high five!" << LM "++" RT << std::endl << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '		high_five = false;' >> FragTrap.cpp
	@printf "%s\n" '	}' >> FragTrap.cpp
	@printf "%s\n" '	else' >> FragTrap.cpp
	@printf "%s\n" '	{' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << LM "++"' >> FragTrap.cpp
	@printf "%s\n" '				  << GD "FragTrap " MT << this->trap_name' >> FragTrap.cpp
	@printf "%s\n" '				  << BW " has been hanging for a bit. " <<std::endl' >> FragTrap.cpp
	@printf "%s\n" '				  << "But you'\''ve finally returned the high five!"<< HT " Yey! " << LM "++" RT <<  std::endl << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '		high_five = true;' >> FragTrap.cpp
	@printf "%s\n" '	}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp

Mapache_main.cpp:
	@> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> main.cpp
	@printf "%s\n" '/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> main.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> main.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> main.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> main.cpp
	@printf "%s\n" '/*   Created: 2026/08/20 18:43:56 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> main.cpp
	@printf "%s\n" '/*   Updated: 2026/08/21 22:06:04 by lde-san-           ▒ ░██  ██░ ▒          */' >> main.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#include "ClapTrap.hpp"' >> main.cpp
	@printf "%s\n" '#include "ScavTrap.hpp"' >> main.cpp
	@printf "%s\n" '#include "FragTrap.hpp"' >> main.cpp
	@printf "%s\n" '#include <iostream>' >> main.cpp
	@printf "%s\n" '#include <string>' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'using std::cin;' >> main.cpp
	@printf "%s\n" 'using std::cout;' >> main.cpp
	@printf "%s\n" 'using std::endl;' >> main.cpp
	@printf "%s\n" 'using std::string;' >> main.cpp
	@printf "%s\n" 'using std::getline;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void exhaust(ClapTrap &trap1, ClapTrap &trap2, ClapTrap &trap3)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void battle(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy("Scavy");' >> main.cpp
	@printf "%s\n" '	ClapTrap	clappy("Clappy");' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy;' >> main.cpp
	@printf "%s\n" '	string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "A ScavTrap, FragTrap and ClapTrap object have been created. Displaying current state:" << endl;' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	clappy.state_display();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "They can take damage." << endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '	fragy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '	clappy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	clappy.state_display();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "They can be repaired." << endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.beRepaired(50);' >> main.cpp
	@printf "%s\n" '	fragy.beRepaired(50);' >> main.cpp
	@printf "%s\n" '	clappy.beRepaired(50);' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	clappy.state_display();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "They can run out of energy." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	exhaust(scavy, clappy, fragy);' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	clappy.state_display();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "They can die." << endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.takeDamage(1000);' >> main.cpp
	@printf "%s\n" '	fragy.takeDamage(1000);' >> main.cpp
	@printf "%s\n" '	clappy.takeDamage(1000);' >> main.cpp
	@printf "%s\n" '	scavy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	fragy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	clappy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	scavy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	scavy.guardGate();' >> main.cpp
	@printf "%s\n" '	fragy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	fragy.highFivesGuys();' >> main.cpp
	@printf "%s\n" '	clappy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	clappy.state_display();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "Exiting function scope... This should destroy the object" << endl' >> main.cpp
	@printf "%s\n" '		<< "in reverse order of creation." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void	hitem(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy("Scavy");' >> main.cpp
	@printf "%s\n" '	ClapTrap	clappy("Clappy");' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy("RaccTrap");' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "A ScavTrap, FragTrap and ClapTrap object have been created. Displaying current state:" << endl;' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	clappy.state_display();' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The ScavTrap, FragTrap and ClapTrap will now attack a target. Showcasing that the" << endl' >> main.cpp
	@printf "%s\n" '		<< "The attack method is different for only one class." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	clappy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	scavy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	fragy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The ScavTrap will now guard the gate." << endl' >> main.cpp
	@printf "%s\n" '		<< "This method is unique to the ScavTrap class." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.guardGate();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The FragTrap will now ask for a High... Wait a minute..." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '	  	<< "Is that what you'\''ve been asking for this whole time? A high five?" << endl' >> main.cpp
	@printf "%s\n" '		<< "You should'\''ve said something!" << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '	fragy.highFivesGuys();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "This method is unique to the FragTrap class." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "Exiting function scope... This should destroy the objects." << endl' >> main.cpp
	@printf "%s\n" '		<< "in reverse order of creation." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void	clone(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy("Helena");' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy("RaccTrap");' >> main.cpp
	@printf "%s\n" '	string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "A ScavTrap and a FragTrap object have been created. Displaying current state:" << endl;' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< "They will now take damage to show the atributes being copied correctly." << endl' >> main.cpp
	@printf "%s\n" '		<< "The takeDamage method is inherited from the ClapTrap class." << endl<< endl;' >> main.cpp
	@printf "%s\n" '	scavy.takeDamage(42);' >> main.cpp
	@printf "%s\n" '	fragy.takeDamage(42);' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "Each copy constructor will be called to create a new ScavTrap and FragTrap object." << endl' >> main.cpp
	@printf "%s\n" '		<< "Since they derived from the ClapTrap class, they  can use the same" << endl' >> main.cpp
	@printf "%s\n" '		<< "copy constructor. The debug messages below should show this." << endl << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy_clone(scavy);' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy_clone(fragy);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The copy constructor has been called. Displaying current state of the objects:" << endl;' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	scavy_clone.state_display();' >> main.cpp
	@printf "%s\n" '	cout<< endl;' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	fragy_clone.state_display();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	ScavTrap	def_scav;' >> main.cpp
	@printf "%s\n" '	FragTrap	def_frag;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	def_scav.state_display();' >> main.cpp
	@printf "%s\n" '	def_frag.state_display();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "A default ScavTrap & FragTrap have been created. Their assignment operator will be called" << endl' >> main.cpp
	@printf "%s\n" '		<< "to assign the values of the original objects." << endl' >> main.cpp
	@printf "%s\n" '		<< "Since they derived from the ClapTrap class, they  can use the same" << endl' >> main.cpp
	@printf "%s\n" '		<< "assignment operator overload. The debug messages below should show this." << endl << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	def_scav = scavy;' >> main.cpp
	@printf "%s\n" '	def_frag = fragy;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The assignment operator has been called. Displaying current state of the objects:" << endl;' >> main.cpp
	@printf "%s\n" '	scavy.state_display();' >> main.cpp
	@printf "%s\n" '	def_scav.state_display();' >> main.cpp
	@printf "%s\n" '	cout<< endl;' >> main.cpp
	@printf "%s\n" '	fragy.state_display();' >> main.cpp
	@printf "%s\n" '	def_frag.state_display();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "Exiting function scope... This should destroy the objects in reverse order of creation." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void	filo(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy;' >> main.cpp
	@printf "%s\n" '	string		stopper;' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy("RaccTrap");' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The local objects ScavTrap and FragTrap have been created. The ClapTrap should'\''ve" << endl' >> main.cpp
	@printf "%s\n" '		<< "been created first, then ScavTrap, then the ClapTrap again and finally the FragTrap." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "Exiting function scope... This should destroy the objects" << endl' >> main.cpp
	@printf "%s\n" '		<< "in reverse order of creation." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'int	main(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	string		stopper;' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy("RaccTrap");' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	fragy.highFivesGuys();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "Demonstrating order of construction & destruction of objects in inheritance:" << endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The following function call, simply defines local objects of type ScavTrap, and FragTrap then returns." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '	filo();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The following function call, will test the ScavTrap & FragTrap copying capabilities." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '	clone();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The following function call, will test the attack method, ScavTrap'\''s guard method, "<<endl' >> main.cpp
	@printf "%s\n" '		<< "and will figure out why FragTrap has his hand raised. " << endl<< endl;' >> main.cpp
	@printf "%s\n" '	hitem();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The following function call, will test the remaining methods. Showcasing the ScavTrap and FragTrap'\''s differences." << endl;' >> main.cpp
	@printf "%s\n" '	battle();' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	cout<< endl' >> main.cpp
	@printf "%s\n" '		<< "The program will now exit." << endl;' >> main.cpp
	@printf "%s\n" '	getline(cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return (0);' >> main.cpp
	@printf "%s\n" '}' >> main.cpp

strict_FragTrap.cpp:
	@> FragTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> FragTrap.cpp
	@printf "%s\n" '/*   FragTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> FragTrap.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> FragTrap.cpp
	@printf "%s\n" '/*   Created: 2026/08/21 18:25:26 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> FragTrap.cpp
	@printf "%s\n" '/*   Updated: 2026/08/21 22:30:24 by lde-san-           ▒ ░██  ██░ ▒          */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> FragTrap.cpp
	@printf "%s\n" '/*                                                                            */' >> FragTrap.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '#include "FragTrap.hpp"' >> FragTrap.cpp
	@printf "%s\n" '#include <iostream>' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '#ifndef DEBUG' >> FragTrap.cpp
	@printf "%s\n" '# define DEBUG 1' >> FragTrap.cpp
	@printf "%s\n" '#endif' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '# define RT	"\033[0m" // Reset' >> FragTrap.cpp
	@printf "%s\n" '# define BW	"\033[1;37m" // Bold White' >> FragTrap.cpp
	@printf "%s\n" '# define LM	"\033[1;38;2;0;255;0m" // Lime' >> FragTrap.cpp
	@printf "%s\n" '# define BB	"\033[38;2;0;255;247m" // Baby Blue' >> FragTrap.cpp
	@printf "%s\n" '# define BL	"\033[1;38;2;255;0;0m" // Blood Red' >> FragTrap.cpp
	@printf "%s\n" '# define PR	"\033[1;38;2;174;5;252m" // Purple' >> FragTrap.cpp
	@printf "%s\n" '# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow' >> FragTrap.cpp
	@printf "%s\n" '# define HT	"\033[1;38;2;255;51;119m" // Hot Pink' >> FragTrap.cpp
	@printf "%s\n" '# define MT	"\033[1;38;2;55;250;133m" // Mint' >> FragTrap.cpp
	@printf "%s\n" '# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '	        //             Constructors & Destructor                //' >> FragTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap::FragTrap()' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	this->trap_name = "Froggy Nelson";' >> FragTrap.cpp
	@printf "%s\n" '	this->hit_points += 90;' >> FragTrap.cpp
	@printf "%s\n" '	this->energy_points += 90;' >> FragTrap.cpp
	@printf "%s\n" '	this->attack_damage = 30;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Default Constructor Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap::FragTrap(std::string name)' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	this->trap_name = name;' >> FragTrap.cpp
	@printf "%s\n" '	this->hit_points += 90;' >> FragTrap.cpp
	@printf "%s\n" '	this->energy_points += 90;' >> FragTrap.cpp
	@printf "%s\n" '	this->attack_damage = 30;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Main Constructor Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap::FragTrap(FragTrap const &original) : ClapTrap()' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " RT << NR "Copy Constructor Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	this->trap_name = original.trap_name;' >> FragTrap.cpp
	@printf "%s\n" '	this->hit_points = original.hit_points;' >> FragTrap.cpp
	@printf "%s\n" '	this->energy_points = original.energy_points;' >> FragTrap.cpp
	@printf "%s\n" '	this->attack_damage = original.attack_damage;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap::~FragTrap()' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	if (DEBUG)' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Destructor Called" RT << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '	        //                Operator Overloads                    //' >> FragTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'FragTrap &FragTrap::operator=(FragTrap const &rhs)' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	if (this == &rhs)' >> FragTrap.cpp
	@printf "%s\n" '		return(*this);' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	this->trap_name = rhs.trap_name;' >> FragTrap.cpp
	@printf "%s\n" '	this->hit_points = rhs.hit_points;' >> FragTrap.cpp
	@printf "%s\n" '	this->energy_points = rhs.energy_points;' >> FragTrap.cpp
	@printf "%s\n" '	this->attack_damage = rhs.attack_damage;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return (*this);' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '		     //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '	        //                  Member Functions                    //' >> FragTrap.cpp
	@printf "%s\n" '	       //******************************************************//' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" 'void	FragTrap::highFivesGuys(void)' >> FragTrap.cpp
	@printf "%s\n" '{' >> FragTrap.cpp
	@printf "%s\n" '	static bool	high_five = true;' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	if (this->hit_points < 1)' >> FragTrap.cpp
	@printf "%s\n" '	{' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << GD "FragTrap " MT << this->trap_name' >> FragTrap.cpp
	@printf "%s\n" '				  << BW " wants to give you a high five!"' >> FragTrap.cpp
	@printf "%s\n" '				  << BW ". But "<< this->trap_name' >> FragTrap.cpp
	@printf "%s\n" '				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '		return ;' >> FragTrap.cpp
	@printf "%s\n" '	}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	if (high_five)' >> FragTrap.cpp
	@printf "%s\n" '	{' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << LM "++"' >> FragTrap.cpp
	@printf "%s\n" '				  << GD "FragTrap " MT << this->trap_name' >> FragTrap.cpp
	@printf "%s\n" '				  << BW " wants to give you a high five!" << LM "++" RT << std::endl << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '		high_five = false;' >> FragTrap.cpp
	@printf "%s\n" '	}' >> FragTrap.cpp
	@printf "%s\n" '	else' >> FragTrap.cpp
	@printf "%s\n" '	{' >> FragTrap.cpp
	@printf "%s\n" '		std::cout << LM "++"' >> FragTrap.cpp
	@printf "%s\n" '				  << GD "FragTrap " MT << this->trap_name' >> FragTrap.cpp
	@printf "%s\n" '				  << BW " has been hanging for a bit. " <<std::endl' >> FragTrap.cpp
	@printf "%s\n" '				  << "But you'\''ve finally returned the high five!"<< HT " Yey! " << LM "++" RT <<  std::endl << std::endl;' >> FragTrap.cpp
	@printf "%s\n" '		high_five = true;' >> FragTrap.cpp
	@printf "%s\n" '	}' >> FragTrap.cpp
	@printf "%s\n" '' >> FragTrap.cpp
	@printf "%s\n" '	return ;' >> FragTrap.cpp
	@printf "%s\n" '}' >> FragTrap.cpp

strict_main.cpp:
	@> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> main.cpp
	@printf "%s\n" '/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> main.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> main.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> main.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> main.cpp
	@printf "%s\n" '/*   Created: 2026/08/20 18:43:56 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> main.cpp
	@printf "%s\n" '/*   Updated: 2026/08/21 22:05:23 by lde-san-           ▒ ░██  ██░ ▒          */' >> main.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#include "ClapTrap.hpp"' >> main.cpp
	@printf "%s\n" '#include "ScavTrap.hpp"' >> main.cpp
	@printf "%s\n" '#include "FragTrap.hpp"' >> main.cpp
	@printf "%s\n" '#include <iostream>' >> main.cpp
	@printf "%s\n" '#include <string>' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void firstAct(ClapTrap &trappy, ClapTrap &verud)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	trappy.attack("Verudora");' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	verud.takeDamage(5);' >> main.cpp
	@printf "%s\n" '	verud.beRepaired(3);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	verud.attack("Trappy");' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	trappy.takeDamage(7);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void secondAct(ClapTrap &trappy, ClapTrap &verud)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '	ClapTrap	clone(verud);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<<"Trappy gathers all their might. In an attempt to deliver"<<std::endl' >> main.cpp
	@printf "%s\n" '		<<"a final attack"<<std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	trappy.attack("Verudora (clone)");' >> main.cpp
	@printf "%s\n" '	trappy.attack("Verudora (clone)");' >> main.cpp
	@printf "%s\n" '	trappy.attack("Verudora (clone)");' >> main.cpp
	@printf "%s\n" '	trappy.attack("Verudora (clone)");' >> main.cpp
	@printf "%s\n" '	trappy.attack("Verudora (clone)");' >> main.cpp
	@printf "%s\n" '	trappy.attack("Verudora (clone)");' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	clone.takeDamage(80);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void finalAct(ClapTrap &trappy, ClapTrap &verud)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	verud.beRepaired(60);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	std::cout<<"And charges mindlessly at the confused Trappy"<<std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	verud.attack("Trappy");' >> main.cpp
	@printf "%s\n" '	trappy.takeDamage(100);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	std::cout<<"It'\''s carnage incarnated... Even Verudora takes damage himself."<<std::endl<<std::endl;' >> main.cpp
	@printf "%s\n" '	verud.takeDamage(42);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<<"Trappy in dispair, tries everything with his last breath"<<std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(10);' >> main.cpp
	@printf "%s\n" '	trappy.attack("Verudora");' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(10);' >> main.cpp
	@printf "%s\n" '	trappy.attack("a rock");' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(10);' >> main.cpp
	@printf "%s\n" '	trappy.attack("the floor");' >> main.cpp
	@printf "%s\n" '	trappy.beRepaired(10);' >> main.cpp
	@printf "%s\n" '	trappy.attack("Trappy");' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	verud.takeDamage(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void first_exercise_tests(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ClapTrap	trappy;' >> main.cpp
	@printf "%s\n" '	ClapTrap	verud("Verudora Tempest");' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<<"The frightful day had arrived, when Trappy and Verudora"<<std::endl' >> main.cpp
	@printf "%s\n" '		<<"will have their final match..."<<std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	firstAct(trappy, verud);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<<"Verudora feels cornered. Decides to try and make a clone"<<std::endl' >> main.cpp
	@printf "%s\n" '		<<"to confuse Trappy."<<std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	secondAct(trappy, verud);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<<"Is he dead?.. From the shadows, The real Verudora regains his forces"<<std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	finalAct(trappy, verud);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<<"Then Trappy, hopeless and lifeless. Manages to whisper his final words"<<std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<<"\033[1;38;2;55;250;133m"' >> main.cpp
	@printf "%s\n" '		<<"Trappy: "' >> main.cpp
	@printf "%s\n" '		<<"\033[3m\033[38;2;255;153;51m"' >> main.cpp
	@printf "%s\n" '		<<"yoMama.attack(); hit harder last night..."' >> main.cpp
	@printf "%s\n" '		<<"\033[0m"<<std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	verud.takeDamage(999);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void exhaust(ClapTrap &trap1, ClapTrap &trap2, ClapTrap &trap3)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap1.beRepaired(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void battle(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ScavTrap		scavy("Scavy");' >> main.cpp
	@printf "%s\n" '	ClapTrap		clappy("Clappy");' >> main.cpp
	@printf "%s\n" '	FragTrap		fragy;' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "A ScavTrap, FragTrap and ClapTrap object have been created." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "They can take damage." << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '	fragy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '	clappy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "They can be repaired." << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.beRepaired(50);' >> main.cpp
	@printf "%s\n" '	fragy.beRepaired(50);' >> main.cpp
	@printf "%s\n" '	clappy.beRepaired(50);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "They can run out of energy." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	exhaust(scavy, clappy, fragy);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "They can die." << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.takeDamage(1000);' >> main.cpp
	@printf "%s\n" '	fragy.takeDamage(1000);' >> main.cpp
	@printf "%s\n" '	clappy.takeDamage(1000);' >> main.cpp
	@printf "%s\n" '	scavy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	fragy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	clappy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	scavy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	scavy.guardGate();' >> main.cpp
	@printf "%s\n" '	fragy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	fragy.highFivesGuys();' >> main.cpp
	@printf "%s\n" '	clappy.beRepaired(1);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "Exiting function scope... This should destroy the object" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "in reverse order of creation." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void	hitem(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy("Scavy");' >> main.cpp
	@printf "%s\n" '	ClapTrap	clappy("Clappy");' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy("RaccTrap");' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "A ScavTrap, FragTrap and ClapTrap object have been created." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The ScavTrap, FragTrap and ClapTrap will now attack a target. Showcasing that the" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "The attack method is different for only one class." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	clappy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	scavy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	fragy.attack("Target Dummy");' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The ScavTrap will now guard the gate." << std::endl' >> main.cpp
	@printf "%s\n" '		<< "This method is unique to the ScavTrap class." << std::endl;' >> main.cpp
	@printf "%s\n" '	getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.guardGate();' >> main.cpp
	@printf "%s\n" '	getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The FragTrap will now ask for a High... Wait a minute..." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '	  	<< "Is that what you'\''ve been asking for this whole time? A high five?" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "You should'\''ve said something!" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	fragy.highFivesGuys();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "This method is unique to the FragTrap class." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "Exiting function scope... This should destroy the objects." << std::endl' >> main.cpp
	@printf "%s\n" '		<< "in reverse order of creation." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void	clone(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy("Helena");' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy("RaccTrap");' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "A ScavTrap and a FragTrap object have been created." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< "They will now take damage to show the atributes being copied correctly." << std::endl' >> main.cpp
	@printf "%s\n" '		<< "The takeDamage method is inherited from the ClapTrap class." << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '	scavy.takeDamage(42);' >> main.cpp
	@printf "%s\n" '	fragy.takeDamage(42);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "Each copy constructor will be called to create a new ScavTrap and FragTrap object." << std::endl' >> main.cpp
	@printf "%s\n" '		<< "Because the classes are derived from the ClapTrap class, they need to call" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "its default constructor first. The debug messages below should show this." << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy_clone(scavy);' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy_clone(fragy);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The copy constructor has been called. They will now both receive damage to showcase" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "That their data is the same." <<std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '	fragy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	ScavTrap	def_scav;' >> main.cpp
	@printf "%s\n" '	FragTrap	def_frag;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "A default ScavTrap & FragTrap have been created. Their assignment operator will be called" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "to assign the values of the original objects." << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	def_scav = scavy;' >> main.cpp
	@printf "%s\n" '	def_frag = fragy;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The assignment operator has been called. They will now both receive damage to showcase" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "That their data is the same." <<std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	scavy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '	fragy.takeDamage(1);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "Exiting function scope... This should destroy the objects in reverse order of creation." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void	filo(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	ScavTrap	scavy;' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy("RaccTrap");' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The local objects ScavTrap and FragTrap have been created. The ClapTrap should'\''ve" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "been created first, then ScavTrap, then the ClapTrap again and finally the FragTrap." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "Exiting function scope... This should destroy the objects" << std::endl' >> main.cpp
	@printf "%s\n" '		<< "in reverse order of creation." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'int	main(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string		stopper;' >> main.cpp
	@printf "%s\n" '	FragTrap	fragy("RaccTrap");' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	fragy.highFivesGuys();' >> main.cpp
	@printf "%s\n" '	getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "Demonstrating order of construction & destruction of objects in inheritance:" << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The following function call, simply defines local objects of type ScavTrap, and FragTrap then returns." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	filo();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The following function call, will test the ScavTrap & FragTrap copying capabilities." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	clone();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The following function call, will test the attack method, ScavTrap'\''s guard method, "<<std::endl' >> main.cpp
	@printf "%s\n" '		<< "and will figure out why FragTrap has his hand raised. " << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '	hitem();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '		<< "The following function call, will test the remaining methods. Showcasing the ScavTrap and FragTrap'\''s differences." << std::endl;' >> main.cpp
	@printf "%s\n" '	battle();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout<< std::endl' >> main.cpp
	@printf "%s\n" '			 << "The tests for ex01 are done. Starting ex00 tests..." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	first_exercise_tests();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return (0);' >> main.cpp
	@printf "%s\n" '}' >> main.cpp

.PHONY: all clean fclean re open leaks Mapache_ClapTrap.cpp Mapache_ClapTrap.hpp Mapache_main.cpp Mapache_ScavTrap.cpp Mapache_FragTrap.cpp strict_ClapTrap.cpp strict_ClapTrap.hpp strict_main.cpp strict_ScavTrap.cpp strict_FragTrap.cpp
