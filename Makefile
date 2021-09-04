CC		=	gcc

RM		=	rm -rf

NAME	=	libft.a

SRCS	=	./ft_isascii.c		\
			./ft_memcmp.c		\
			./ft_putnbr_fd.c	\
			./ft_strlcat.c		\
			./ft_strrchr.c		\
			./ft_atoi.c			\
			./ft_isdigit.c		\
			./ft_memcpy.c		\
			./ft_putstr_fd.c	\
			./ft_strlcpy.c		\
			./ft_strtrim.c		\
			./ft_bzero.c		\
			./ft_isprint.c		\
			./ft_memmove.c		\
			./ft_split.c		\
			./ft_strlen.c		\
			./ft_substr.c		\
			./ft_calloc.c		\
			./ft_itoa.c			\
			./ft_memset.c		\
			./ft_strchr.c		\
			./ft_strmapi.c		\
			./ft_tolower.c		\
			./ft_isalnum.c		\
			./ft_memccpy.c		\
			./ft_putchar_fd.c	\
			./ft_strdup.c		\
			./ft_toupper.c		\
			./ft_isalpha.c		\
			./ft_memchr.c		\
			./ft_putendl_fd.c	\
			./ft_strjoin.c		\
			./ft_strnstr.c		\
			./ft_putendl.c		\
			./ft_puterror.c		\
			./ft_putstr.c			\
			./ft_str_to_lowcase.c \
			./ft_strequ.c			\
			./ft_strcmp.c			\
			./ft_program_name.c		\
			./ft_strcap.c			\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror -I./includes

AR		= 	ar rc

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			ranlib $(NAME)

clean :
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re :		fclean all
