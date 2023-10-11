NAME = libft.a

CC	= cc
CFFLAGS	= -Wall -Wextra -Werror
AR	= ar
ARFLAGS	= -rcs
RM	= rm
RMFLAGS = -f

OBJ	= ft_bzero.o \
	ft_isalnum.o \
	ft_isalpha.o \
	ft_isascii.o \
	ft_isdigit.o \
	ft_isprint.o \
	ft_memset.o \
	ft_strlen.o \
	ft_tolower.o \
	ft_toupper.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_strlcpy.o \
	ft_strlcat.o \
	ft_strchr.o \
	ft_strrchr.o


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all



