#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
//#include "pisc_rel/ex22/ft_abs.h"
//#include "pisc_rel/ex23/ft_point.h"

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define RESET   "\x1b[0m"
#define printred(x) printf(RED"!!!!! %s ERROR !!!!!"RESET"\n", x);
#define printgreen(x) printf(GREEN"%s"RESET"\n", x);
#define ERROR { return (0); }

int		nb_index;
char	nb_putchar[100];

 #define FT_PRINT_ALPHABET
 #define FT_PRINT_NUMBERS
 #define FT_IS_NEGATIVE
 #define FT_FT
 #define FT_SWAP
 #define FT_DIV_MOD
 #define FT_ITERATIVE_FACTORIAL
 #define FT_RECURSIVE_FACTORIAL
 #define FT_SQRT
 #define FT_PUTSTR
 #define FT_STRLEN
 #define FT_STRCMP
 #define FT_STRPARAMS
 #define FT_STRDUP
 #define FT_RANGE
#define FT_MAKEFILE
#define FT_FOREACH
#define FT_COUNT_IF
// #define FT_DISPLAY_FILE

int		test_ft_print_alphabet(void);
void	ft_print_alphabet(void);
int		test_ft_print_numbers(void);
void	ft_print_numbers(void);
int		test_ft_is_negative(void);
void	ft_is_negative(int n);
int		test_ft_ft(void);
void	ft_ft(int *nbr);
int		test_ft_swap(void);
void	ft_swap(int *a, int *b);
int		test_ft_div_mod(void);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		test_ft_iterative_factorial(void);
int		ft_iterative_factorial(int nb);
int		test_ft_recursive_factorial(void);
int		ft_recursive_factorial(int nb);
int		test_ft_sqrt(void);
int		ft_sqrt(int nb);
int		test_ft_putstr(void);
void	ft_putstr(char *str);
int		test_ft_strlen(void);
int		ft_strlen(char *str);
int		test_ft_strcmp(void);
int		ft_strcmp(char *s1, char *s2);
int		test_ft_strdup(void);
char	*ft_strdup(char *src);
int		test_ft_range(void);
int		*ft_range(int min, int max);
int		test_ft_abs(void);
int		test_ft_point(void);
int		test_ft_foreach(void);
void	ft_foreach(int *tab, int length, void(*f)(int));
int		test_ft_count_if(void);
int		ft_count_if(char **tab, int(*f)(char*));

void	ft_putchar(char c)
{
	if (nb_index >= 99)
		return ;
	nb_putchar[nb_index] = c;
	nb_index++;
}

int		main(void)
{
	int		tab[100];
	char	*name[100];
	int		i;

	i = 0;
	while (i < 100)
	{
		tab[i] = -1;
		i++;
	}
	i = 0;

	#ifdef FT_PRINT_ALPHABET
		tab[i] = test_ft_print_alphabet();
		name[i] = "ft_print_alphabet";
		i++;
	#endif
	#ifdef FT_PRINT_NUMBERS
		tab[i] = test_ft_print_numbers();
		name[i] = "ft_print_numbers";
		i++;
	#endif
	#ifdef FT_IS_NEGATIVE
		tab[i] = test_ft_is_negative();
		name[i] = "ft_is_negative";
		i++;
	#endif
	#ifdef FT_FT
		tab[i] = test_ft_ft();
		name[i] = "ft_ft";
		i++;
	#endif
	#ifdef FT_SWAP
		tab[i] = test_ft_swap();
		name[i] = "ft_swap";
		i++;
	#endif
	#ifdef FT_DIV_MOD
		tab[i] = test_ft_div_mod();
		name[i] = "ft_div_mod";
		i++;
	#endif
	#ifdef FT_ITERATIVE_FACTORIAL
		tab[i] = test_ft_iterative_factorial();
		name[i] = "ft_iterative_factorial";
		i++;
	#endif
	#ifdef FT_RECURSIVE_FACTORIAL
		tab[i] = test_ft_recursive_factorial();
		name[i] = "ft_recursive_factorial";
		i++;
	#endif
	#ifdef FT_SQRT
		tab[i] = test_ft_sqrt();
		name[i] = "ft_sqrt";
		i++;
	#endif
	#ifdef FT_PUTSTR
		tab[i] = test_ft_putstr();
		name[i] = "ft_putstr";
		i++;
	#endif
	#ifdef FT_STRLEN
		tab[i] = test_ft_strlen();
		name[i] = "ft_strlen";
		i++;
	#endif
	#ifdef FT_STRCMP
		tab[i] = test_ft_strcmp();
		name[i] = "ft_strcmp";
		i++;
	#endif
	#ifdef FT_STRDUP
		tab[i] = test_ft_strdup();
		name[i] = "ft_strdup";
		i++;
	#endif
	#ifdef FT_RANGE
		tab[i] = test_ft_range();
		name[i] = "ft_range";
		i++;
	#endif
	#ifdef FT_ABS
		tab[i] = test_ft_abs();
		name[i] = "ft_abs";
		i++;
	#endif
	#ifdef FT_POINT
		tab[i] = test_ft_point();
		name[i] = "ft_point";
		i++;
	#endif
	#ifdef FT_FOREACH
		tab[i] = test_ft_foreach();
		name[i] = "ft_foreach";
		i++;
	#endif
	#ifdef FT_COUNT_IF
		tab[i] = test_ft_count_if();
		name[i] = "ft_count_if";
		i++;
	#endif

	i = 0;
	while (i < 100)
	{
		if (tab[i] == 1)
			printgreen(name[i]);
		i++;
	}
	i = 0;
	while (i < 100)
	{
		if (tab[i] == 0)
			printred(name[i]);
		i++;
	}
	#ifdef FT_STRPARAMS
		printf("------------------------------------------\n");
		printf("/!\\Don't forget to test ex 18 and 19.../!\\\n");
		printf("------------------------------------------\n");
	#endif
	#ifdef FT_MAKEFILE
		printf("-----------------------------------\n");
		printf("/!\\Don't forget to test ex 24.../!\\\n");
		printf("-----------------------------------\n");
	#endif
	#ifdef FT_DISPLAY_FILE
		printf("-----------------------------------\n");
		printf("/!\\Don't forget to test ex 27.../!\\\n");
		printf("-----------------------------------\n");
	#endif
	return (0);
}

