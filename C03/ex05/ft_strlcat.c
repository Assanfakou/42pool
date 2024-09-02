/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfakou <hfakou@student.1337.mA>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 05:37:07 by hfakou            #+#    #+#             */
/*   Updated: 2024/07/08 17:11:55 by hfakou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_length;
	unsigned int	s_length;

	d_length = 0;
	while (dest[d_length] != '\0')
		d_length++;
	s_length = 0;
	while (src[s_length] != '\0')
		s_length++;
	i = 0;
	j = d_length;
	while (src[i] != '\0' && j < (size - 1) && size != 0)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	if (d_length < size)
		return (size + s_length);
	return (d_length + s_length);
}
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

void test_strlcat(char *dest, char *src, unsigned int size, const char *test_name)
{
    char dest_copy[256];
    strcpy(dest_copy, dest);
    
    unsigned int result = ft_strlcat(dest, src, size);
    unsigned int expected = strlcat(dest_copy, src, size);
    
    printf("%s: ", test_name);
    if (result == expected && strcmp(dest, dest_copy) == 0)
        printf("PASS\n");
    else
        printf("FAIL (Expected: %u, Got: %u)\n", expected, result);
    
    printf("  Result: '%s'\n", dest);
    printf("  Expected: '%s'\n", dest_copy);
}

int main()
{
    char dest1[20] = "Hello";
    test_strlcat(dest1, " World", 20, "Test 1: Normal case");

    char dest2[10] = "Hello";
    test_strlcat(dest2, " World", 10, "Test 2: Limited size");

    char dest3[20] = "";
    test_strlcat(dest3, "Hello", 20, "Test 3: Empty destination");

    char dest4[20] = "Hello";
    test_strlcat(dest4, "", 20, "Test 4: Empty source");

    char dest5[20] = "Hello";
    test_strlcat(dest5, " World", 5, "Test 5: Size less than destination length");

    char dest6[20] = "Hello";
    test_strlcat(dest6, " World", 0, "Test 6: Size is 0");

    char dest7[30] = "The quick brown ";
    test_strlcat(dest7, "fox jumps over the lazy dog", 30, "Test 7: Long strings");

    return 0;
}
