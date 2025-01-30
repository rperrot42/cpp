MAKE = make

NAME = DiamondTrap

DIR_OBJS = .obj

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

CC = c++

CHECK = ✅
RED = $(shell tput setaf 1)
CROSS = ❌
GREEN = $(shell tput setaf 2)
RESET_COLOR = $(shell tput sgr0)
CYAN = $(shell tput setaf 6)


OBJ = $(addprefix $(DIR_OBJS)/, $(SRC:.cpp=.o))

all:$(NAME)

$(DIR_OBJS)/%.o: %.cpp ClapTrap.hpp Makefile ScavTrap.hpp DiamondTrap.hpp FragTrap.hpp
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
