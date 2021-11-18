/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:14:35 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/16 23:29:19 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
/*
size_t	searchForLen(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	check;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			j++;
			check++;
		}
		if (check != 0)
			j--;
		check = 0;
		i++;
	}
	return (ft_strlen(s) - j);
}

size_t	skipeDelimiter(char const *s, char c, size_t i)
{
	while (s[i] == c && s[i])
	{
		i++;
	}
	return (i);
}*/

size_t	nbrOfWords(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	check;

	i = 0;
	j = 0;
	check = 0;
	while (s[i])
	{
		while (s[i] != c && s[i] )
		{
			i++;
			check ++;
		}
		if (check != 0)
			j++;
		check = 0;
		i++;
	}
	return (j);
}

size_t wordlen(char const *s, char c, size_t index)
{
	size_t	i;
	size_t	j;
	size_t	check;

	i = 0;
	j = 0;
	check = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			check++;
		}
		if (check != 0)
			j++;
		if (j == index)
			return (check);
		check = 0;
		i++;
	}
	return (0);
}

char **ft_split(char const *s, char c)
{
	char	**p;
	size_t	k;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	k = -1;
	//len = searchForLen(s,c);
	printf("number of words : %zu\n",nbrOfWords(s,c));
	p = malloc(sizeof(char *) * (nbrOfWords(s,c) + 1));
	if (p == NULL)
		return (NULL);
	while (i < nbrOfWords(s,c))
	{
		//printf("lenght of words %zu : %zu\n",i,wordlen(s,c,i + 1) + 1);
		p[i] = malloc( wordlen(s,c,i + 1) + 1);
		if (p[i] == NULL)
			//return ft_free_p;
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
			k++;
		while (s[i] != c && s[i])
		{
			p[k][j] = s[i];
			//printf("p[%zu][%zu] = s[%zu]\t",k,j,i);
			j++;
			i++;
		}
		//printf("\n");
		p[k][j] = '\0';
		j = 0;
		i++;
		//i = skipeDelimiter(s,c,i);
	}
	p[k + 1] = NULL;
	return (p);
}
/*
int	main()
{
	char str[] = "Hello THERE friends i hate you!";
	char **p;
	p = ft_split(str,32);
	while (p != NULL)
	{
		printf("%s",*p);
	}
}
*/
/*
int main()
{
    char months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

    printf("months=[%s]\n\n", months);

    tokens = ft_split(months, ',');

    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }

    return 0;
}
*/
int main() {
   char string[50] = "totototo                 ";
   // Extract the first token
   char** token = ft_split(string, 32);
   int i = 0;
   // loop through the string to extract all other tokens
   while( *(token + i) != NULL) {
      printf( " %s\n", *(token + i) ); //printing each token
      //token = strtok(NULL, " ");
	  i++;
   }
   return 0;
}