# **************************************************************************** #
#                                                                              #
#                                                    ▒▓              ▓▒        #
#    Makefile                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒       #
#                                                   ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒       #
#    By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█        #
#                                                    ███████░░░░███████        #
#    Created: 2026/08/09 15:34:41 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░       #
#    Updated: 2026/08/18 19:47:51 by lde-san-           ▒ ░██  ██░ ▒           #
#                                                          ██████              #
#                                                                              #
# **************************************************************************** #

NAME = account_registry
LIB = $(OBJ_DIR)libaccount.a

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

INTRAF = Account.hpp
INTRAF += 19920104_091532.log
INTRAF += tests.cpp

MAIN_FILE = tests.cpp

CLASSES = Account.hpp

FILE = Account.cpp

.PRECIOUS: $(MAIN_FILE) $(CLASSES) $(FILE)

COMPILE = c++ -g -O0 -Wall -Wextra -Werror -std=c++98
LEAK_FLAGS = --leak-check=full --show-leak-kinds=all --track-origins=yes

all: $(NAME)

$(NAME): $(LIB) $(MAIN_FILE) $(CLASSES) $(INTRAF)
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
	rm -rf 19920104_091532.log
	@rm -rf racc_account.log
	@printf "$(MINT)"
	@ls -la
	@printf "$(RSET)"

re: fclean all

# /////////////////////// -- * Functionality * -- ////////////////////// #

open:
	@printf "$(MINT)"
	open $(MAIN_FILE)
	for f in $(FILE); do xdg-open $$f; done
	for f in $(CLASSES); do xdg-open $$f; done
	@printf "$(RSET)"

leaks: $(NAME)
	@printf "\n$(PINK)valgrind $(ORNG)$(LEAK_FLAGS) $(MINT)./$(NAME) $(BABY)$(ARGS)"
	@printf "$(RSET)\n"
	@valgrind $(LEAK_FLAGS) ./$(NAME)
	@sleep 0.3

perfect: $(INTRAF)
	@sed -i '122s/.*/	std::cout << "[" << "19920104_091532" << "]";/' Account.cpp
	@make re -C .
	@printf "\n$(MINT)Perfect timestamp set. $(LIME)Checking diff...$(RSET)\n\n"
	@sleep 2
	@sed -i '122s/.*/	std::cout << "[" << timestamp << "]";/' Account.cpp
	@printf "$(ORNG)"
	./$(NAME) > racc_account.log
	@printf "$(MINT)"
	diff -u racc_account.log 19920104_091532.log
	@rm -f racc_account.log
	@printf "$(RSET)\n"

intra_clean:
	@printf "$(ORNG)"
	rm -rf $(INTRAF)
	@printf "$(RSET)\n"

$(INTRAF):
	@printf "$(LIME)"
	wget -nc https://cdn.intra.42.fr/document/document/54087/Account.hpp
	@printf "$(MINT)\n"
	wget -nc https://cdn.intra.42.fr/document/document/54088/19920104_091532.log
	@printf "$(BABY)\n"
	wget -nc https://cdn.intra.42.fr/document/document/54089/tests.cpp
	@printf "$(RSET)\n"

.PHONY: all clean fclean re open leaks perfect intra_clean
