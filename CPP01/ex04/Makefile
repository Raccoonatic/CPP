# **************************************************************************** #
#                                                                              #
#                                                    ▒▓              ▓▒        #
#    Makefile                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒       #
#                                                   ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒       #
#    By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█        #
#                                                    ███████░░░░███████        #
#    Created: 2026/08/14 16:25:58 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░       #
#    Updated: 2026/08/28 20:49:13 by lde-san-           ▒ ░██  ██░ ▒           #
#                                                          ██████              #
#                                                                              #
# **************************************************************************** #

NAME = racc_sed
LIB = $(OBJ_DIR)libracc_sed.a

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

FILE = input_parser.cpp
FILE += io_utils.cpp

INCLUDES = racc_sed.hpp

.PRECIOUS: $(MAIN_FILE) $(INCLUDES) $(FILE)

COMPILE = c++ -g -O0 -Wall -Wextra -Werror -std=c++98
LEAK_FLAGS = --leak-check=full --show-leak-kinds=all --track-origins=yes

all: $(NAME)

$(NAME): $(LIB) $(MAIN_FILE) $(FILE) $(INCLUDES)
	@printf "$(BABY)"
	$(COMPILE) $(MAIN_FILE) $(LIB) -o $(NAME)
	@printf "$(RSET)\n"

$(OBJ_DIR)%.o: %.cpp $(INCLUDES) | $(OBJ_DIR)
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
	rm -f racc_sed_tests.sh
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

