SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_calloc.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_putchar_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_putstr_fd.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_split.c \
       ft_strjoin.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strncmp.c \
       ft_strnstr.c \
       ft_strrchr.c \
       ft_strtrim.c \
       ft_substr.c \
       ft_tolower.c \
       ft_toupper.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_itoa.c \
       ft_strstr.c

SRCS_BONUS = ft_lstadd_back.c \
             ft_lstadd_front.c \
             ft_lstclear.c \
             ft_lstdelone.c \
             ft_lstiter.c \
             ft_lstlast.c \
             ft_lstnew.c \
             ft_lstsize.c \
             ft_lstmap.c

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}
NAME = libft.a
CC = cc -Wall -Wextra -Werror

# Custom Messages
MSG_BUILD = "==============================\n\
🚀 Building libft... 🚀\n\
=============================="
MSG_BONUS = "==============================\n\
✨ Building libft bonus... ✨\n\
=============================="
MSG_CLEAN = "==============================\n\
🧹 Cleaning up... 🧹\n\
=============================="
MSG_FCLEAN = "==============================\n\
🧽 Full cleanup... 🧽\n\
=============================="
MSG_RE = "==============================\n\
🔄 Rebuilding... 🔄\n\
=============================="

# Rules
%.o: %.c libft.h
	
	@${CC} -I. -c $< -o ${<:.c=.o}

all: ${NAME}
	@echo -e ${MSG_BUILD}

$(NAME): ${OBJS} libft.h
	@echo -e ${MSG_BUILD}
	@ar rcs ${NAME} ${OBJS}
	@echo "🎉 libft built successfully! 🎉"

bonus: ${OBJS_BONUS} libft.h
	@echo -e ${MSG_BONUS}
	@ar rcs ${NAME} ${OBJS_BONUS}
	@echo "✨ Bonus part built successfully! ✨"

clean:
	@echo -e ${MSG_CLEAN}
	@rm -f ${OBJS} ${OBJS_BONUS}
	@echo "🧹 Objects cleaned! 🧹"

fclean: clean
	@echo -e ${MSG_FCLEAN}
	@rm -f ${NAME}
	@echo "🧽 Full cleanup complete! 🧽"

re: fclean all
	@echo -e ${MSG_RE}

.PHONY: all clean fclean re bonus

