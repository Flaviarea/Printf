#include <stdio.h>
#include "ft_printf.h"

int main()
{
char *test_string = "I wonder if this works";

ft_printf("Test int: this is integer %d\n", 42);
printf ("Orig: this is integer %d\n", 42);

ft_printf("Test stringa vuota: \"%s\"\n", "");
printf("Orig stringa vuota: \"%s\"\n", "");

ft_printf("Test unsigned: this is unsigned int max %u\n", (unsigned int)4294967295); 
printf("Orig unsigned: this is unsigned int max %u\n", (unsigned int)4294967295);

ft_printf("test puthexupper: this is zero %X\n", 0);
printf("orig puthexupper: this is zero %X\n", 0);

ft_printf("test1 puthexupper %X\n", 0xABCDEF);
printf("orig puthexupper %X\n", 0xABCDEF);

ft_printf("test puthexupper: max unsigned int %X\n", 0xFFFFFFFF);
printf("test puthexupper: max unsigned int %X\n", 0xFFFFFFFF);


ft_printf("Test percent: %%\n");
printf("Orig percent: %%\n");

ft_printf("Test a after percent: %ad\n");
printf("Orig a after percent: %ad\n");

ft_printf("Test a after percent (ft_printf): %ad\n");
printf("Test a after percent (expected output): %%ad\n"); 

int fab2 = ft_printf ("123\n");
int fab1 = printf ("123\n");

printf ("%d\n", fab1);
printf ("%d\n", fab2);

fab1 = printf("Exp Char:	%c\n", 'Y');
fab2 = ft_printf("Res Char:	%c\n\n", 'Y');

fab1 = printf("Exp String:	%s\n", test_string);
fab2 = ft_printf("Res String:	%s\n\n", test_string);

ft_printf("Test int minimo: this is integer min %d\n", -2147483648);
printf("Orig int minimo: this is integer min %d\n", -2147483648);

ft_printf("Test puntatore nullo: %p\n", (void *)0);
printf("Orig puntatore nullo: %p\n", (void *)0);

ft_printf("Test puntatore valido: %p\n", test_string);
printf("Orig puntatore valido: %p\n", test_string);

ft_printf("Test hex lowercase numero piccolo: %x\n", 15);
printf("Orig hex lowercase numero piccolo: %x\n", 15);

ft_printf("Test hex lowercase numero grande: %x\n", 305419896);
printf("Orig hex lowercase numero grande: %x\n", 305419896);

ft_printf("Test hex uppercase numero piccolo: %X\n", 15);
printf("Orig hex uppercase numero piccolo: %X\n", 15);

ft_printf("Test hex uppercase numero grande: %X\n", 305419896);
printf("Orig hex uppercase numero grande: %X\n", 305419896);


//ft_printf ("Test:	Char %c - String %s - Pointer %p - Decimal %d - Unsigned Decimal %u - Hexadecimal Lowercase %x - Hexadecimal Uppercase %X - Percent Sign %%\n", '*', test_string, test_string, -789, 0, 963258, 36987123);
//printf ("orig:	Char %c - String %s - Pointer %p - Decimal %d - Unsigned Decimal %u - Hexadecimal Lowercase %x - Hexadecimal Uppercase %X - Percent Sign %%\n", '*', test_string, test_string, -789, 0, 963258, 36987123);

return (0);
}
