MAKE = make

NAME = materia

DIR_OBJS = .obj

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp

CC = c++

CHECK = ✅
RED = $(shell tput setaf 1)
CROSS = ❌
GREEN = $(shell tput setaf 2)
RESET_COLOR = $(shell tput sgr0)
CYAN = $(shell tput setaf 6)


OBJ = $(addprefix $(DIR_OBJS)/, $(SRC:.cpp=.o))

all:$(NAME)

$(DIR_OBJS)/%.o: %.cpp Makefile AMateria.hpp ICharacter.hpp IMateriaSource.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp
	@mkdir -p  $(dir $@)
	@$(CC)  $(FLAGS) -c $< -o $@
	@echo "$(CYAN)$@ created $(CHECK)$(RESET_COLOR)"
$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) created $(CHECK)$(RESET_COLOR)"

clean:
	@rm -rf $(DIR_OBJS)
	@echo "$(RED)$(DIR_OBJS) removed$(CROSS)$(RESET_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) removed$(CROSS)$(RESET_COLOR)"

re: fclean all

.PHONY: all re clean fclean re
