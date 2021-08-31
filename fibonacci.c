#include<stdio.h>

void Fibo(int a)
{
    static long int first = 0, second = 1, sum;
    if(a > 1)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%ld ", sum);
        Fibo(a-1);
    }
    else
    {

        printf("\n\n\n");
    }
}
int main()
{
    int k, n;
    long int i = 0, j = 1;
    printf("Enter the length of the Fibonacci series: ");
    scanf("%d", &n);
    printf("\n First %d terms of Fibonacci series are:\n",n);
    printf("%d ", 1);
    Fibo(n);
    return 0;
}


