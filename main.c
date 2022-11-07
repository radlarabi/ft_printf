#include <stdio.h>
#include "ft_printf.h"

int main()
{
    // printf("p%llllyhyhy");
	int a = ft_printf("pllllyhyhy%h");
	printf("\n----%d----\n", a);
	int b = printf("pllllyhyhy%h");
	printf("\n----%d----\n", b);
	return 0;
}
