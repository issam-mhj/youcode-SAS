#include <stdio.h>

int fibo(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    else
    {
        int i, x, x1, x2;
        x = 0;
        x1 = 1;
        for (i = 0; i < num; i++)
        {
            x2 = x1;
            x1 = x + x1;
            x = x2;
        }
    return x;
    }
}

int main()
{
    int num;
    printf("entrez a nombre: ");
    scanf("%d", &num);
    printf("le terme de Fibonacci demande %d", fibo(num));

    return 0;
}