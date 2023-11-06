CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c	ft_isdigit.c	ft_memset.c	ft_strlcpy.c	ft_tolower.c \
ft_bzero.c	ft_isprint.c	ft_strchr.c	ft_strlen.c	ft_toupper.c \
ft_isalnum.c	ft_memchr.c	ft_strcmp.c	ft_strncmp.c ft_calloc.c\
ft_isalpha.c	ft_memcpy.c	ft_strdup.c	ft_strnstr.c \
ft_isascii.c	ft_memmove.c	ft_strlcat.c	ft_strrchr.c	ft_strjoin.c\
ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_substr.c ft_memcmp.c\

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\

OBJS = $(SRCS:.c=.o)
OBJSB = $(BSRC:.c=.o)

LIBC = ar rcs

NAME = libft.a

RM = rm -f

all: $(NAME)

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

bonus: ${NAME} ${OBJSB}
	${LIBC} ${NAME} ${OBJSB}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	$(RM) $(OBJS) ${OBJSB}

fclean: clean
	$(RM) $(NAME)

re: fclean all
