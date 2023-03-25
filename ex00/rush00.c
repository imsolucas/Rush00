#include <unistd.h>

void ft_putchar(char c);

void rush(void)	{
	int y = 5;
	int x = 5;
	char a = 111;
	char b = 45;
	char c = 124;
	int i = 1;
	int j = 1;

	while(i <= y)
	{	
		j = 1;
		while(j <= x) 
		{					
			if(i == 1 || j == 1 || i == y || j == x)	
			{
			if((i == 1 || i == y) && (j == 1 || j == x))
			{
				ft_putchar(a);	
			}
			else if((i > 1 || i < y) && (j == 1 || j == x))	
			{
				ft_putchar(c);
			}
			else
		   	{
			   ft_putchar(b);
			}
			}
		else 
		{
			ft_putchar(' ');
		}	
		j++;
		}
		
		ft_putchar('\n');
		i++;
	}
}

