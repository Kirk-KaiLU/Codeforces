/*Problem 977A Wrong Subtraction*/
#include <stdio.h>
int main()
{
    long long n;
    int k, i;

    scanf("%lld %d", &n, &k);
    for (i = 0; i < k; i++)
        if (n % 10 == 0)
            n = n / 10;
        else
            n = n - 1;

    printf("%lld", n);

    return 0;
}