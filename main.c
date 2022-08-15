#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main()
{
	int	i;

	i = 0;
	printf ("\n \033[33;01m> TOTAL TEST LIBFT by jbarbate <\033[00m\n");
	printf("\n");
	printf ("\n \033[33;01m> First part testing <\033[00m\n");
//ISALPHA
	printf ("\033[34;01m|| ft_isalpha test ||\033[00m\n");
	for(i = 0; i < 500; i++)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("\033[31;01mERROR\033[00m\n");
			printf("Diff on char %c\n", (char)i);
			return (1);
		}
	}
	printf ("\033[32;01m--OK\033[00m\n");
//ISDIGIT
	printf ("\033[34;01m|| ft_isdigit test ||\033[00m\n");
	for (i = 0; i < 500; i++)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("\033[31;01mERROR\033[00m\n");
			printf("Diff on char %c\n", (char)i);
			return (1);
		}
	}
	printf ("\033[32;01m--OK\033[00m\n");
//ISALNUM
	printf ("\033[34;01m|| ft_isalnum test ||\033[00m\n");
	for (i = 0; i < 500; i++)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("\033[31;01mERROR\033[00m\n");
			printf("Diff on char %c\n", (char)i);
			return (1);
		}
	}
	printf ("\033[32;01m--OK\033[00m\n");
//ISASCII
	printf ("\033[34;01m|| ft_isascii test ||\033[00m\n");
	for (i = 0; i < 500; i++)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("\033[31;01mERROR\033[00m\n");
			printf("Diff on value %i\n", i);
			return (1);
		}
	}
	printf ("\033[32;01m--OK\033[00m\n");
//ISPRINT
	printf ("\033[34;01m|| ft_isprint test ||\033[00m\n");
	for (i = 0; i < 500; i++)
	{
		if (ft_isprint(i) != isprint(i))
		{
			printf("\033[31;01mERROR\033[00m\n");
			printf("Diff on char %c\n", (char)i);
			return (1);
		}
	}
	printf ("\033[32;01m--OK\033[00m\n");
//TOUPPER
	printf ("\033[34;01m|| ft_toupper test ||\033[00m\n");
	for (i = 0; i < 500; i++)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("\033[31;01mERROR\033[00m\n");
			printf("Diff on char %c\n", (char)i);
			return (1);
		}
	}
	printf ("\033[32;01m--OK\033[00m\n");
//TOLOWER
	printf ("\033[34;01m|| ft_tolower test ||\033[00m\n");
	for (i = 0; i < 500; i++)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("\033[31;01mERROR\033[00m\n");
                        printf("Diff on char %c\n", (char)i);
                        return (1);
		}
	}
	printf ("\033[32;01m--OK\033[00m\n");
//STRLEN
	printf ("\033[34;01m|| ft_strlen test ||\033[00m\n");
	if (ft_strlen("Hey") != strlen("Hey"))
	{
		printf("\033[31;01mERROR\033[00m\n");
		printf("Find -> %zu, Expected -> %lu\n",ft_strlen("Hey"), strlen("Hey"));
		return (1);
	}
	if (ft_strlen("") != strlen(""))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %zu, Expected -> %lu\n",ft_strlen(""), strlen(""));
                return (1);
        }
	printf ("\033[32;01m--OK\033[00m\n");
//STRCHR
	printf ("\033[34;01m|| ft_strchr test ||\033[00m\n");
	if (ft_strchr("hello", 'l') != strchr("hello", 'l'))
	{
		printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strchr("hello", 'l'), strchr("hello", 'l'));
                return (1);
	}
	if (ft_strchr("hello", 'a') != strchr("hello", 'a'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strchr("hello", 'a'), strchr("hello", 'a'));
                return (1);
        }
	if (ft_strchr("", 'l') != strchr("", 'l'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strchr("", 'l'), strchr("", 'l'));
                return (1);
        }
	if (ft_strchr("hello", 'o') != strchr("hello", 'o'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strchr("hello", 'o'), strchr("hello", 'o'));
                return (1);
        }
	if (ft_strchr("hello", '\0') != strchr("hello", '\0'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strchr("hello", '\0'), strchr("hello", '\0'));
                return (1);
        }
	printf ("\033[32;01m--OK\033[00m\n");
