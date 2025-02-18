#include <stdio.h>
#include "ft_printf.h"

int main()
{

char *test_string = "I wonder if this works";



ft_printf("test int: this is integer %d\n", 42);
printf ("orig: this is integer %d\n", 42);


// ft_printf("test puthexupper: this is zero %X\n", 0);
// printf("orig puthexupper: this is zero %X\n", 0);

// ft_printf("test1 puthexupper %X\n", 0xABCDEF);
// printf("orig puthexupper %X\n", 0xABCDEF);

// ft_printf("test puthexupper: max unsigned int %X\n", 0xFFFFFFFF);
// printf("test puthexupper: max unsigned int %X\n", 0xFFFFFFFF);


// ft_printf("test unsigned: this is unsigned int max %li\n", 4294967295); // %u
// printf("orig unsigned: this is unsigned int max %li\n", 4294967295);

// ft_printf("");
// printf("test stringa vuota\n");


// ft_printf("test1 percent: %%\n");
// printf("orig percent: %%\n");

// ft_printf("test space before: %10d\n", 42); 
// printf("orig:%10d\n", 42);  

// ft_printf("test space after: %-10d\n", 42); 
// printf("orig:%-10d\n", 42);

// ft_printf("test zero before: %010d\n", 42);
// printf("orig:%010d\n", 42); 

// int fab2 = ft_printf ("123\n");
// int fab1 = printf ("123\n");

// printf ("%d\n", fab1);
// printf ("%d\n", fab2);

// fab1 = printf("Exp Char:	%c\n", 'Y');
// fab2 = ft_printf("Res Char:	%c\n\n", 'Y');

// fab1 = printf("Exp String:	%s\n", test_string);
// fab2 = ft_printf("Res String:	%s\n\n", test_string);

// ft_printf ("Test:	Char %c - String %s - Pointer %p - Decimal %d - Integer %ld - Unsigned Decimal %u - Hexadecimal Lowercase %x - Hexadecimal Uppercase %X - Percent Sign %%\n", '*', test_string, test_string, -789, -2147483648, 0, 963258, 36987123);
	
// printf ("orig:	Char %c - String %s - Pointer %p - Decimal %d - Integer %ld - Unsigned Decimal %u - Hexadecimal Lowercase %x - Hexadecimal Uppercase %X - Percent Sign %%\n", '*', test_string, test_string, -789, -2147483648, 0, 963258, 36987123);

return (0);
}
