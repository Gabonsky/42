#include <unistd.h>
#include <stdio.h>

void *ft_menset(void *string, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)string + i) = (unsigned char)c;
		i++;
	}
	return (string);
}

int main() {
    char str[50] = "Hola, soy un profesor de informatica.";
    printf("\nAntes de ft_menset(): %s\n", str);

  
    ft_menset(str, '*', 8);

    printf("Después de ft_menset():  %s", str);
    return 0;
}

