#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long long num;

    num = n;
    if (num < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(num * -1, fd);
    }
    else if (num > 9)
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putnbr_fd(num % 10, fd);
    }
    else
        ft_putchar_fd(num += '0', fd);
}

int main() {
    ft_putnbr_fd(-2147483647, 1);
    return 0;
}