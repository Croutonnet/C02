#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

NAME		=	Span

# Style
BOLD		=	\033[1m
ITALIC		=	\033[3m
UNDERLINE	=	\033[4m

# Color text
RESET		=	\033[0m
BLACK		=	\033[30m
RED			=	\033[31m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
PURPLE		=	\033[35m
CYAN		=	\033[36m
WHITE		=	\033[37m
DEFAULT		=	\033[39m
ERASE_LINE	=	\033[2K\r

# Compiler and flags
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
RM			=	rm -rf

# Sources are all .c files
SRCS		=	main.cpp\
				Span.cpp

OBJS_DIR	=	obj/
OBJS_LST	=	$(patsubst %.cpp, %.o, $(SRCS))
OBJS		=	$(addprefix $(OBJS_DIR), $(OBJS_LST))

#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: dir $(NAME)

# Generates output file
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(ERASE_LINE)$(GREEN)✔️ $(ITALIC)$(NAME) successfully compile.$(RESET)\
	$(GREEN) ✔️$(RESET)"

# Compiles sources into objects
$(OBJS_DIR)%.o: %.cpp
	@printf "$(ERASE_LINE)⚙️ $(PURPLE)Compiling $(DEFAULT)⚙️$(YELLOW) $(notdir $<)\
	$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

# create objects directory
dir:
	@mkdir -p $(OBJS_DIR)

# Removes objects
clean:
	@printf "💣 $(RED)Removing $(NAME) objects...$(RESET) 💥\n"
	@$(RM) $(OBJS_DIR)

# Removes objects and executables
fclean: clean
	@printf "💣 $(RED)Removing $(NAME) executable$(RESET) 💥\n"
	@$(RM) $(NAME)

# Removes objects and executables and remakes
re: fclean all
	@echo "$(ERASE_LINE)$(GREEN)✔️ $(ITALIC)Remake complete$(RESET)\
	$(GREEN) ✔️$(RESET)"

run: re
	@./$(NAME) 24784528 938925072 896074955 442236229 801461898 1719692393 824417226 1876057991 1502362988 327507344 1155420536 493726877 584712307 930777861 1732114229 522301269 1779467433 1429147689 760926736 446951831 748061578 1599699046 889042743 1695621413 1242806634 952806428 746782887 1242977887 643753676 195737717 1535807586 1738496091 250915055 375403280 1217652669 74698460 1581163083 1316481388 231860503 1451096485 1664623403 1421758036 1414485378 1870633037 12794528 1318390683 2074266181 228867717 1641996771 1418035921 6112470 2111392808 1081114377 795373745 575154815 686163041 152614791 744363889 304354871 1718210650 543929322 1811227343 1432636422 859299790 727106533 2105400662 1186781619 206921783 1019771719 1026544573 973259037 1457753443 1240968840 2124387584 677607160 1853960350 412294712 695770377 1385345145 597166400 1737011974 1605935782 388675778 1469560676 832553949 133124192 1013175949 849058270 1338239079 815879790 1846682403 554723624 1247482441 869601701 1465164333 954365413 2092826988 1731594405 1494416160 206735214