# **************************************************************************** #
#                                                                              #
#                                                    ▒▓              ▓▒        #
#    Makefile                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒       #
#                                                   ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒       #
#    By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█        #
#                                                    ███████░░░░███████        #
#    Created: 2026/08/14 12:43:50 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░       #
#    Updated: 2026/08/20 16:58:06 by lde-san-           ▒ ░██  ██░ ▒           #
#                                                          ██████              #
#                                                                              #
# **************************************************************************** #

NAME = fixed
LIB = $(OBJ_DIR)libfixed.a

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

COMPILE = c++ -g -O0 -Wall -Wextra -Werror -std=c++98

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

perfect:
	@printf "🦝 \001\033[3m\033[38;2;255;153;51m\002Building expected_out... 🦝\\n"
	@sleep 1
	@> expected_out
	@printf "%s\n" 'Default constructor called' >> expected_out
	@printf "%s\n" 'Int constructor called' >> expected_out
	@printf "%s\n" 'Float constructor called' >> expected_out
	@printf "%s\n" 'Copy constructor called' >> expected_out
	@printf "%s\n" 'Copy assignment operator called' >> expected_out
	@printf "%s\n" 'Float constructor called' >> expected_out
	@printf "%s\n" 'Copy assignment operator called' >> expected_out
	@printf "%s\n" 'Destructor called' >> expected_out
	@printf "%s\n" 'a is 1234.43' >> expected_out
	@printf "%s\n" 'b is 10' >> expected_out
	@printf "%s\n" 'c is 42.4219' >> expected_out
	@printf "%s\n" 'd is 10' >> expected_out
	@printf "%s\n" 'a is 1234 as integer' >> expected_out
	@printf "%s\n" 'b is 10 as integer' >> expected_out
	@printf "%s\n" 'c is 42 as integer' >> expected_out
	@printf "%s\n" 'd is 10 as integer' >> expected_out
	@printf "%s\n" 'Destructor called' >> expected_out
	@printf "%s\n" 'Destructor called' >> expected_out
	@printf "%s\n" 'Destructor called' >> expected_out
	@printf "%s\n" 'Destructor called' >> expected_out
	@printf "\033[0m                                     🦝\n"
	@sed -i '89s|.*|	this->_rb = rhs._rb;|' Fixed.cpp
	@make re -C .
	@printf "\n$(MINT)Perfect output set: $(RSET)\n"
	./$(NAME)
	@sed -i '89s|.*|	this->_rb = rhs.getRawBits();|' Fixed.cpp
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

.PHONY: all clean fclean re open leaks perfect

echoe_expected_out:
