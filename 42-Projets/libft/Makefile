NAME = libft.a

LIBCFUN = \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcat.c \  
		ft_toupper.c ft_tolower.c \ 
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c \
		ft_calloc.c ft_strdup.c \
		ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_strcat.c ft_strcmp.c ft_strcpy.c \
		ft_strncat.c ft_strncpy.c \
		ft_strstr.c \

#=================== NOT YET AVAILABLE ==================#
#===================== LIBC FUNCTIONS ===================#
# ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strnstr.c
#=================== NON-LIBC FUNCTIONS ===================#
# ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c 
# ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c 
# ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
#===================== BONUS FUNCTIONS ====================#
# ft_lstnew.c  ft_lstadd_front.c ft_lstsize.c ft_lstlast.c 
# ft_lstadd_back.c ft_lstdelone.c fr_lstclear.c ft_lstiter.c 
# ft_lstmap.c 
#===================== OTHER FUNCTIONS ====================#
# ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c 
# ft_strclr.c ft_striter.c ft_strmap.c ft_strequ.c 
# ft_strnequ.c ft_strsplit.c ft_putendl.c ft_lstdel.c 
#=========================================================#

#LIBCBON =

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

#For Ubuntu in WSL
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(LIBCFUN)
	gcc -nostartfiles -shared -o libft.so $(OBJFUN)

bonus: $(OBJFUN) $(OBJBON)
	$(AR) $(NAME) $(OBJFUN) $(OBJBON)

.PHONY: all clean fclean re bonus