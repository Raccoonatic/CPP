# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-san- <lde-san-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/24 17:51:07 by lde-san-          #+#    #+#              #
#    Updated: 2026/08/27 20:19:12 by lde-san-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
LIB = $(OBJ_DIR)brain.a

n_ani ?= 10
n_ideas ?= 100

NEOR	= \033[3m\033[38;2;255;153;51m
MINT	= \033[1;38;2;55;250;133m
ORNG	= \033[1;38;2;255;153;51m
PURP	= \033[1;38;2;174;5;252m
PINK	= \033[1;38;2;255;0;251m
BABY	= \033[1;38;2;0;255;247m
BLOD	= \033[1;38;2;255;0;0m
LIME	= \033[1;38;2;0;255;0m
BLAK	= \033[1;38;2;0;0;0m
B_WI	= \033[1;37m
RSET	= \033[0m

OBJ_DIR = obj/
OBJ = $(FILE:%.cpp=$(OBJ_DIR)%.o)

MAIN_FILE = main.cpp

CLASSES = AAnimal.hpp
CLASSES += Dog.hpp
CLASSES += Cat.hpp
CLASSES += WrongAnimal.hpp
CLASSES += WrongCat.hpp
CLASSES += Brain.hpp

FILE = AAnimal.cpp
FILE += Dog.cpp
FILE += Cat.cpp
FILE += WrongAnimal.cpp
FILE += WrongCat.cpp
FILE += Brain.cpp

.PRECIOUS: $(MAIN_FILE) $(CLASSES) $(FILE)

COMPILE = c++ -g -O0 -Wall -Wextra -Werror -std=c++98 -D n_ani=$(n_ani) -D n_ideas=$(n_ideas)

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

chill: mapache_main.cpp mapache_Brain.hpp mapache_Brain.cpp re

strict: strict_main.cpp strict_Brain.hpp strict_Brain.cpp re

PHONY: all clean fclean re open leaks

mapache_main.cpp:
	@> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> main.cpp
	@printf "%s\n" '/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> main.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> main.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> main.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> main.cpp
	@printf "%s\n" '/*   Created: 2026/08/24 16:39:52 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> main.cpp
	@printf "%s\n" '/*   Updated: 2026/08/26 15:47:35 by lde-san-           ▒ ░██  ██░ ▒          */' >> main.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#include "AAnimal.hpp"' >> main.cpp
	@printf "%s\n" '#include "Brain.hpp"' >> main.cpp
	@printf "%s\n" '#include "Dog.hpp"' >> main.cpp
	@printf "%s\n" '#include "Cat.hpp"' >> main.cpp
	@printf "%s\n" '#include "WrongAnimal.hpp"' >> main.cpp
	@printf "%s\n" '#include "WrongCat.hpp"' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#include <iostream>' >> main.cpp
	@printf "%s\n" '#include <ostream>' >> main.cpp
	@printf "%s\n" '#include <string>' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#ifndef n_ani' >> main.cpp
	@printf "%s\n" '# define n_ani 10' >> main.cpp
	@printf "%s\n" '#endif' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'void brainTests(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The following will test the Brain class" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Creating an instance of the Brain class" << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	Brain brn;' >> main.cpp
	@printf "%s\n" '	std::cout << "brn the Brain has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	if (n_ideas < 4)' >> main.cpp
	@printf "%s\n" '		std::cout << "The number of ideas is too low to run the tests" << std::endl;' >> main.cpp
	@printf "%s\n" '	else' >> main.cpp
	@printf "%s\n" '	{' >> main.cpp
	@printf "%s\n" '		std::cout << "Showing some default ideas:" << std::endl;' >> main.cpp
	@printf "%s\n" '		brn.displayIdeas();' >> main.cpp
	@printf "%s\n" '		std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '		std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '		std::cout << "Changing some ideas, to differentiate brn from the default" << std::endl;' >> main.cpp
	@printf "%s\n" '		brn.setIdea(0, "Breadcrumbs and Avocato dip");' >> main.cpp
	@printf "%s\n" '		brn.setIdea(1, "The Greek Empire");' >> main.cpp
	@printf "%s\n" '		brn.setIdea(2, "Mapache");' >> main.cpp
	@printf "%s\n" '		brn.setIdea(3, "Kamilopardaliphobia");' >> main.cpp
	@printf "%s\n" '		brn.displayIdeas();' >> main.cpp
	@printf "%s\n" '		std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '		std::cout << "Testing the Copy Constructor" << std::endl;' >> main.cpp
	@printf "%s\n" '		Brain brn2(brn);' >> main.cpp
	@printf "%s\n" '		std::cout << "brn2 the Brain has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '		std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '		std::cout << "brn2 should have the same ideas as brn" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '		brn2.displayIdeas();' >> main.cpp
	@printf "%s\n" '		std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '		brn.displayIdeas();' >> main.cpp
	@printf "%s\n" '		std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '		std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '		std::cout << "Testing the assignment operator" << std::endl;' >> main.cpp
	@printf "%s\n" '		Brain brn3;' >> main.cpp
	@printf "%s\n" '		std::cout << "brn3 the Brain has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '		std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '		std::cout << "brn3 should have the default ideas" << std::endl;' >> main.cpp
	@printf "%s\n" '		brn3.displayIdeas();' >> main.cpp
	@printf "%s\n" '		std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '		std::cout << "Assigning brn to brn3. Now brn3 has the same ideas as brn:" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '		brn3 = brn;' >> main.cpp
	@printf "%s\n" '		brn3.displayIdeas();' >> main.cpp
	@printf "%s\n" '		std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '		brn.displayIdeas();' >> main.cpp
	@printf "%s\n" '		std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '		std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "All test objects will now be deleted as the functuion returns" << std::endl' >> main.cpp
	@printf "%s\n" '			  << "the proper destructor for each one should be called." << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'void raccTests(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The following will test every aspect of all classes" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Creating an instance of every class" << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	Cat cat;' >> main.cpp
	@printf "%s\n" '	std::cout << "cat the Cat has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	Dog dog;' >> main.cpp
	@printf "%s\n" '	std::cout << "dog the Dog has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	WrongAnimal w_ani;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani the WrongAnimal has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	WrongCat w_cat;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat the WrongCat has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Testing the makeSound() function" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "cat: ";' >> main.cpp
	@printf "%s\n" '	cat.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "dog: ";' >> main.cpp
	@printf "%s\n" '	dog.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani: ";' >> main.cpp
	@printf "%s\n" '	w_ani.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat: ";' >> main.cpp
	@printf "%s\n" '	w_cat.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Testing the Copy Constructors" << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	Cat cat2(cat);' >> main.cpp
	@printf "%s\n" '	Dog dog2(dog);' >> main.cpp
	@printf "%s\n" '	WrongAnimal w_ani2(w_ani);' >> main.cpp
	@printf "%s\n" '	WrongCat w_cat2(w_cat);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The Copies and the originals should display the same makeSound()" << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "cat: ";' >> main.cpp
	@printf "%s\n" '	cat.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "cat2: ";' >> main.cpp
	@printf "%s\n" '	cat2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "dog: ";' >> main.cpp
	@printf "%s\n" '	dog.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "dog2: ";' >> main.cpp
	@printf "%s\n" '	dog2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani: ";' >> main.cpp
	@printf "%s\n" '	w_ani.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani2: ";' >> main.cpp
	@printf "%s\n" '	w_ani2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat: ";' >> main.cpp
	@printf "%s\n" '	w_cat.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat2: ";' >> main.cpp
	@printf "%s\n" '	w_cat2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Testing the assignment operator" << std::endl;' >> main.cpp
	@printf "%s\n" '	cat = cat2;' >> main.cpp
	@printf "%s\n" '	dog = dog2;' >> main.cpp
	@printf "%s\n" '	w_ani = w_cat2;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The assigned objects should display the same type in their makeSound()" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani: ";' >> main.cpp
	@printf "%s\n" '	w_ani.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat2: ";' >> main.cpp
	@printf "%s\n" '	w_cat2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	brainTests();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'void subjectTests(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The following will run the test presented in the previous subject" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Creating animal pointers: " << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	const AAnimal* j = new Dog();' >> main.cpp
	@printf "%s\n" '	const AAnimal* i = new Cat();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Deleting animal pointers: " << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	delete j;' >> main.cpp
	@printf "%s\n" '	delete i;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "This shouldn'\''t create leaks. Make sure to check \"make leaks\"" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'void makeSoundLoop(AAnimal *array[])' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "All the animals will now makeSound(). Showcasing" << std::endl' >> main.cpp
	@printf "%s\n" '			  << "the division requested by the subject" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	for (int i = 0; i < n_ani; ++i)' >> main.cpp
	@printf "%s\n" '		array[i]->makeSound();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'int main(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '	AAnimal	*array[n_ani];' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "An animal array of " << n_ani' >> main.cpp
	@printf "%s\n" '			   << " Animals, has been created." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Assigning animal types: " << (n_ani / 2)' >> main.cpp
	@printf "%s\n" '			  << " Dogs & " <<  (n_ani - (n_ani / 2))' >> main.cpp
	@printf "%s\n" '			  << " Cats." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	for (int i = 0; i < n_ani; ++i)' >> main.cpp
	@printf "%s\n" '	{' >> main.cpp
	@printf "%s\n" '		if (i < (n_ani / 2))' >> main.cpp
	@printf "%s\n" '			array[i] = new Dog();' >> main.cpp
	@printf "%s\n" '		else' >> main.cpp
	@printf "%s\n" '		 	array[i] = new Cat();' >> main.cpp
	@printf "%s\n" '	}' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	makeSoundLoop(array);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The array of animals will now be deleted. You should see" << std::endl' >> main.cpp
	@printf "%s\n" '			  << "the proper destructor of each one being called, along" << std::endl' >> main.cpp
	@printf "%s\n" '			  << "with their brain. And of course, no leaks." << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	for (int i = 0; i < n_ani; ++i)' >> main.cpp
	@printf "%s\n" '		delete array[i];' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	subjectTests();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	raccTests();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return (0);' >> main.cpp
	@printf "%s\n" '}' >> main.cpp

mapache_Brain.cpp:
	@> Brain.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> Brain.cpp
	@printf "%s\n" '/*                                                                            */' >> Brain.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> Brain.cpp
	@printf "%s\n" '/*   Brain.cpp                                      ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> Brain.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> Brain.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> Brain.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> Brain.cpp
	@printf "%s\n" '/*   Created: 2026/08/24 19:12:04 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> Brain.cpp
	@printf "%s\n" '/*   Updated: 2026/08/26 15:47:28 by lde-san-           ▒ ░██  ██░ ▒          */' >> Brain.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> Brain.cpp
	@printf "%s\n" '/*                                                                            */' >> Brain.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '#include "Brain.hpp"' >> Brain.cpp
	@printf "%s\n" '#include <iostream>' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '# define RT	"\033[0m" // Reset' >> Brain.cpp
	@printf "%s\n" '# define BW	"\033[1;37m" // Bold White' >> Brain.cpp
	@printf "%s\n" '# define BB	"\033[38;2;0;255;247m" // Baby Blue' >> Brain.cpp
	@printf "%s\n" '# define PK	"\033[1;38;2;255;0;251m" // Pink' >> Brain.cpp
	@printf "%s\n" '# define PR	"\033[1;38;2;174;5;252m" // Purple' >> Brain.cpp
	@printf "%s\n" '# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow' >> Brain.cpp
	@printf "%s\n" '# define MT	"\033[1;38;2;55;250;133m" // Mint' >> Brain.cpp
	@printf "%s\n" '# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '		     //******************************************************//' >> Brain.cpp
	@printf "%s\n" '	        //             Constructors & Destructor                //' >> Brain.cpp
	@printf "%s\n" '	       //******************************************************//' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'Brain::Brain()' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	std::cout << PK "Brain " << PR << "Class" RT' >> Brain.cpp
	@printf "%s\n" '			  << MT " Default Constructor " RT << NR "called"' >> Brain.cpp
	@printf "%s\n" '			  << RT << std::endl;' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	for (unsigned int i = 0; i < n_ideas; ++i)' >> Brain.cpp
	@printf "%s\n" '		this->ideas[i] = "The Roman Empire";' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	return ;' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'Brain::Brain(const Brain &original)' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	std::cout << PK "Brain " << PR << "Class" RT' >> Brain.cpp
	@printf "%s\n" '			  << MT " Copy Constructor " RT << NR "called"' >> Brain.cpp
	@printf "%s\n" '			  << RT << std::endl;' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	for (unsigned int i = 0; i < n_ideas; ++i)' >> Brain.cpp
	@printf "%s\n" '		this->ideas[i] = original.ideas[i];' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	return ;' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'Brain::~Brain()' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	std::cout << PK "Brain " << PR << "Class" RT' >> Brain.cpp
	@printf "%s\n" '			  << MT " Destructor " RT << NR "called"' >> Brain.cpp
	@printf "%s\n" '			  << RT << std::endl;' >> Brain.cpp
	@printf "%s\n" '	return ;' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '		     //******************************************************//' >> Brain.cpp
	@printf "%s\n" '	        //                Operator Overloads                    //' >> Brain.cpp
	@printf "%s\n" '	       //******************************************************//' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'Brain &Brain::operator=(const Brain &rhs)' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	if (this == &rhs)' >> Brain.cpp
	@printf "%s\n" '		return (*this);' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	for (unsigned int i = 0; i < n_ideas; ++i)' >> Brain.cpp
	@printf "%s\n" '		this->ideas[i] = rhs.ideas[i];' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	return (*this);' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '		     //******************************************************//' >> Brain.cpp
	@printf "%s\n" '	        //                  Getters & Setters                   //' >> Brain.cpp
	@printf "%s\n" '	       //******************************************************//' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'void Brain::setIdea(unsigned int index, const std::string &idea)' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	if (index < n_ideas && index >= 0)' >> Brain.cpp
	@printf "%s\n" '		this->ideas[index] = idea;' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	return ;' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '		     //******************************************************//' >> Brain.cpp
	@printf "%s\n" '	        //                  Member Functions                    //' >> Brain.cpp
	@printf "%s\n" '	       //******************************************************//' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'void	Brain::displayIdeas(void) const' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	if (n_ideas < 4)' >> Brain.cpp
	@printf "%s\n" '		return ;' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	for (unsigned int i = 0; i < 4; ++i)' >> Brain.cpp
	@printf "%s\n" '		std::cout << MT "Idea " BB << i << BW ": " RT NR << this->ideas[i] << RT << std::endl;' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	return ;' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp

mapache_Brain.hpp:
	@> Brain.hpp
	@printf "%s\n" '/* ************************************************************************** */' >> Brain.hpp
	@printf "%s\n" '/*                                                                            */' >> Brain.hpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> Brain.hpp
	@printf "%s\n" '/*   Brain.hpp                                      ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> Brain.hpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> Brain.hpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> Brain.hpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> Brain.hpp
	@printf "%s\n" '/*   Created: 2026/08/24 19:10:24 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> Brain.hpp
	@printf "%s\n" '/*   Updated: 2026/08/26 15:47:01 by lde-san-           ▒ ░██  ██░ ▒          */' >> Brain.hpp
	@printf "%s\n" '/*                                                         ██████             */' >> Brain.hpp
	@printf "%s\n" '/*                                                                            */' >> Brain.hpp
	@printf "%s\n" '/* ************************************************************************** */' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '#ifndef BRAIN_HPP' >> Brain.hpp
	@printf "%s\n" '# define BRAIN_HPP' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '# ifndef n_ideas' >> Brain.hpp
	@printf "%s\n" '#  define n_ideas 100' >> Brain.hpp
	@printf "%s\n" '# endif' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '#include <string>' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" 'class Brain' >> Brain.hpp
	@printf "%s\n" '{' >> Brain.hpp
	@printf "%s\n" '	public:' >> Brain.hpp
	@printf "%s\n" '		Brain();' >> Brain.hpp
	@printf "%s\n" '		Brain(const Brain &original);' >> Brain.hpp
	@printf "%s\n" '		~Brain();' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '		void	setIdea(unsigned int index, const std::string &idea);' >> Brain.hpp
	@printf "%s\n" '		void	displayIdeas(void) const;' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '		Brain &operator=(const Brain &original);' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '	private:' >> Brain.hpp
	@printf "%s\n" '		std::string ideas[n_ideas];' >> Brain.hpp
	@printf "%s\n" '};' >> Brain.hpp
	@printf "%s\n" '#endif' >> Brain.hpp
	@printf "\033[0m                                     🦝\n"

strict_main.cpp:
	@> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> main.cpp
	@printf "%s\n" '/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> main.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> main.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> main.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> main.cpp
	@printf "%s\n" '/*   Created: 2026/08/24 16:39:52 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> main.cpp
	@printf "%s\n" '/*   Updated: 2026/08/26 16:00:39 by lde-san-           ▒ ░██  ██░ ▒          */' >> main.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> main.cpp
	@printf "%s\n" '/*                                                                            */' >> main.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#include "AAnimal.hpp"' >> main.cpp
	@printf "%s\n" '#include "Brain.hpp"' >> main.cpp
	@printf "%s\n" '#include "Dog.hpp"' >> main.cpp
	@printf "%s\n" '#include "Cat.hpp"' >> main.cpp
	@printf "%s\n" '#include "WrongAnimal.hpp"' >> main.cpp
	@printf "%s\n" '#include "WrongCat.hpp"' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#include <iostream>' >> main.cpp
	@printf "%s\n" '#include <ostream>' >> main.cpp
	@printf "%s\n" '#include <string>' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '#ifndef n_ani' >> main.cpp
	@printf "%s\n" '# define n_ani 10' >> main.cpp
	@printf "%s\n" '#endif' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'void raccTests(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The following will test every aspect of all classes" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Creating an instance of every class" << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	Cat cat;' >> main.cpp
	@printf "%s\n" '	std::cout << "cat the Cat has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	Dog dog;' >> main.cpp
	@printf "%s\n" '	std::cout << "dog the Dog has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	WrongAnimal w_ani;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani the WrongAnimal has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	WrongCat w_cat;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat the WrongCat has been born" << std::endl<< std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Testing the makeSound() function" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "cat: ";' >> main.cpp
	@printf "%s\n" '	cat.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "dog: ";' >> main.cpp
	@printf "%s\n" '	dog.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani: ";' >> main.cpp
	@printf "%s\n" '	w_ani.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat: ";' >> main.cpp
	@printf "%s\n" '	w_cat.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Testing the Copy Constructors" << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	Cat cat2(cat);' >> main.cpp
	@printf "%s\n" '	Dog dog2(dog);' >> main.cpp
	@printf "%s\n" '	WrongAnimal w_ani2(w_ani);' >> main.cpp
	@printf "%s\n" '	WrongCat w_cat2(w_cat);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The Copies and the originals should display the same makeSound()" << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "cat: ";' >> main.cpp
	@printf "%s\n" '	cat.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "cat2: ";' >> main.cpp
	@printf "%s\n" '	cat2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "dog: ";' >> main.cpp
	@printf "%s\n" '	dog.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "dog2: ";' >> main.cpp
	@printf "%s\n" '	dog2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani: ";' >> main.cpp
	@printf "%s\n" '	w_ani.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani2: ";' >> main.cpp
	@printf "%s\n" '	w_ani2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat: ";' >> main.cpp
	@printf "%s\n" '	w_cat.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat2: ";' >> main.cpp
	@printf "%s\n" '	w_cat2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Testing the assignment operator" << std::endl;' >> main.cpp
	@printf "%s\n" '	cat = cat2;' >> main.cpp
	@printf "%s\n" '	dog = dog2;' >> main.cpp
	@printf "%s\n" '	w_ani = w_cat2;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The assigned objects should display the same type in their makeSound()" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "w_ani: ";' >> main.cpp
	@printf "%s\n" '	w_ani.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "w_cat2: ";' >> main.cpp
	@printf "%s\n" '	w_cat2.makeSound();' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The Brain classe'\''s attributes are inaccessible." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "All functions will now run and the only way to know that they worked" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "Will be the debug messages, and the fact that the program runs without errors." << std::endl;' >> main.cpp
	@printf "%s\n" ' 	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	Brain brn;' >> main.cpp
	@printf "%s\n" '	Brain brn2(brn);' >> main.cpp
	@printf "%s\n" '	brn = brn2;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" ' 	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	std::cout << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '	std::cout << "All test objects will now be deleted as the functuion returns" << std::endl' >> main.cpp
	@printf "%s\n" '			  << "the proper destructor for each one should be called." << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" ' 	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'void subjectTests(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The following will run the test presented in the previous subject" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Creating animal pointers: " << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	const AAnimal* j = new Dog();' >> main.cpp
	@printf "%s\n" '	const AAnimal* i = new Cat();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Deleting animal pointers: " << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	delete j;' >> main.cpp
	@printf "%s\n" '	delete i;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "This shouldn'\''t create leaks. Make sure to check \"make leaks\"" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'void makeSoundLoop(AAnimal *array[])' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "All the animals will now makeSound(). Showcasing" << std::endl' >> main.cpp
	@printf "%s\n" '			  << "the division requested by the subject" << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	for (int i = 0; i < n_ani; ++i)' >> main.cpp
	@printf "%s\n" '		array[i]->makeSound();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return ;' >> main.cpp
	@printf "%s\n" '}' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" 'int main(void)' >> main.cpp
	@printf "%s\n" '{' >> main.cpp
	@printf "%s\n" '	std::string stopper;' >> main.cpp
	@printf "%s\n" '	AAnimal	*array[n_ani];' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "An animal array of " << n_ani' >> main.cpp
	@printf "%s\n" '			   << " Animals, has been created." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "Assigning animal types: " << (n_ani / 2)' >> main.cpp
	@printf "%s\n" '			  << " Dogs & " <<  (n_ani - (n_ani / 2))' >> main.cpp
	@printf "%s\n" '			  << " Cats." << std::endl;' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	for (int i = 0; i < n_ani; ++i)' >> main.cpp
	@printf "%s\n" '	{' >> main.cpp
	@printf "%s\n" '		if (i < (n_ani / 2))' >> main.cpp
	@printf "%s\n" '			array[i] = new Dog();' >> main.cpp
	@printf "%s\n" '		else' >> main.cpp
	@printf "%s\n" '		 	array[i] = new Cat();' >> main.cpp
	@printf "%s\n" '	}' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	makeSoundLoop(array);' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::cout << "The array of animals will now be deleted. You should see" << std::endl' >> main.cpp
	@printf "%s\n" '			  << "the proper destructor of each one being called, along" << std::endl' >> main.cpp
	@printf "%s\n" '			  << "with their brain. And of course, no leaks." << std::endl << std::endl;' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	for (int i = 0; i < n_ani; ++i)' >> main.cpp
	@printf "%s\n" '		delete array[i];' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	subjectTests();' >> main.cpp
	@printf "%s\n" '	std::getline(std::cin, stopper);' >> main.cpp
	@printf "%s\n" '	raccTests();' >> main.cpp
	@printf "%s\n" '' >> main.cpp
	@printf "%s\n" '	return (0);' >> main.cpp
	@printf "%s\n" '}' >> main.cpp

strict_Brain.hpp:
	@> Brain.hpp
	@printf "%s\n" '/* ************************************************************************** */' >> Brain.hpp
	@printf "%s\n" '/*                                                                            */' >> Brain.hpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> Brain.hpp
	@printf "%s\n" '/*   Brain.hpp                                      ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> Brain.hpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> Brain.hpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> Brain.hpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> Brain.hpp
	@printf "%s\n" '/*   Created: 2026/08/24 19:10:24 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> Brain.hpp
	@printf "%s\n" '/*   Updated: 2026/08/26 16:00:40 by lde-san-           ▒ ░██  ██░ ▒          */' >> Brain.hpp
	@printf "%s\n" '/*                                                         ██████             */' >> Brain.hpp
	@printf "%s\n" '/*                                                                            */' >> Brain.hpp
	@printf "%s\n" '/* ************************************************************************** */' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '#ifndef BRAIN_HPP' >> Brain.hpp
	@printf "%s\n" '# define BRAIN_HPP' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '# ifndef n_ideas' >> Brain.hpp
	@printf "%s\n" '#  define n_ideas 100' >> Brain.hpp
	@printf "%s\n" '# endif' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '#include <string>' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" 'class Brain' >> Brain.hpp
	@printf "%s\n" '{' >> Brain.hpp
	@printf "%s\n" '	public:' >> Brain.hpp
	@printf "%s\n" '		Brain();' >> Brain.hpp
	@printf "%s\n" '		Brain(const Brain &original);' >> Brain.hpp
	@printf "%s\n" '		~Brain();' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '		Brain &operator=(const Brain &original);' >> Brain.hpp
	@printf "%s\n" '' >> Brain.hpp
	@printf "%s\n" '	private:' >> Brain.hpp
	@printf "%s\n" '		std::string ideas[n_ideas];' >> Brain.hpp
	@printf "%s\n" '};' >> Brain.hpp
	@printf "%s\n" '#endif' >> Brain.hpp
	@printf "\033[0m                                     🦝\n"

strict_Brain.cpp:
	@> Brain.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> Brain.cpp
	@printf "%s\n" '/*                                                                            */' >> Brain.cpp
	@printf "%s\n" '/*                                                   ▒▓              ▓▒       */' >> Brain.cpp
	@printf "%s\n" '/*   Brain.cpp                                      ▒▒ ▓▓▓        ▓▓▓ ▒▒      */' >> Brain.cpp
	@printf "%s\n" '/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */' >> Brain.cpp
	@printf "%s\n" '/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */' >> Brain.cpp
	@printf "%s\n" '/*                                                   ███████░░░░███████       */' >> Brain.cpp
	@printf "%s\n" '/*   Created: 2026/08/24 19:12:04 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */' >> Brain.cpp
	@printf "%s\n" '/*   Updated: 2026/08/26 16:00:40 by lde-san-           ▒ ░██  ██░ ▒          */' >> Brain.cpp
	@printf "%s\n" '/*                                                         ██████             */' >> Brain.cpp
	@printf "%s\n" '/*                                                                            */' >> Brain.cpp
	@printf "%s\n" '/* ************************************************************************** */' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '#include "Brain.hpp"' >> Brain.cpp
	@printf "%s\n" '#include <iostream>' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '# define RT	"\033[0m" // Reset' >> Brain.cpp
	@printf "%s\n" '# define BW	"\033[1;37m" // Bold White' >> Brain.cpp
	@printf "%s\n" '# define BB	"\033[38;2;0;255;247m" // Baby Blue' >> Brain.cpp
	@printf "%s\n" '# define PK	"\033[1;38;2;255;0;251m" // Pink' >> Brain.cpp
	@printf "%s\n" '# define PR	"\033[1;38;2;174;5;252m" // Purple' >> Brain.cpp
	@printf "%s\n" '# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow' >> Brain.cpp
	@printf "%s\n" '# define MT	"\033[1;38;2;55;250;133m" // Mint' >> Brain.cpp
	@printf "%s\n" '# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '		     //******************************************************//' >> Brain.cpp
	@printf "%s\n" '	        //             Constructors & Destructor                //' >> Brain.cpp
	@printf "%s\n" '	       //******************************************************//' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'Brain::Brain()' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	std::cout << PK "Brain " << PR << "Class" RT' >> Brain.cpp
	@printf "%s\n" '			  << MT " Default Constructor " RT << NR "called"' >> Brain.cpp
	@printf "%s\n" '			  << RT << std::endl;' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	for (unsigned int i = 0; i < n_ideas; ++i)' >> Brain.cpp
	@printf "%s\n" '		this->ideas[i] = "The Roman Empire";' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	return ;' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'Brain::Brain(const Brain &original)' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	std::cout << PK "Brain " << PR << "Class" RT' >> Brain.cpp
	@printf "%s\n" '			  << MT " Copy Constructor " RT << NR "called"' >> Brain.cpp
	@printf "%s\n" '			  << RT << std::endl;' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	for (unsigned int i = 0; i < n_ideas; ++i)' >> Brain.cpp
	@printf "%s\n" '		this->ideas[i] = original.ideas[i];' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	return ;' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'Brain::~Brain()' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	std::cout << PK "Brain " << PR << "Class" RT' >> Brain.cpp
	@printf "%s\n" '			  << MT " Destructor " RT << NR "called"' >> Brain.cpp
	@printf "%s\n" '			  << RT << std::endl;' >> Brain.cpp
	@printf "%s\n" '	return ;' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '		     //******************************************************//' >> Brain.cpp
	@printf "%s\n" '	        //                Operator Overloads                    //' >> Brain.cpp
	@printf "%s\n" '	       //******************************************************//' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" 'Brain &Brain::operator=(const Brain &rhs)' >> Brain.cpp
	@printf "%s\n" '{' >> Brain.cpp
	@printf "%s\n" '	if (this == &rhs)' >> Brain.cpp
	@printf "%s\n" '		return (*this);' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	for (unsigned int i = 0; i < n_ideas; ++i)' >> Brain.cpp
	@printf "%s\n" '		this->ideas[i] = rhs.ideas[i];' >> Brain.cpp
	@printf "%s\n" '' >> Brain.cpp
	@printf "%s\n" '	return (*this);' >> Brain.cpp
	@printf "%s\n" '}' >> Brain.cpp
