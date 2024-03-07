#include <stdio.h>
int main()
{
    int num,res;
    scanf("%d",&num);
    res = factorial(num);
    printf("Factorial of %d is %d", num, res);
    return 0;
}
int factorial(int n)
{
    int result ,i;
    result= 1;
    for (i = 2; i <= n; i++)
    {
        result= result*i;
    }
    return result;
}
