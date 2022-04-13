NAME = libft.a

LIBCFUN = \
		ft_atoi.c ft_bzero.c  ft_isalpha.c ft_isalnum.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_strchr.c ft_strrchr.c\
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar.c ft_putnbr.c ft_putstr.c ft_memchr.c\
		ft_strcat.c  ft_strcmp.c ft_strcpy.c ft_strdup.c \
		ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
		ft_tolower.c ft_toupper.c ft_calloc.c \
		ft_strlcpy.c ft_strnstr.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_itoa.c ft_strmapi.c \

#LIBCBON =  \

#=================== NOT ASKED FOR ===================#
# ft_strmap.c ft_strstr.c 
#=================== NOT YET AVAILABLE ===================#
#  
# ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c
# ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c
# ft_strnequ.c ft_strsub.c   ft_strsplit.c
# ft_itoa.c  ft_putendl.c 
#
# ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter
# ft_lstmap.c 
#=========================================================#

OBJFUN := $(LIBCFUN:c=o)
#OBJBON := $(LIBCBON:c=o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I -nostartfiles
RM = rm -f
AR = ar rcs

$(NAME):	$(OBJFUN)
	$(AR) $(NAME) $(OBJFUN)

all:	$(NAME)

clean:
	$(RM) $(OBJFUN) $(OBJBON)

fclean: clean
	$(RM) $(NAME) $(OBJBON) *.so *.out

re: fclean all

#============For Ubuntu in WSL====================
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(LIBCFUN)
	gcc -nostartfiles -shared -o libft.so $(OBJFUN)
#=================================================

bonus: $(OBJFUN) $(OBJBON)
	$(AR) $(NAME) $(OBJFUN) $(OBJBON)

.PHONY: all clean fclean re bonus