tests:
	@printf "🦝 \001\033[3m\033[38;2;255;153;51m\002Building racc_sed_tests.sh... 🦝\\n"
	@printf "$(MINT)%s\n" '# **************************************************************************** #'
	@printf "$(MINT)%s\n" '#                                                                              #'
	@printf "$(MINT)%s\n" '#                                                    ▒▓              ▓▒        #'
	@printf "$(MINT)%s\n" '#    racc_sed_tests.sh                              ▒▒ ▓▓▓        ▓▓▓ ▒▒       #'
	@printf "$(MINT)%s\n" '#                                                   ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒       #'
	@printf "$(MINT)%s\n" '#    By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█        #'
	@printf "$(MINT)%s\n" '#                                                    ███████░░░░███████        #'
	@printf "$(MINT)%s\n" '#    Created: 2026/08/14 19:43:12 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░       #'
	@printf "$(MINT)%s\n" '#    Updated: 2026/08/14 19:43:12 by lde-san-           ▒ ░██  ██░ ▒           #'
	@printf "$(MINT)%s\n" '#                                                          ██████              #'
	@printf "$(MINT)%s\n" '#                                                                              #'
	@printf "$(MINT)%s\n" '# **************************************************************************** #'
	@> racc_sed_tests.sh
	@printf "%s\n" '#!/bin/bash' >> racc_sed_tests.sh
	@printf "%s\n" '# **************************************************************************** #' >> racc_sed_tests.sh
	@printf "%s\n" '#                                                                              #' >> racc_sed_tests.sh
	@printf "%s\n" '#                                                    ▒▓              ▓▒        #' >> racc_sed_tests.sh
	@printf "%s\n" '#    racc_sed_tests.sh                              ▒▒ ▓▓▓        ▓▓▓ ▒▒       #' >> racc_sed_tests.sh
	@printf "%s\n" '#                                                   ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒       #' >> racc_sed_tests.sh
	@printf "%s\n" '#    By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█        #' >> racc_sed_tests.sh
	@printf "%s\n" '#                                                    ███████░░░░███████        #' >> racc_sed_tests.sh
	@printf "%s\n" '#    Created: 2026/08/14 19:43:12 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░       #' >> racc_sed_tests.sh
	@printf "%s\n" '#    Updated: 2026/08/14 19:43:12 by lde-san-           ▒ ░██  ██░ ▒           #' >> racc_sed_tests.sh
	@printf "%s\n" '#                                                          ██████              #' >> racc_sed_tests.sh
	@printf "%s\n" '#                                                                              #' >> racc_sed_tests.sh
	@printf "%s\n" '# **************************************************************************** #' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" 'NEOR="\033[3m\033[38;2;255;153;51m"' >> racc_sed_tests.sh
	@printf "%s\n" 'GOLD="\033[1;38;2;235;232;52m"' >> racc_sed_tests.sh
	@printf "%s\n" 'MINT="\033[1;38;2;55;250;133m"' >> racc_sed_tests.sh
	@printf "%s\n" 'ORNG="\033[1;38;2;255;153;51m"' >> racc_sed_tests.sh
	@printf "%s\n" 'PURP="\033[1;38;2;174;5;252m"' >> racc_sed_tests.sh
	@printf "%s\n" 'PINK="\033[1;38;2;255;0;251m"' >> racc_sed_tests.sh
	@printf "%s\n" 'BABY="\033[1;38;2;0;255;247m"' >> racc_sed_tests.sh
	@printf "%s\n" 'BLOD="\033[1;38;2;255;0;0m"' >> racc_sed_tests.sh
	@printf "%s\n" 'LIME="\033[1;38;2;0;255;0m"' >> racc_sed_tests.sh
	@printf "%s\n" 'B_WI="\033[1;38;2;255;255;255m"' >> racc_sed_tests.sh
	@printf "%s\n" 'RSET="\033[0m"' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# Interrupt Trap' >> racc_sed_tests.sh
	@printf "%s\n" 'trap '\''echo -e "\n\n$${PURP}⚠️  TESTER INTERRUPTUS 🦝$${RSET}\n"; exit 1'\'' SIGINT SIGTERM SIGQUIT' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# Valgrind' >> racc_sed_tests.sh
	@printf "%s\n" 'echo -e "$${MINT}Run with Valgrind? $${ORNG}($${LIME}y$${ORNG}/$${BLOD}n$${ORNG})$${RSET}"' >> racc_sed_tests.sh
	@printf "%s\n" 'read -p ": " USE_VAL' >> racc_sed_tests.sh
	@printf "%s\n" 'if [[ "$$USE_VAL" == "y" || "$$USE_VAL" == "Y" ]]; then' >> racc_sed_tests.sh
	@printf "%s\n" '    VAL="valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes "' >> racc_sed_tests.sh
	@printf "%s\n" 'else' >> racc_sed_tests.sh
	@printf "%s\n" '    VAL=""' >> racc_sed_tests.sh
	@printf "%s\n" 'fi' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" 'EXEC="./racc_sed"' >> racc_sed_tests.sh
	@printf "%s\n" 'make re' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# Test cases' >> racc_sed_tests.sh
	@printf "%s\n" 'TITLES=(' >> racc_sed_tests.sh
	@printf "%s\n" '    "\t Empty file\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "Standard string replacement\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "Input file without read permissions\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    ".replace file already exists (should overwrite)\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    ".replace file exists without write permissions\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "Input file does not exist\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Empty Target string argument\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Empty Replacement string argument\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Multi-line argument\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Total file replacement\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Trying to open a directory as input file\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Trying to create .replace file, but there'\''s a directory with the same name\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Trying to read from a file that is in a directory without execute permissions\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Trying to create .replace file, in a directory without write permissions\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Trying to read from a file that is an unexistant directory\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	"The Destroyer\n"' >> racc_sed_tests.sh
	@printf "%s\n" ')' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# The content to be injected into the file' >> racc_sed_tests.sh
	@printf "%s\n" 'TEST_STRINGS=(' >> racc_sed_tests.sh
	@printf "%s\n" '    ""' >> racc_sed_tests.sh
	@printf "%s\n" '    "Mapache went to the market.\nMapache bought an Apricot."' >> racc_sed_tests.sh
	@printf "%s\n" '    "This file cannot be read."' >> racc_sed_tests.sh
	@printf "%s\n" '    "Overwrite this.\nOverwrite that."' >> racc_sed_tests.sh
	@printf "%s\n" '    "You cannot write the output."' >> racc_sed_tests.sh
	@printf "%s\n" '    ""' >> racc_sed_tests.sh
	@printf "%s\n" '	"Another test string for the empty target argument case.' >> racc_sed_tests.sh
	@printf "%s\n" '	This string should not be used since the target argument is missing.' >> racc_sed_tests.sh
	@printf "%s\n" '	It'\''s just here to ensure that the script handles the empty argument gracefully."' >> racc_sed_tests.sh
	@printf "%s\n" '	"This test is a very cool test for the empty replacement string argument case.\nsince the replacement argument is blank.\nIt'\''s just here to ensure that the script handles the empty argument gracefully.\nEssentially creating a copy of the original file substracting the target string from it"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Ah... the multi-' >> racc_sed_tests.sh
	@printf "%s\n" 'line argument. Also known as the mutiple line string argument.\nIt'\''s a string that spans multiple lines, and it'\''s used to test how the program deals with multi-\nline arguments. This is important because multi-line arguments are everywhere in real-world scenarios.\nWe must not hate or love multi-line arguments, we must embrace them. They are a part of life."' >> racc_sed_tests.sh
	@printf "%s\n" '	"This is just a huge text that I'\''m making the target and the file. Essentially creating' >> racc_sed_tests.sh
	@printf "%s\n" '	a situation where the program needs to completely replace the file with the replace string' >> racc_sed_tests.sh
	@printf "%s\n" '	feel free to ignore the following:' >> racc_sed_tests.sh
	@printf "%s\n" '	a multi-line replacement string argument. It is used to test how the program handles' >> racc_sed_tests.sh
	@printf "%s\n" '	multi-line replacement strings. This is important because multi-line replacement strings' >> racc_sed_tests.sh
	@printf "%s\n" '	are common in real-world scenarios. We must not hate or love multi-line replacement strings,' >> racc_sed_tests.sh
	@printf "%s\n" '	we must embrace them. They are a part of life. Hopefully, this test will help ensure that the' >> racc_sed_tests.sh
	@printf "%s\n" '	program can handle multi-line replacement strings correctly."' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" '	"A string that shouldn'\''t matter"' >> racc_sed_tests.sh
	@printf "%s\n" '	"The son of a string that shouldn'\''t matter"' >> racc_sed_tests.sh
	@printf "%s\n" '	"The mother of a string that shouldn'\''t matter"' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" ')' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# Target string' >> racc_sed_tests.sh
	@printf "%s\n" 's_target=(' >> racc_sed_tests.sh
	@printf "%s\n" '    "Empty"' >> racc_sed_tests.sh
	@printf "%s\n" '    "Mapache"' >> racc_sed_tests.sh
	@printf "%s\n" '    "read"' >> racc_sed_tests.sh
	@printf "%s\n" '    "Overwrite"' >> racc_sed_tests.sh
	@printf "%s\n" '    "write"' >> racc_sed_tests.sh
	@printf "%s\n" '    "exist"' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" '	"i"' >> racc_sed_tests.sh
	@printf "%s\n" '	"multi-' >> racc_sed_tests.sh
	@printf "%s\n" 'line argument"' >> racc_sed_tests.sh
	@printf "%s\n" '	"This is just a huge text that I'\''m making the target and the file. Essentially creating' >> racc_sed_tests.sh
	@printf "%s\n" '	a situation where the program needs to completely replace the file with the replace string' >> racc_sed_tests.sh
	@printf "%s\n" '	feel free to ignore the following:' >> racc_sed_tests.sh
	@printf "%s\n" '	a multi-line replacement string argument. It is used to test how the program handles' >> racc_sed_tests.sh
	@printf "%s\n" '	multi-line replacement strings. This is important because multi-line replacement strings' >> racc_sed_tests.sh
	@printf "%s\n" '	are common in real-world scenarios. We must not hate or love multi-line replacement strings,' >> racc_sed_tests.sh
	@printf "%s\n" '	we must embrace them. They are a part of life. Hopefully, this test will help ensure that the' >> racc_sed_tests.sh
	@printf "%s\n" '	program can handle multi-line replacement strings correctly."' >> racc_sed_tests.sh
	@printf "%s\n" '	"A great target name"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Fergie"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Jue jua"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Bailalo rocky"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Cuento 3 y llevo 2"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Mapache"' >> racc_sed_tests.sh
	@printf "%s\n" ')' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# Replacement string' >> racc_sed_tests.sh
	@printf "%s\n" 's_replacement=(' >> racc_sed_tests.sh
	@printf "%s\n" '    "Full"' >> racc_sed_tests.sh
	@printf "%s\n" '    "Elijah"' >> racc_sed_tests.sh
	@printf "%s\n" '    "write"' >> racc_sed_tests.sh
	@printf "%s\n" '    "Preserve"' >> racc_sed_tests.sh
	@printf "%s\n" '    "read"' >> racc_sed_tests.sh
	@printf "%s\n" '    "ghost"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Jackfruit"' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" '	"[1;38;2;0;255;0mmulti-' >> racc_sed_tests.sh
	@printf "%s\n" 'line replacement [0m"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Super merengue power"' >> racc_sed_tests.sh
	@printf "%s\n" '	"A better replacement name"' >> racc_sed_tests.sh
	@printf "%s\n" '	"The Dutchess"' >> racc_sed_tests.sh
	@printf "%s\n" '	"arrrrrrrriba"' >> racc_sed_tests.sh
	@printf "%s\n" '	"Y que viva la pepa"' >> racc_sed_tests.sh
	@printf "%s\n" '	"No sabia sumar el"' >> racc_sed_tests.sh
	@printf "%s\n" '	"[1;38;2;0;255;0mMapache[0m"' >> racc_sed_tests.sh
	@printf "%s\n" ')' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# Expected Exit Codes' >> racc_sed_tests.sh
	@printf "%s\n" 'EXPECTED_CODES=(' >> racc_sed_tests.sh
	@printf "%s\n" '    0 # N=0 (Subject allows empty files, creating an empty .replace)' >> racc_sed_tests.sh
	@printf "%s\n" '    0 # N=1 (Normal execution)' >> racc_sed_tests.sh
	@printf "%s\n" '    1 # N=2 (Fails opening input file)' >> racc_sed_tests.sh
	@printf "%s\n" '    0 # N=3 (Standard std::ofstream truncates/overwrites existing files)' >> racc_sed_tests.sh
	@printf "%s\n" '    1 # N=4 (Fails opening/creating .replace output file)' >> racc_sed_tests.sh
	@printf "%s\n" '    1 # N=5 (Input file doesn'\''t exist)' >> racc_sed_tests.sh
	@printf "%s\n" '    1 # N=6 (Empty target string argument)' >> racc_sed_tests.sh
	@printf "%s\n" '    0 # N=7 (Empty replacement string argument)' >> racc_sed_tests.sh
	@printf "%s\n" '	0 # N=8 (Multi-line argument test)' >> racc_sed_tests.sh
	@printf "%s\n" '	0 # N=9 (Total file replacement)' >> racc_sed_tests.sh
	@printf "%s\n" '	1 # N=10 (Trying to open a directory as input file)' >> racc_sed_tests.sh
	@printf "%s\n" '	1 # N=11 (Trying to create .replace file, but there'\''s a directory with the same name)' >> racc_sed_tests.sh
	@printf "%s\n" '	1 # N=12 (Trying to read from a file that is a directory without execute permissions)' >> racc_sed_tests.sh
	@printf "%s\n" '	1 # N=13 (Trying to create .replace file, in a directory without write permissions)' >> racc_sed_tests.sh
	@printf "%s\n" '	1 # N=14 (Trying to read from a file that is an unexistant directory)' >> racc_sed_tests.sh
	@printf "%s\n" '	0 # N=15 (The Destroyer, should succeed and replace all instances of "Mapache" with "lde-san-")' >> racc_sed_tests.sh
	@printf "%s\n" ')' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# Expected Stderr messages (Only checked if EXPECTED_CODES == 1)' >> racc_sed_tests.sh
	@printf "%s\n" 'EXPECTED_ERRORS=(' >> racc_sed_tests.sh
	@printf "%s\n" '    ""' >> racc_sed_tests.sh
	@printf "%s\n" '    ""' >> racc_sed_tests.sh
	@printf "%s\n" '    "[1;38;2;255;0;0mError: [3m[38;2;255;153;51mCould not open file [38;2;255;153;51mtest_2[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    ""' >> racc_sed_tests.sh
	@printf "%s\n" '    "[1;38;2;255;0;0mError: [3m[38;2;255;153;51mCould not open or create file [38;2;255;153;51mtest_4.replace[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "[1;38;2;255;0;0mError: [3m[38;2;255;153;51mCould not open file [38;2;255;153;51mtest_5[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "[1;38;2;255;0;0mError: [38;2;255;153;51mstr_target[3m[38;2;255;153;51m cannot be empty[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" '	"[1;38;2;255;0;0mError: [3m[38;2;255;153;51mFailed to read from the file[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "[1;38;2;255;0;0mError: [3m[38;2;255;153;51mCould not open or create file [38;2;255;153;51mtest_11.replace[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "[1;38;2;255;0;0mError: [3m[38;2;255;153;51mCould not open file [38;2;255;153;51mlocked_dir/test_12[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "[1;38;2;255;0;0mError: [3m[38;2;255;153;51mCould not open or create file [38;2;255;153;51mno_write_dir/test_13.replace[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    "[1;38;2;255;0;0mError: [3m[38;2;255;153;51mCould not open file [38;2;255;153;51mnon_existant_dir/test_14[0m\n"' >> racc_sed_tests.sh
	@printf "%s\n" '	""' >> racc_sed_tests.sh
	@printf "%s\n" ')' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '# Execution Loop' >> racc_sed_tests.sh
	@printf "%s\n" 'SUCCESS=true' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" 'echo -e "$${MINT}Preparing tests...$${RSET}\n"' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" 'for N in "$${!TITLES[@]}"; do' >> racc_sed_tests.sh
	@printf "%s\n" '    TITLE="$${TITLES[$$N]}"' >> racc_sed_tests.sh
	@printf "%s\n" '    FILE="test_$$N"' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '	sleep 1' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '    # Setup the special cases' >> racc_sed_tests.sh
	@printf "%s\n" '    if [ "$$N" -eq 0 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '        touch "$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '    elif [ "$$N" -eq 5 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '        rm -f "$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '	elif [ "$$N" -eq 10 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '		mkdir "$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '    else' >> racc_sed_tests.sh
	@printf "%s\n" '        echo -e "$${TEST_STRINGS[$$N]}" > "$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '        if [ "$$N" -eq 2 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '            chmod -r "$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '        elif [ "$$N" -eq 3 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '            echo "random junk 🦝data gigfgwgfwiuec🦝fg237tq7IT 72T🦝🦝791TYDG8I    YG82🦝7RTQ8dyfd8qyfg" > "$${FILE}.replace"' >> racc_sed_tests.sh
	@printf "%s\n" '        elif [ "$$N" -eq 4 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '            echo "rando🦝m junk data gigfgwgfwi🦝uecfg237tq🦝🦝🦝🦝7IT 72T791TYDG8I    YG827RTQ8dyfd8qyfg🦝" > "$${FILE}.replace"' >> racc_sed_tests.sh
	@printf "%s\n" '            chmod -w "$${FILE}.replace"' >> racc_sed_tests.sh
	@printf "%s\n" '		elif [ "$$N" -eq 11 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '			mkdir "$${FILE}.replace"' >> racc_sed_tests.sh
	@printf "%s\n" '		elif [ "$$N" -eq 12 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '			mkdir "locked_dir"' >> racc_sed_tests.sh
	@printf "%s\n" '			mv "$${FILE}" "locked_dir/"' >> racc_sed_tests.sh
	@printf "%s\n" '			FILE="locked_dir/$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '			chmod -x "locked_dir"' >> racc_sed_tests.sh
	@printf "%s\n" '		elif [ "$$N" -eq 13 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '			mkdir "no_write_dir"' >> racc_sed_tests.sh
	@printf "%s\n" '			mv "$${FILE}" "no_write_dir/"' >> racc_sed_tests.sh
	@printf "%s\n" '			FILE="no_write_dir/$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '			chmod -w "no_write_dir"' >> racc_sed_tests.sh
	@printf "%s\n" '		elif [ "$$N" -eq 14 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '			FILE="non_existant_dir/$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '		elif [ "$$N" -eq 15 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '			wget -nc https://github.com/Raccoonatic/VSRaccMintCode/blob/main/Config/raccmint-custom-vscode.css' >> racc_sed_tests.sh
	@printf "%s\n" '			cat raccmint-custom-vscode.css > "$${FILE}"' >> racc_sed_tests.sh
	@printf "%s\n" '			rm -rf raccmint-custom-vscode.css' >> racc_sed_tests.sh
	@printf "%s\n" '		fi' >> racc_sed_tests.sh
	@printf "%s\n" '    fi' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '    echo -e "\n\n$${PURP}..*$${LIME}#$${PINK}>$${BABY}--$${LIME}>$${BABY}>$${MINT}  TEST $${N} $${BABY}<$${LIME}<$${BABY}--$${PINK}<$${LIME}#$${PURP}*..$${RSET}"' >> racc_sed_tests.sh
	@printf "%s\n" '    echo -e "\n$${BABY} $${TITLE}$${RSET}"' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '    CMD="$${VAL}$${EXEC} $${FILE} \"$${s_target[$$N]}\" \"$${s_replacement[$$N]}\""' >> racc_sed_tests.sh
	@printf "%s\n" '    echo -e "$${NEOR}Command: $${BABY}$${EXEC} $${LIME}$${FILE} $${B_WI}\"$${MINT}$${s_target[$$N]}$${B_WI}\" \"$${MINT}$${s_replacement[$$N]}$${B_WI}\"$${RSET}\n"' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '	# First execution: Let EVERYTHING bleed to the terminal (Valgrind included)' >> racc_sed_tests.sh
	@printf "%s\n" '	if [ "$$N" -eq 8 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '			echo "$${CMD}" | bash' >> racc_sed_tests.sh
	@printf "%s\n" '	elif [ "$$N" -eq 9 ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '			echo "$${CMD}" | bash' >> racc_sed_tests.sh
	@printf "%s\n" '	else' >> racc_sed_tests.sh
	@printf "%s\n" '		eval $${CMD}' >> racc_sed_tests.sh
	@printf "%s\n" '    fi' >> racc_sed_tests.sh
	@printf "%s\n" '	EXIT_CODE=$$?' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '    # Evaluate Exit Code' >> racc_sed_tests.sh
	@printf "%s\n" '    if [ "$$EXIT_CODE" -ne "$${EXPECTED_CODES[$$N]}" ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '        echo -e "$${ORNG}Unexpected exit code! $${BLOD}Got $${PINK}$$EXIT_CODE$${BLOD}, expected $${PINK}$${EXPECTED_CODES[$$N]}$${RSET}"' >> racc_sed_tests.sh
	@printf "%s\n" '        SUCCESS=false' >> racc_sed_tests.sh
	@printf "%s\n" '        break' >> racc_sed_tests.sh
	@printf "%s\n" '    fi' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '    # Diff Evaluation' >> racc_sed_tests.sh
	@printf "%s\n" '    if [ "$${EXPECTED_CODES[$$N]}" -eq 1 ] && [ "$${VAL}" == "" ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '        echo -e "$${MINT}Expected error exit code caught. Running again to catch stderr...$${RSET}"' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '        # Run it a second time, silently capturing stderr for the diff' >> racc_sed_tests.sh
	@printf "%s\n" '        eval $$CMD > /dev/null 2> "error_$${N}.actual"' >> racc_sed_tests.sh
	@printf "%s\n" '        echo -ne "$${EXPECTED_ERRORS[$$N]}" > "error_$${N}.expected"' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '        DIFF_OUT=$$(diff "error_$${N}.expected" "error_$${N}.actual")' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '        if [ -n "$$DIFF_OUT" ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '            echo -e "$${BLOD}Diff failed on Error Output (stderr)!$${RSET}"' >> racc_sed_tests.sh
	@printf "%s\n" '            echo "$$DIFF_OUT"' >> racc_sed_tests.sh
	@printf "%s\n" '            SUCCESS=false' >> racc_sed_tests.sh
	@printf "%s\n" '            break' >> racc_sed_tests.sh
	@printf "%s\n" '        else' >> racc_sed_tests.sh
	@printf "%s\n" '            cat "error_$${N}.actual"' >> racc_sed_tests.sh
	@printf "%s\n" '        fi' >> racc_sed_tests.sh
	@printf "%s\n" '    else' >> racc_sed_tests.sh
	@printf "%s\n" '        if [ ! -f "$${FILE}.replace" ] && [ "$${VAL}" == "" ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '            echo -e "$${BLOD}Error: $${FILE}.replace was never created!$${RSET}"' >> racc_sed_tests.sh
	@printf "%s\n" '            SUCCESS=false' >> racc_sed_tests.sh
	@printf "%s\n" '            break' >> racc_sed_tests.sh
	@printf "%s\n" '        fi' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '    echo -e "$${MINT}Success exit code caught. Diffing original vs .replace:$${RSET}"' >> racc_sed_tests.sh
	@printf "%s\n" '	diff "$$FILE" "$${FILE}.replace"' >> racc_sed_tests.sh
	@printf "%s\n" '    fi' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" '    # Restore permissions to ensure rm doesn'\''t prompt or fail and clean up' >> racc_sed_tests.sh
	@printf "%s\n" '    chmod +rwx "locked_dir" "no_write_dir" "$$FILE" "$${FILE}.replace" 2>/dev/null' >> racc_sed_tests.sh
	@printf "%s\n" '    rm -rf "locked_dir" "no_write_dir" "$$FILE" "$${FILE}.replace" "error_$${N}.actual" "error_$${N}.expected" "expected_$${N}.replace" "test_$${N}" 2>/dev/null' >> racc_sed_tests.sh
	@printf "%s\n" 'done' >> racc_sed_tests.sh
	@printf "%s\n" '' >> racc_sed_tests.sh
	@printf "%s\n" 'if [ "$$SUCCESS" = true ]; then' >> racc_sed_tests.sh
	@printf "%s\n" '    echo -e "\n\n$${MINT}🎉 ALL TESTS PASSED! 🦝$${RSET}\n"' >> racc_sed_tests.sh
	@printf "%s\n" 'else' >> racc_sed_tests.sh
	@printf "%s\n" '    echo -e "\n$${BLOD}⚠️  ALGO WENT BAD PAPI 🦝$${RSET}\n"' >> racc_sed_tests.sh
	@printf "%s\n" '    chmod +rwx test_* "locked_dir" "no_write_dir" 2>/dev/null' >> racc_sed_tests.sh
	@printf "%s\n" '    rm -rf "locked_dir" "no_write_dir" test_* error_*.actual error_*.expected expected_*.replace' >> racc_sed_tests.sh
	@printf "%s\n" 'fi' >> racc_sed_tests.sh
	@chmod +x racc_sed_tests.sh
	@printf "\033[0m🦝\n"

.PHONY: all clean fclean re open leaks tests