//STRRCHR	
	printf ("\033[34;01m|| ft_strrchr test ||\033[00m\n");
        if (ft_strrchr("hello", 'l') != strrchr("hello", 'l'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strrchr("hello", 'l'), strrchr("hello", 'l'));
                return (1);
        }
	if (ft_strrchr("hello all", 'l') != strrchr("hello all", 'l'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strrchr("hello all", 'l'), strrchr("hello all", 'l'));
                return (1);
        }
	if (ft_strrchr("pouic", 'l') != strrchr("pouic", 'l'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strrchr("pouic", 'l'), strrchr("pouic", 'l'));
                return (1);
        }
	if (ft_strrchr("", 'l') != strrchr("", 'l'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strrchr("", 'l'), strrchr("", 'l'));
                return (1);
        }
	if (ft_strrchr("0123456789", '\0') != strrchr("0123456789", '\0'))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %s, Expected -> %s\n",ft_strrchr("0123456789", '\0'), strrchr("0123456789", '\0'));
                return (1);
        }
	printf ("\033[32;01m--OK\033[00m\n");
//STRNCMP
	printf ("\033[34;01m|| ft_strrchr test ||\033[00m\n");
	if (ft_strncmp("Pouic", "Pouic", 6) != strncmp("Pouic", "Pouic", 6))
	{
		printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %i, Expected -> %i\n",ft_strncmp("Pouic", "Pouic", 6), strncmp("Pouic", "Pouic", 6));
                return (1);
	}
	if (ft_strncmp("Pouic", "Pouic", 50) != strncmp("Pouic", "Pouic", 50))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %i, Expected -> %i\n",ft_strncmp("Pouic", "Pouic", 50), strncmp("Pouic", "Pouic", 50));
                return (1);
        }
	if (ft_strncmp("Pouic", "Pouc", 0) != strncmp("Pouic", "Pouc", 0))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %i, Expected -> %i\n",ft_strncmp("Pouic", "Pouc", 0), strncmp("Pouic", "Pouc", 0));
                return (1);
        }
	if (ft_strncmp("Pouic", "pouic", 6) != strncmp("Pouic", "pouic", 6))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %i, Expected -> %i\n",ft_strncmp("Pouic", "pouic", 6), strncmp("Pouic", "pouic", 6));
                return (1);
        }
	if (ft_strncmp("pouic", "Pouic", 6) != strncmp("pouic", "Pouic", 6))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %i, Expected -> %i\n",ft_strncmp("pouic", "Pouic", 6), strncmp("pouic", "Pouic", 6));
                return (1);
        }
	if (ft_strncmp("Bouic", "pouic", 6) != strncmp("Bouic", "pouic", 6))
        {
                printf("\033[31;01mERROR\033[00m\n");
                printf("Find -> %i, Expected -> %i\n",ft_strncmp("Bouic", "pouic", 6), strncmp("Bouic", "pouic", 6));
                return (1);
        }
	printf ("\033[32;01m--OK\033[00m\n");
//STRLCPY
	printf ("\033[34;01m|| ft_strlcpy test ||\033[00m\n");
	char	dest1[50];
	char	dest2[50];
	if (ft_strlcpy(dest1, "PouicPouic", 20) != strlcpy(dest2, "PouicPouic", 20) || ft_strncmp(dest1, dest2, 50) != 0)
	{
                printf("\033[31;01mERROR\033[00m\n");
		return (1);
	}
	if (ft_strlcpy(dest1, "PouicPouic", 5) != strlcpy(dest2, "PouicPouic", 5) || ft_strncmp(dest1, dest2, 50) != 0)
	{
                printf("\033[31;01mERROR\033[00m\n");
		return (1);
	}
	if (ft_strlcpy(dest1, "", 20) != strlcpy(dest2, "", 20) || ft_strncmp(dest1, dest2, 50) != 0)
	{
                printf("\033[31;01mERROR\033[00m\n");
		return (1);
	}
	printf ("\033[32;01m--OK\033[00m\n");
//STRLCAT
	printf ("\033[34;01m|| ft_strlcpy test ||\033[00m\n");
	char	dst1[50] = "Hello ";
	char	dst2[50] = "Hello ";
	if (ft_strlcat(dst1, "Everybody !", 17) != strlcat(dst2, "Everybody !", 17) || ft_strncmp(dst1, dst2, 50) != 0)
	{
                printf("\033[31;01mERROR\033[00m\n");
		return (1);
	}
	if (ft_strlcat(dst1, "Everybody !", 10) != strlcat(dst2, "Everybody !", 10) || ft_strncmp(dst1, dst2, 50) != 0)
	{
                printf("\033[31;01mERROR\033[00m\n");
		return (1);
	}
	if (ft_strlcat(dst1, "", 17) != strlcat(dst2, "", 17) || ft_strncmp(dst1, dst2, 50) != 0)
	{
                printf("\033[31;01mERROR\033[00m\n");
		return (1);
	}
	printf ("\033[32;01m--OK\033[00m\n");





	return (0);
}
