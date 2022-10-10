/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:43:26 by adrperez          #+#    #+#             */
/*   Updated: 2022/10/10 15:05:55 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void  check_leaks(void){
	system("leaks a.out");
}

int	main(void)
{
	atexit(check_leaks);
	// printf("ft_isalpha: %d\n", ft_isalpha('z'));
	// printf("isalpha: %d\n", isalpha('z'));
	// printf("ft_isalpha: %d\n", ft_isalpha('0'));
	// printf("isalpha: %d\n", isalpha('0'));
	// printf("--------------\n");
	// printf("ft_isdigit: %d\n", ft_isdigit('z'));
	// printf("isdigit: %d\n", isdigit('z'));
	// printf("ft_isdigit: %d\n", ft_isdigit('0'));
	// printf("isdigit: %d\n", isdigit('0'));
	// printf("--------------\n");
	// printf("ft_isalnum: %d\n", ft_isalnum('z'));
	// printf("isalnum: %d\n", isalnum('z'));
	// printf("ft_isdigit: %d\n", ft_isalnum('0'));
	// printf("isalnum: %d\n", isalnum('0'));
	// printf("ft_isdigit: %d\n", ft_isalnum('!'));
	// printf("isalnum: %d\n", isalnum('!'));
	// printf("--------------\n");
	// printf("ft_isascii: %d\n", ft_isascii('z'));
	// printf("isascii: %d\n", isascii('z'));
	// printf("--------------\n");
	// printf("ft_isprint: %d\n", ft_isprint(' '));
	// printf("isprint: %d\n", isprint(' '));
	// printf("ft_isprint: %d\n", ft_isprint(1));
	// printf("isprint: %d\n", isprint(1));
	// printf("--------------\n");
	// printf("ft_strlen: %zu\n", ft_strlen(""));
	// printf("strlen: %lu\n", strlen(""));
	// printf("ft_strlen: %zu\n", ft_strlen("Hola caracola!"));
	// printf("strlen: %lu\n", strlen("Hola caracola!"));
	// printf("--------------\n");
	// char str[50] = "This is string.h library function";
	// char str1[50] = "This is string.h library function";
	// printf("ft_memset: %s\n", ft_memset(str, '$', 7));
	// printf("memset: %s\n", memset(str1,'$',7));
	// printf("--------------\n");
	// char str2[50] = "Hola caracola!";
	// char str3[50] = "Hola caracola!";
	// int pos = 5;
	// printf("str, str[pos], str[pos + 1]: %s %d %d\n", str2, str2[pos], str2[pos + 1]);
	// ft_bzero(str2 + pos, 2);
	// bzero(str3 + pos, 2);
	// printf("ft_bzero: %s %d %d\n", str2, str2[pos], str2[pos + 1]);
	// printf("bzero: %s %d %d\n", str3, str3[pos], str3[pos + 1]);
	// printf("--------------\n");
	// char src[50] = "Hola caracola!";
	// char dst[50];
	// char src1[50] = "Hola caracola!";
	// char dst1[50];
	// char a[16] = "Hola caracola!";
	// char a1[16] = "Hola caracola!";
	// ft_memcpy(dst, src, 7);
	// memcpy(dst1, src1, 7);
	// ft_memcpy(&a[0], &a[1], 7);
	// memcpy(&a1[0], &a1[1], 7);
	// printf("ft_memcpy: %s\n", dst);
	// printf("memcpy: %s\n", dst1);
	// printf("ft_memcpy: %s\n", a);
	// printf("memcpy: %s\n", a1);
	// printf("--------------\n");
	// char src2[50] = "Hola caracola!";
	// char dst2[50];
	// char src3[50] = "Hola caracola!";
	// char dst3[50];
	// char a2[16] = "Hola caracola!";
	// char a3[16] = "Hola caracola!";
	// ft_memmove(dst2, src2, 7);
	// memmove(dst3, src3, 7);
	// ft_memmove(&a2[0], &a2[1], 7);
	// memmove(&a3[0], &a3[1], 7);
	// printf("ft_memmove: %s\n", dst2);
	// printf("memmove: %s\n", dst3);
	// printf("ft_memmove: %s\n", a2);
	// printf("memmove: %s\n", a3);
	// printf("--------------\n");
	// char src4[] = "1234567890123";
	// char dest4[100] = "";
	// char src5[] = "1234567890123";
	// char dest5[100] = "";
	// printf("ft_strlcpy tamaño: %zu, resultado destino: %s\n", ft_strlcpy(dest4, src4, 100), dest4);
	// printf("strlcpy tamaño: %lu, resultado destino: %s\n", strlcpy(dest5, src5, 100), dest5);
	// printf("--------------\n");
	// // char src6[] = "caracola";
	// // char *dest6 = 0;
	// // char src7[] = "caracola";
	// // char *dest7 = 0;
	// char *desttttt;
	// desttttt = (char *)malloc(sizeof(*desttttt) * 15);
	// memset(desttttt, 'r', 15);
	// printf("destttt: %s\n", desttttt);
	// printf("ft_strlcat return: %zu, resultado destino: %s\n", ft_strlcat(desttttt, "lorem ipsum dolor sit amet", 5), desttttt);
	// memset(desttttt, 'r', 15);
	// printf("strlcat return: %zu, resultado destino: %s\n", strlcat(desttttt, "lorem ipsum dolor sit amet", 5), desttttt);
	// memset(desttttt, 0, 15);
	// memset(desttttt, 'r', 6);
	// desttttt[10] = 'a';
	// printf("ft_strlcat return: %zu, resultado destino: %s\n", ft_strlcat(desttttt, "lorem ipsum dolor sit amet", 6), desttttt);
	// memset(desttttt, 0, 15);
	// memset(desttttt, 'r', 6);
	// desttttt[10] = 'a';
	// printf("strlcat return: %zu, resultado destino: %s\n", strlcat(desttttt, "lorem ipsum dolor sit amet", 6), desttttt);
	// printf("--------------\n");
	// char letra = 'c';
	// char letra1 = 'c';
	// printf("ft_toupper return: %d\n", ft_toupper(letra));
	// printf("toupper return: %d\n", toupper(letra1));
	// printf("--------------\n");
	// letra = 'C';
	// letra1 = 'C';
	// printf("ft_tolower return: %d\n", ft_tolower(letra));
	// printf("tolower return: %d\n", tolower(letra1));
	// printf("--------------\n");
	// char *s = "aaac";
	// //letra = 1024;
	// char *s1 = "aaac";
	// //letra1 = 1024;
 	// printf("ft_strchr return: %s\n", ft_strchr(s, 1024));
	// printf("strchr return: %s\n", strchr(s1, 1024));
	// printf("--------------\n");	
	// char *s2 = "caracola";
	// letra = 'c';
	// char *s3 = "caracola";
	// letra1 = 'c';
 	// printf("ft_strrchr return: %s\n", ft_strrchr(s2, letra));
	// printf("strrchr return: %s\n", strrchr(s3, letra1));
	// printf("--------------\n");	
	// char str4[] = "ab", str5[] = "", str6[] = "abcd";
	// printf("ft_strncmp: %d\n", ft_strncmp(str4, str5, 2));
	// printf("ft_strncmp: %d\n", ft_strncmp(str4, str6, 2));
	// printf("ft_strncmp: %d\n", ft_strncmp(str4, str6, 4));
	// printf("strncmp: %d\n", strncmp(str4, str5, 2));
	// printf("strncmp: %d\n", strncmp(str4, str6, 2));
	// printf("strncmp: %d\n", strncmp(str4, str6, 4));
	// printf("--------------\n");
	// char str7[] = "aracola";
	// letra = 'c';
	// char str8[] = "aracola";
	// letra1 = 'c';
	// printf("ft_memchr: %s\n", ft_memchr(str7, letra, 6));
	// printf("memchr: %s\n", memchr(str8, letra1, 6));
	// printf("--------------\n");
	// char str9[] = "ab";
	// char str10[] = "";
	// char str11[] = "abcd";
	// printf("ft_memcmp: %d\n", ft_memcmp(str9, str10, 2));
	// printf("ft_memcmp: %d\n", ft_memcmp(str9, str11, 2));
	// printf("ft_memcmp: %d\n", ft_memcmp(str9, str11, 4));
	// printf("--------------\n");
	// printf("memcmp: %d\n", memcmp(str9, str10, 2));
	// printf("memcmp: %d\n", memcmp(str9, str11, 2));
	// printf("memcmp: %d\n", memcmp(str9, str11, 4));
	// printf("--------------\n");
	// char *haystack = "aaabcabcd";
	// // char *needle = "la";
	// char *haystack1 = "aaabcabcd";
 	// printf("ft_strnstr: %s\n", ft_strnstr(haystack, "abcd", 9));
	// printf("strnstr: %s\n", strnstr(haystack1, "abcd", 9));
	// printf("--------------\n");
	// printf("ft_strnstr: %s\n", ft_strnstr(haystack, "cd", 8));
	// printf("strnstr: %s\n", strnstr(haystack1, "cd", 8));
	// printf("--------------\n");
	// printf("ft_strnstr: %s\n", ft_strnstr(haystack, "a", 1));
	// printf("strnstr: %s\n", strnstr(haystack1, "a", 1));
	// printf("--------------\n");
	// char *numero = "     -12345";
 	// printf("ft_atoi: %d\n", ft_atoi(numero));
	// printf("atoi: %d\n", atoi(numero));
	// printf("--------------\n");
	// int n = 10;
	// int *b = (int*)calloc(n, sizeof(int));
	// int i;
	// for(i = 0; i < n; i++)
    // {
    //     printf("%d", b[i]);
    // }
	// printf(" --> calloc\n");
	// int n1 = 10;
	// int *b1 = (int*)ft_calloc(n1, sizeof(int));
	// for(i = 0; i < n1; i++)
    // {
    //     printf("%d", b1[i]);
    // }
	// printf(" --> ft_calloc\n");
	// printf("--------------\n");
	// // char *str12 = "coucou";
	// printf("ft_strdup: %s\n", ft_strdup(""));
	// printf("strdup: %s\n", strdup(""));
	// printf("--------------\n");
	// char *str13 = "hola caracola";
	// printf("ft_substr: %s\n", ft_substr(str13, 6, 4));
	// printf("--------------\n");
	// char *str14 = "hola";
	// char *str15 = " caracola";
	// printf("ft_strjoin: %s\n", ft_strjoin(str14, str15));
	// printf("ft_strjoin (42): %s\n", ft_strjoin("", "42"));
	// printf("ft_strjoin (42): %s\n", ft_strjoin("42", ""));
	// printf("ft_strjoin (""): %s\n", ft_strjoin("", ""));
	// printf("--------------\n");
	// char	*str16 = "   xxxtrixpouille";
	// char	*set = " x";
	// //char	*str17 = "          ";
	// printf("ft_strtrim: %s\n", ft_strtrim(str16, set));
	// printf("ft_strtrim: %s\n", ft_strtrim(str16, set));
	// printf("--------------\n");
	// // char	*str18 = "\0aa\0bbb";
	// // char	**res = ft_split(str18, '\0');
	// // int j = 0;
	// // while (res)
	// // {
	// // 	printf("ft_split: %s\n", res[j]);
	// // 	j++;
	// // }
	// printf("--------------\n");
	// int num = -1234;
	// char *resss = ft_itoa(num);
	// printf("ft_itoa: %s, size of:%zu \n ", resss, strlen(resss));
	// printf("--------------\n");
	// printf("ft_strmapi: %s, ", ft_strmapi("olol", NULL));
	// //printf("ft_strmapi: %s, ", ft_strmapi(NULL, NULL)); write(1, "hola", 5);
	return (0);
}
