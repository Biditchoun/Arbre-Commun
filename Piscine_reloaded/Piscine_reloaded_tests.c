/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Piscine_reloaded_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:53:25 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/16 11:12:47 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ex23/ft_point.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

void	putn(int nb)
{
	if (nb > 9)
		putn(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

void	ftputnbr(int nb)
{
	if (nb == INT_MIN)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		putn(nb);
	}
	write(1, " ", 1);
}

int	ex02(char *str)
{
	if (!str[0])
		return (-1);
	return (1);
}

int main()
{
	// If null_test != 0, null pointers and other specific edge cases will be tested.
	int null_test = 1;
	//ex06
	void ft_print_alphabet(void);
	char *s = "abcdefghijklmnopqrstuvwxyz";
	printf("Printf_alphabet test\n%s\n", s);
	ft_print_alphabet();
	printf("\n");

	//ex07
	void ft_print_numbers(void);
	s = "0123456789";
	printf("\n\nft_print_numbers test\n%s\n", s);
	ft_print_numbers();
	printf("\n");

	//ex08
	void ft_is_negative(int n);
	int a = INT_MIN;
	int b = -1;
	int c = 0;
	int d = 1;
	int e = INT_MAX;
	printf("\n\nft_is_negative tests\n");
	ft_is_negative(a);
	printf(" N %i\n", a);
	ft_is_negative(b);
	printf(" N %i\n", b);
	ft_is_negative(c);
	printf(" P %i\n", c);
	ft_is_negative(d);
	printf(" P %i\n", d);
	ft_is_negative(e);
	printf(" P %i\n", e);

	//ex09
	void ft_ft(int *nbr);
	a = INT_MIN;
	b = -1;
	c = 0;
	d = 42;
	e = INT_MAX;
	ft_ft(&a);
	ft_ft(&b);
	ft_ft(&c);
	ft_ft(&d);
	ft_ft(&e);
	printf("\n\nft_ft tests\n42 42 42 42 42\n%i %i %i %i %i\n", a, b, c, d, e);
	if (null_test)
		ft_ft(NULL);

	//ex10
	void ft_swap(int *a, int *b);
	a = INT_MIN;
	b = -1;
	c = 0;
	d = 42;
	e = INT_MAX;
	printf("\n\nft_swap tests\n%i %i %i %i %i\n", e, d, c, b, a);
	ft_swap(&a, &e);
	ft_swap(&b, &d);
	ft_swap(&c, &c);
	printf("%i %i %i %i %i\n", a, b, c, d, e);
	if (null_test)
	{
		ft_swap(&a, NULL);
		ft_swap(NULL, &e);
		ft_swap(NULL, NULL);
	}

	//ex11
	void ft_div_mod(int a, int b, int *div, int *mod);
	printf("\n\nft_div_mod tests\n");
	a = INT_MIN;
	b = -22;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = -42;
	b = -84;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = -8;
	b = -1;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = -1137;
	b = 1137;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = 666;
	b = -666;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = 28;
	b = 29;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = 31;
	b = 27;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = INT_MAX;
	b = INT_MIN;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = 0;
	b = -2;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	a = 0;
	b = 29;
	ft_div_mod(a, b, &c, &d);
	printf("%i %i\n%i %i\n", a/b, a%b, c, d);
	ft_div_mod(-1, 0, &a, &b);
	if (null_test)
	{
		ft_div_mod(-1, 1, NULL, &b);
		ft_div_mod(-1, 1, &a, NULL);
		ft_div_mod(-1, 0, NULL, &b);
		ft_div_mod(-1, 0, &a, NULL);
		ft_div_mod(-1, 1, NULL, NULL);
		ft_div_mod(-1, 0, NULL, NULL);
	}

	//ex12
	int ft_iterative_factorial(int nb);
	printf("\n\nft_iterative_factorial tests\n0 0 1 1 2 6 120 3628800 0\n%i %i %i %i %i %i %i %i %i\n", ft_iterative_factorial(-5),  ft_iterative_factorial(-1),  ft_iterative_factorial(0),  ft_iterative_factorial(1),  ft_iterative_factorial(2),  ft_iterative_factorial(3),  ft_iterative_factorial(5), ft_iterative_factorial(10), ft_iterative_factorial(20));

	//ex13
	int ft_recursive_factorial(int nb);
	printf("\n\nft_recursive_factorial tests\n0 0 1 1 2 6 120 3628800\n%i %i %i %i %i %i %i %i\n", ft_recursive_factorial(-5),  ft_recursive_factorial(-1),  ft_recursive_factorial(0),  ft_recursive_factorial(1),  ft_recursive_factorial(2),  ft_recursive_factorial(3),  ft_recursive_factorial(5), ft_recursive_factorial(10));

	//ex14
	int ft_sqrt(int nb);
	printf("\n\nft_sqrt tests\n0 0 0 0 1 0 0 2 3 5 11 111 1111 46337 0\n%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_sqrt(INT_MIN), ft_sqrt(-8), ft_sqrt(-1), ft_sqrt(0), ft_sqrt(1), ft_sqrt(2), ft_sqrt(3), ft_sqrt(4), ft_sqrt(9), ft_sqrt(25), ft_sqrt(121), ft_sqrt(12321), ft_sqrt(1234321), ft_sqrt(2147117569), ft_sqrt(INT_MAX));

	//ex15
	void ft_putstr(char *str);
	printf("\n\nft_putstr tests\n");
	char *pt1 = "E";
	char *pt2 = "";
	char *pt3 = "Jambonfromagequiroule VRAIMENT";
	char pt4[4];
	pt4[0] = '0';
	pt4[1] = 'o';
	pt4[2] = 0;
	pt4[3] = '0';
	printf("%s\n", pt1);
	ft_putstr(pt1);
	printf("\n%s\n", pt2);
	ft_putstr(pt2);
	printf("\n%s\n", pt3);
	ft_putstr(pt3);
	printf("\n%s\n", pt4);
	ft_putstr(pt4);
	if (null_test)
		ft_putstr(NULL);
	printf("\n");

	//ex16
	int ft_strlen(char *str);
	printf("\n\nft_strlen tests\n%i %i %i %i\n%i %i %i %i\n", (int)strlen(pt1), (int)strlen(pt2), (int)strlen(pt3), (int)strlen(pt4), ft_strlen(pt1), ft_strlen(pt2), ft_strlen(pt3), ft_strlen(pt4));
	if (null_test)
		printf("ft_strlen should crash when NULL is passed to it.\nA test for that can be found here but needs to be uncommented.\n");
	//ft_strlen(NULL);
	
	//ex17
	int	ft_strcmp(char *s1, char *s2);
	printf("\n\nft_strcmp tests\n");
	char s0[100] = "";
	char s00[100] = "";
	char s1[100] = " ";
	char s11[100] = " ";
	char s2[100] = "ah";
	char s22[100] = "ah";
	char s3[100] = "PAF";
	char s33[100] = "PAF";
	char s4[100] = "Jambonfromagequiroule toujours";
	char s44[100] = "Jambonfromagequiroule toujours";
	char s5[100] = "Dora";
	char s55[100] = "Dore";
	char s6[100] = "Plouf";
	char s66[100] = "Plouf!";
	char s7[100] = "  ";
	char s77[100] = " ";
	char s8[100] = "";
	char s88[100] = " ";
	printf("%i %i %i %i %i %i %i %i %i %i %i %i %i\n", strcmp(s0, s00), strcmp(s1, s11), strcmp(s2, s22), strcmp(s3, s33), strcmp(s4, s44), strcmp(s5, s55), strcmp(s55, s5), strcmp(s6, s66), strcmp(s66, s6), strcmp(s7, s77), strcmp(s77, s7), strcmp(s8, s88), strcmp(s88, s8));
	printf("%i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_strcmp(s0, s00), ft_strcmp(s1, s11), ft_strcmp(s2, s22), ft_strcmp(s3, s33), ft_strcmp(s4, s44), ft_strcmp(s5, s55), ft_strcmp(s55, s5), ft_strcmp(s6, s66), ft_strcmp(s66, s6), ft_strcmp(s7, s77), ft_strcmp(s77, s7), ft_strcmp(s8, s88), ft_strcmp(s88, s8));
	if (null_test)
	{
		printf("You will need to activate the first null_test manually, since it gets flagged by Werror\n");
		//printf("%i %i\n", strcmp(NULL, NULL), ft_strcmp(NULL, NULL));
		printf("ft_strcmp should crash on the two other commented tests below here.\n");
		//ft_strcmp(NULL, s1);
		//ft_strcmp(s1, NULL);
	}

	//ex20
	char *ft_strdup(char *src);
	printf("\n\nft_strdup tests\n");
	char *p1 = strdup(s2);
	char *p11 = ft_strdup(s2);
	printf("%s\n%s\n", p1, p11);
	free(p1);
	free(p11);
	p1 = strdup(s3);
	p11 = ft_strdup(s3);
	printf("%s\n%s\n", p1, p11);
	free(p1);
	free(p11);
	p1 = strdup(s4);
	p11 = ft_strdup(s4);
	printf("%s\n%s\n", p1, p11);
	free(p1);
	free(p11);
	p1 = strdup(s1);
	p11 = ft_strdup(s1);
	printf("%s\n%s\n", p1, p11);
	free(p1);
	free(p11);
	if (null_test)
	{
		printf("ft_strdup should crash on the commented test below here.\n");
		//ft_strdup(NULL);
	}

	//ex21
	int *ft_range(int min, int max);
	int i, i2, j, *p2;
	printf("\n\nft_range tests\n");
	i = i2 = 0;
	j = 1;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = 3;
	j = 12;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = INT_MIN;
	j = INT_MIN + 6;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = -8;
	j = 1;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = 0;
	j = 0;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = 19;
	j = 18;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = -4;
	j = -5;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = INT_MAX - 3;
	j = INT_MAX;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");
	i = i2 = 1;
	j = 0;
	p2 = ft_range(i, j);
	while (i < j)
		printf("%i ", i++);
	printf("\n");
	i = -1;
	while (++i < j - i2)
		printf("%i ", p2[i]);
	free(p2);
	printf("\n");

	//ex22
	#include "ex22/ft_abs.h"
	printf("\n\nft_abs.h tests\n89 5 1 0 1 5 89\n%i %i %i %i %i %i %i\n", ABS(-89),  ABS(-5), ABS(-1), ABS(0), ABS(1), ABS(5), ABS(89));

	//ex23
	printf("\n\nft_point.h test\n");
	t_point point;
	point.x = 3;
	point.y = 2;
	set_point(&point);
	if (point.x != 42 || point.y != 21)
		printf("Unvalid.");
	else
		printf("Valid.\n");

	//ex24
	printf("\n\nThe makefile is not tested here.\n");

	//ex25
	void ft_foreach(int *tab, int length, void(*f)(int));
	void (*ptt1)(int);
	int arr1[] = {INT_MIN, 35, 28, -25, INT_MAX, 0};
	printf("\n\nft_foreach tests\n%i %i %i %i %i %i %i %i %i %i %i %i\n", INT_MIN, INT_MIN, 35, 28, -25, INT_MAX, INT_MIN, 35, 28, -25, INT_MAX, 0);
	ptt1 = &ftputnbr;
	ft_foreach(arr1, -1, ptt1);
	ft_foreach(arr1, 0, ptt1);
	ft_foreach(arr1, 1, ptt1);
	ft_foreach(arr1, 5, ptt1);
	ft_foreach(arr1, 6, ptt1);
	printf("\n");
	if (null_test)
	{
		ft_foreach(NULL, 1, ptt1);
		ft_foreach(arr1, 1, NULL);
		ft_foreach(NULL, 1, NULL);
	}

	//ex26
	printf("\n\nft_count_if tests\n");
	int ft_count_if(char **tab, int(*f)(char*));
	char *tab[] = {"", "", "", NULL, NULL, NULL, NULL, NULL, NULL, NULL};
	tab[0] = tab[1] = tab[2] = tab[3] = "";
	printf("0 %i\n", ft_count_if(tab, &ex02));  
	tab[0] = tab[1] = tab[3] = "feur";
	printf("3 %i\n", ft_count_if(tab, &ex02));  
	if (null_test)
	{
		ft_count_if(NULL, &ex02);
		ft_count_if(tab, NULL);
		ft_count_if(NULL, NULL);
	}
	printf("\n\ndisplay_file is not tested here.\n");
}
