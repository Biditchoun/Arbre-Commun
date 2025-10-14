/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex24_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:28:33 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/14 19:30:08 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	// If null_test != 0, null pointers and other specific edge cases will be tested.
        int null_test = 1;

	//ex00 && ex01
	void ft_putchar(char c);
	char *s = "Jambonfromagequiroule";
	printf("Putchar tests\n%s\n", s);
	int i = -1;
	while (s[++i])
		ft_putchar(s[i]);

	void ft_swap(int *a, int *b);
	int a = INT_MIN;
	int b = -1;
	int c = 0;
	int d = 42;
	int e = INT_MAX;
	printf("\n\nft_swap tests\n%i %i %i %i %i\n", e, d, c, b, a);
	ft_swap(&a, &e);
	ft_swap(&b, &d);
	ft_swap(&c, &c);
	printf("%i %i %i %i %i\n", a, b, c, d, e);
	if (null_test)
	{
		ft_swap(NULL, &a);
		ft_swap(&a, NULL);
		ft_swap(NULL, NULL);
	}

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

	int ft_strlen(char *str);
	printf("\n\nft_strlen tests\n%i %i %i %i\n%i %i %i %i\n", (int)strlen(pt1), (int)strlen(pt2), (int)strlen(pt3), (int)strlen(pt4), ft_strlen(pt1), ft_strlen(pt2), ft_strlen(pt3), ft_strlen(pt4));
	if (null_test)
		ft_strlen(NULL);

	int	ft_strcmp(char *s1, char *s2);
	printf("\n\nft_strcmp tests\n");
	char s0[100] = "";
	char s00[100] = "";
	char ss1[100] = " ";
	char ss11[100] = " ";
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
	printf("%i %i %i %i %i %i %i %i %i %i %i %i %i\n", strcmp(s0, s00), strcmp(ss1, ss11), strcmp(s2, s22), strcmp(s3, s33), strcmp(s4, s44), strcmp(s5, s55), strcmp(s55, s5), strcmp(s6, s66), strcmp(s66, s6), strcmp(s7, s77), strcmp(s77, s7), strcmp(s8, s88), strcmp(s88, s8));
	printf("%i %i %i %i %i %i %i %i %i %i %i %i %i\n", ft_strcmp(s0, s00), ft_strcmp(ss1, ss11), ft_strcmp(s2, s22), ft_strcmp(s3, s33), ft_strcmp(s4, s44), ft_strcmp(s5, s55), ft_strcmp(s55, s5), ft_strcmp(s6, s66), ft_strcmp(s66, s6), ft_strcmp(s7, s77), ft_strcmp(s77, s7), ft_strcmp(s8, s88), ft_strcmp(s88, s8));
	if (null_test)
	{
		printf("You will need to activate this null_test manually, since it gets flagged by Werror\n");
		//printf("%i %i\n", strcmp(NULL, NULL), ft_strcmp(NULL, NULL));
	}
	//ft_strcmp should crash on each individual line below
//	ft_strcmp(NULL, s1);
//	ft_strcmp(s1, NULL);
}