#ifdef FT_COUNT_IF
int		ft_feedback(char *str)
{
	if (strlen(str) > 3)
		return (1);
	return (0);
}

int		test_ft_count_if(void)
{
	char *tab[6] = {"a", "", "hello world!", "salut", "!*a**", 0};

	if (ft_count_if(tab, &ft_feedback) != 3)
		ERROR
	return (1);
}
#endif

#ifdef FT_FOREACH
void	ft_putnbr(int n)
{
	long nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		test_ft_foreach(void)
{
	int i;
	int tab[5] = {-1, 8, 42, 471, -145};

	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	ft_foreach(tab, 5, &ft_putnbr);
	if (strcmp(nb_putchar, "-1842471-145") != 0)
		ERROR
	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	return (1);
}
#endif

#ifdef FT_POINT
void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		test_ft_point(void)
{
	t_point point;

	set_point(&point);
	if (point.x != 42 || point.y != 21)
		ERROR
	return (1);
}
#endif

#ifdef FT_ABS
int		test_ft_abs(void)
{
	int x;

	x = ABS(42);
	if (x != 42)
		ERROR
	x = ABS(-42);
	if (x != 42)
		ERROR
	x = ABS(0);
	if (x != 0)
		ERROR
	return (1);
}
#endif

#ifdef FT_RANGE
int		test_ft_range(void)
{
	int *tab;
	int x;
	int i;

	tab = ft_range(1, 20);
	i = 0;
	x = 1;
	while (i < 19)
	{
		if (tab[i] != x)
			ERROR
		i++;
		x++;
	}
	if (tab[i] == x)
		ERROR
	free(tab);
	tab = ft_range(5, 5);
	if (tab != NULL)
		ERROR
	free(tab);
	tab = ft_range(6, 1);
	if (tab != NULL)
		ERROR
	free(tab);
	tab = ft_range(-5, 17);
	i = 0;
	x = -5;
	while (i < 22)
	{
		if (tab[i] != x)
			ERROR
		i++;
		x++;
	}
	if (tab[i] == x)
		ERROR
	free(tab);
	tab = ft_range(7, 8);
	i = 0;
	x = 7;
	while (i < 1)
	{
		if (tab[i] != x)
			ERROR
		i++;
		x++;
	}
	if (tab[i] == x)
		ERROR
	free(tab);
	return (1);
}
#endif

#ifdef FT_STRDUP
int		test_ft_strdup(void)
{
	char		*ret1;
	char		*ret2;

	ret1 = strdup("");
	ret2 = ft_strdup("");
	if (strcmp(ret1, ret2) != 0)
		ERROR;
	free(ret1);
	free(ret2);
	ret1 = strdup("hello");
	ret2 = ft_strdup("hello");
	if (strcmp(ret1, ret2) != 0)
		ERROR;
	free(ret1);
	free(ret2);
	return (1);
}
#endif

#ifdef FT_STRCMP
int		test_ft_strcmp(void)
{
	if (ft_strcmp("abc", "abc") != 0)
		ERROR
	if (ft_strcmp("cba", "abc") <= 0)
		ERROR
	if (ft_strcmp("abc", "cba") >= 0)
		ERROR
	if (ft_strcmp("", "") != 0)
		ERROR
	if (ft_strcmp("", "a") >= 0)
		ERROR
	if (ft_strcmp("a", "") <= 0)
		ERROR
	return (1);
}
#endif

#ifdef FT_STRLEN
int		test_ft_strlen(void)
{
	if (strlen("Hello world!") != ft_strlen("Hello world!"))
		ERROR
	if (strlen("") != ft_strlen(""))
		ERROR
	if (strlen("a") != ft_strlen("a"))
		ERROR
	return (1);
}
#endif

#ifdef FT_PUTSTR
int		test_ft_putstr(void)
{
	int i;

	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	ft_putstr("Hello world!");
	if (strcmp(nb_putchar, "Hello world!") != 0)
		ERROR
	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	ft_putstr("");
	if (strcmp(nb_putchar, "") != 0)
		ERROR
	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	return (1);
}
#endif

#ifdef FT_SQRT
int		test_ft_sqrt(void)
{
	int ret;

	ret = ft_sqrt(-1);
	//printf(" -1 >%d\n",ret);
	if (ret != 0)
		ERROR
	ret = ft_sqrt(-42);
//	printf("-42 > %d\n",ret);
	if (ret != 0)
		ERROR
	ret = ft_sqrt(0);
//	printf("%d\n",ret);
	if (ret != 0)
		ERROR
	ret = ft_sqrt(1);
//	printf("%d\n",ret);
	if (ret != 0)
		ERROR
	ret = ft_sqrt(42);
//	printf("42 > %d\n",ret);
	if (ret != 0)
		ERROR
	ret = ft_sqrt(36);
//	printf("36 > %d\n",ret);
	if (ret != 6)
		ERROR
	ret = ft_sqrt(1764);
	if (ret != 42)
		ERROR
	//ret = ft_sqrt( 2147483641);
	//aif (ret !=     593968971)
	//	ERROR
	return (1);
}
#endif

#ifdef FT_RECURSIVE_FACTORIAL
int		test_ft_recursive_factorial(void)
{
	int ret;

	ret = ft_recursive_factorial(0);
	if (ret != 1)
		ERROR
	ret = ft_recursive_factorial(1);
	if (ret != 1)
		ERROR
	ret = ft_recursive_factorial(-1);
	if (ret != 0)
		ERROR
	ret = ft_recursive_factorial(13);
	if (ret != 0)
		ERROR
	ret = ft_recursive_factorial(12);
	if (ret != 479001600)
		ERROR
	ret = ft_recursive_factorial(7);
	if (ret != 5040)
		ERROR
	return (1);
}
#endif

#ifdef FT_ITERATIVE_FACTORIAL
int		test_ft_iterative_factorial(void)
{
	int ret;

	ret = ft_iterative_factorial(0);
	if (ret != 1)
		ERROR
	ret = ft_iterative_factorial(1);
	if (ret != 1)
		ERROR
	ret = ft_iterative_factorial(-1);
	if (ret != 0)
		ERROR
	ret = ft_iterative_factorial(13);
	if (ret != 0)
		ERROR
	ret = ft_iterative_factorial(12);
	if (ret != 479001600)
		ERROR
	ret = ft_iterative_factorial(7);
	if (ret != 5040)
		ERROR
	return (1);
}
#endif

#ifdef FT_DIV_MOD
int		test_ft_div_mod(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	if (div != 2 || mod != 1)
		ERROR
	a = 321;
	b = 123;
	ft_div_mod(a, b, &div, &mod);
	if (div != 2 || mod != 75)
		ERROR
	a = 30;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	if (div != 6 || mod != 0)
		ERROR
	return (1);
}
#endif

#ifdef FT_SWAP
int		test_ft_swap(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	ft_swap(&a, &b);
	if (a != 0 && b != 0)
		ERROR
	a = 1;
	b = 2;
	ft_swap(&a, &b);
	if (a != 2 && b != 1)
		ERROR
	a = 123;
	b = 321;
	ft_swap(&a, &b);
	if (a != 321 && b != 123)
		ERROR
	a = 2147483647;
	b = -2147483648;
	ft_swap(&a, &b);
	if (a != -2147483648 && b != 2147483647)
		ERROR
	return (1);
}
#endif

#ifdef FT_FT
int		test_ft_ft(void)
{
	int nbr;

	ft_ft(&nbr);
	if (nbr != 42)
		ERROR
	nbr = 123;
	ft_ft(&nbr);
	if (nbr != 42)
		ERROR
	return (1);
}
#endif

#ifdef FT_IS_NEGATIVE
int		test_ft_is_negative(void)
{
	int i;

	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	i = -2;
	while (i <= 2)
	{
		nb_index = 0;
		ft_is_negative(i);
		if (i >= 0 && strcmp(nb_putchar, "P") != 0)
			ERROR
		if (i < 0 && strcmp(nb_putchar, "N") != 0)
			ERROR
		i++;
	}
	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	return (1);
}
#endif

#ifdef FT_PRINT_NUMBERS
int		test_ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	ft_print_numbers();
	if (strcmp(nb_putchar, "0123456789") != 0)
		ERROR
	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	return (1);
}
#endif

#ifdef FT_PRINT_ALPHABET
int		test_ft_print_alphabet(void)
{
	int i;

	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	ft_print_alphabet();
	if (strcmp(nb_putchar, "abcdefghijklmnopqrstuvwxyz") != 0)
		ERROR
	i = 0;
	while (i < 100)
	{
		nb_putchar[i] = 0;
		i++;
	}
	nb_index = 0;
	return (1);
}
#endif
