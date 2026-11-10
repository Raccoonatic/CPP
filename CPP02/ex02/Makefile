# **************************************************************************** #
#                                                                              #
#                                                    ▒▓              ▓▒        #
#    Makefile                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒       #
#                                                   ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒       #
#    By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█        #
#                                                    ███████░░░░███████        #
#    Created: 2026/08/14 12:43:50 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░       #
#    Updated: 2026/08/20 20:07:17 by lde-san-           ▒ ░██  ██░ ▒           #
#                                                          ██████              #
#                                                                              #
# **************************************************************************** #

NAME = fixed
LIB = $(OBJ_DIR)libfixed.a
DEBUG ?= 0

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

CLASSES = Fixed.hpp

FILE = Fixed.cpp

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

perfect: echoe_expected_out echoe_subject_main.cpp
	@make re -C .
	@printf "\n$(MINT)Perfect output set: $(RSET)\n"
	./$(NAME)
	@make echoe_mapache_main.cpp -C .
	@printf "\n$(ORNG)"
	./$(NAME) > racc_fixed
	@sleep 1
	@printf "$(RSET)"
	@printf "\n$(LIME)Checking diff...$(RSET)"
	@sleep 1
	@printf "$(BABY)\n"
	diff -u racc_fixed expected_out
	@rm -f expected_out racc_fixed
	@printf "$(RSET)\n"

echoe_mapache_main.cpp:
	@> main.cpp
	@printf '$(MINT)/* ************************************************************************** */\n'
	@printf '$(MINT)/*                                                                            */\n'
	@printf '$(MINT)/*                                                   ▒▓              ▓▒       */\n'
	@printf '$(MINT)/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */\n'
	@printf '$(MINT)/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */\n'
	@printf '$(MINT)/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */\n'
	@printf '$(MINT)/*                                                   ███████░░░░███████       */\n'
	@printf '$(MINT)/*   Created: 2026/08/18 18:43:35 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */\n'
	@printf '$(MINT)/*   Updated: 2026/08/20 15:58:05 by lde-san-           ▒ ░██  ██░ ▒          */\n'
	@printf '$(MINT)/*                                                         ██████             */\n'
	@printf '$(MINT)/*                                                                            */\n'
	@printf '$(MINT)/* ************************************************************************** */\n'
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> main.cpp
	@printf "%s\n" '/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> main.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> main.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> main.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> main.cpp
	@printf "%s\n" '/*   Created: 2026/08/18 18:43:35 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> main.cpp
	@printf "%s\n" '/*   Updated: 2026/08/20 15:58:05 by lde-san-           ▒ ░██  ██░ ▒          */' >> main.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#include "Fixed.hpp"' >> main.cpp
	@printf "%s\n" '#include <iostream>' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'static void myTests(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	Fixed		a;' >> main.cpp
	@printf "%s\n" '	const float	nice = 69;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << "\t//Mapache'\''s Tests//"<<std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Fixed a was initialized with: "<< a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Now a will be set to: "<< nice << std::endl;' >> main.cpp
	@printf "%s\n" '	a.setRawBits(69);' >> main.cpp
	@printf "%s\n" '	std::cout << nice << " divided by 256 is: "<< (nice / 256) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Which should be same as the current value of a: "<< a << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	float i = 1;' >> main.cpp
	@printf "%s\n" '	Fixed b((i / 256));' >> main.cpp
	@printf "%s\n" '	Fixed c(2);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "float i was initialized with: "<< i << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Shifting that 8 bits to the right gives us: " << (i / 256) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Giving us the minimum possible value." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Fixed b was initializated to this minimal value, and Fixed c to: " << c << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Therefore, multipliying b * c: " << (b * c) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Should be the same as ++b: " << (++b) << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Now b = " << b << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "And doing b++ should show the same vaulue: " << b++ << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Even if b becomes: " << b << " right after that." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "An doing these operations: b++; b--; --b;" << std::endl;' >> main.cpp
	@printf "%s\n" '	b++;' >> main.cpp
	@printf "%s\n" '	b--;' >> main.cpp
	@printf "%s\n" '	--b;' >> main.cpp
	@printf "%s\n" '	std::cout << "Should bring us right back to: " << b << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Now Let'\''s compare a and b" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "a is the same as b: " << (a == b) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Sorry, I meant that they are different: " << (a != b) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "I see... And which one is bigger?: " << Fixed::max(a, b) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "You gave me a number... Was that a?: " << (a > b) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Was that b?: " << (a < b) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "So between a and b, the smallest is: " << Fixed::min(a, b) << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Alright, got it. Thanks! Good bye." << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'int main( void )' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	Fixed a;' >> main.cpp
	@printf "%s\n" '	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "\t//Subject'\''s Tests//"<<std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << ++a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << a++ << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << b << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << Fixed::max( a, b ) << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	myTests();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return 0;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "\033[0m\n"

echoe_expected_out:
	@printf "🦝 \001\033[3m\033[38;2;255;153;51m\002Building expected_out... 🦝\\n"
	@> expected_out
	@printf "%s\n" '0' >> expected_out
	@printf "%s\n" '0.00390625' >> expected_out
	@printf "%s\n" '0.00390625' >> expected_out
	@printf "%s\n" '0.00390625' >> expected_out
	@printf "%s\n" '0.0078125' >> expected_out
	@printf "%s\n" '10.1016' >> expected_out
	@printf "%s\n" '10.1016' >> expected_out
	@printf "\033[0m\n"

echoe_subject_main.cpp:
	@printf "🦝 \001\033[3m\033[38;2;255;153;51m\002Building main.cpp... 🦝\\n"
	@> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> main.cpp
	@printf "%s\n" '/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> main.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> main.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> main.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> main.cpp
	@printf "%s\n" '/*   Created: 2026/08/18 18:43:35 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> main.cpp
	@printf "%s\n" '/*   Updated: 2026/08/20 16:10:18 by lde-san-           ▒ ░██  ██░ ▒          */' >> main.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#include "Fixed.hpp"' >> main.cpp
	@printf "%s\n" '#include <iostream>' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'int main( void )' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	Fixed a;' >> main.cpp
	@printf "%s\n" '	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << ++a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << a++ << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << a << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << b << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << Fixed::max( a, b ) << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return 0;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "\033[0m\n"

.PHONY: all clean fclean re open leaks perfect echoe_expected_out echoe_mapache_main echoe_subject_main
