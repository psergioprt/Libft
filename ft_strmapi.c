/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <pauldos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:43:16 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/18 15:53:53 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char lower_to_upper(unsigned int i, char str)
{
	printf("i[%d] = %c\n", i, str);

	if (str >= 'a' && str <= 'z')
		return (str - 'a' + 'A');
	return (str);
}

int main()
{
 	char str[10] = "he12lo.";
 	printf("Before strmapi: %s\n", str);
 	char *result = ft_strmapi(str, lower_to_upper);
 	printf("After strmapi: %s\n", result);
	free(result);
 	return 0;
}
