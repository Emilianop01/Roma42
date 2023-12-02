#include "unistd.h"
void    stampa(int a, int b, int c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
}


void    ft_print_comb()
{
    int a = '0';
    int b = '1';
    int c = '2';

    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                stampa(a, b, c);
                if (a < '7')
                {
                    write(1, ", ", 2);
                }
                c++;
            }
            b++;
        }
        a++;
    }
    
}

int main()
{
    ft_print_comb();
    return(0);
}