NAME = so_long

SRCS = map_validation1.c free.c \
	eventlistener.c maps.c \
	so_long.c floodfilling.c \
	game.c playermovements.c env_check.c \
	map_validation2.c \
	get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c
        
OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

MLXPATH = minilibx-linux
MLXFLAGS = -L$(MLXPATH) -lmlx -lXext -lX11
MLXINC = -I$(MLXPATH)

LIBFTPATH = libft
LIBFT = $(LIBFTPATH)/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@echo "=============================="
	@echo "🚀 Building libft for Rami... 🚀"
	@echo "=============================="
	@make -C $(LIBFTPATH)
	@echo "=============================="
	@echo "🔧 Compiling the program for Rami... 🔧"
	@echo "=============================="
	@$(CC) $(OBJS) $(LIBFT) $(MLXFLAGS) $(CFLAGS) -o $(NAME)
	@echo "=================================="
	@echo "🎉 Build complete! 🎉"
	@echo "=================================="

	@echo "	     _____          ____        ______  _______    ____ "
	@echo "	 ___|\    \    ____|\   \      |      \/       \  |    |"
	@echo "	|    |\    \  /    /\    \    /          /\     \ |    |"
	@echo "	|    | |    ||    |  |    |  /     /\   / /\     ||    |"
	@echo "	|    |/____/ |    |__|    | /     /\ \_/ / /    /||    |"
	@echo "	|    |\    \ |    .--.    ||     |  \|_|/ /    / ||    |"
	@echo "	|    | |    ||    |  |    ||     |       |    |  ||    |"
	@echo "	|____| |____||____|  |____||\____\       |____|  /|____|"
	@echo "	|    | |    ||    |  |    || |    |      |    | / |    |"
	@echo "	|____| |____||____|  |____| \|____|      |____|/  |____|"
	@echo "	  \(     )/    \(      )/      \(          )/       \(  "
	@echo "	   '     '      '      '        '          '         '  "
                                                        
	@echo "Great job, Rami! 🚀"

%.o: %.c
	@echo "=============================="
	@echo "🔨 Compiling $< for Rami... 🔨"
	@echo "=============================="
	@$(CC) $(CFLAGS) $(MLXINC) -c $< -o $@

clean:
	@echo "=============================="
	@echo "🧹 Cleaning up object files for Rami... 🧹"
	@echo "=============================="
	@make -C $(LIBFTPATH) clean
	@rm -f $(OBJS)
	@echo "=============================="
	@echo "🧹 Cleanup complete for Rami! 🧹"
	@echo "=============================="

fclean: clean
	@echo "=============================="
	@echo "🧽 Performing full cleanup for Rami... 🧽"
	@echo "=============================="
	@make -C $(LIBFTPATH) fclean
	@rm -f $(NAME)
	@echo "=============================="
	@echo "🧽 Full cleanup complete for Rami! 🧽"
	@echo "=============================="

re: fclean all

.PHONY: all clean fclean re
