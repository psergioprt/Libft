#ifndef LIBF_H
#define LIBF_H

#include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif


