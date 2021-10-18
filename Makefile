NAME = libft.a
SRCS = 	ft_isalpha.c ft_memchr.c ft_memset.c ft_strlen.c ft_tolower.c \
		ft_atoi.c ft_isascii.c ft_memcmp.c	ft_strchr.c	ft_strncmp.c  \
		ft_toupper.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strdup.c \
		ft_strnstr.c ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcpy.c \
		ft_strrchr.c ft_calloc.c ft_strlcat.c ft_putnbr_fd.c ft_putchar_fd.c \
        ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c ft_strjoin.c ft_substr.c \
        ft_strtrim.c ft_striteri.c ft_itoa.c ft_split.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
 		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
 		 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

CC = gcc

RM = rm -rf

MAKE = Makefile

OBJS = ${SRCS:%.c=%.o}

OBJS_BONUS = ${BONUS:%.c=%.o}

CFLAGS = -Wall -Werror -Wextra

HEAD = libft.h

%.o:		%.c $(HEAD) $(MAKE)
	  		$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all:  		$(NAME)

$(NAME) : 	$(OBJS) $(HEAD)
			ar rcs $(NAME) $(OBJS)

bonus: 		$(OBJS) $(OBJS_BONUS)
			ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean: 	clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus