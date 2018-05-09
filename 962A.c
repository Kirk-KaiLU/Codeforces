/*Problem 962A Equator*/
#include <stdio.h>
int main()
{
    int a[200000], i, day = 0;
    long n;
    long long total = 0, sum = 0;
    /* a[] is the number of problems which he solved on the i-th day
     * n is the number of days to train
     * total is the total number of the problems he need to solve
     * sum is the number of the problems he has solved
     */

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        total += a[i];

    while (2 * sum < total)
    {
        sum += a[day];
        day++;
    }

    printf("%d", day);

    return 0;
}
