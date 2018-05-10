/*Problem 961B Lecture Sleep*/ /*Time limit exceeded on test5*/
#include <stdio.h>
int main()
{
    long long n, k, sum = 0, awake, temp = 0, i, j;
    int a[100000] = {}, t[100000] = {};
    /* n is the duration of the lecture in minutes 
     * k is the number of the minutes you can keep her awake
     * sum is the number of theorems she could write down herself
     * awake is the number of theorems she could write down by being awake
     */
    scanf("%lld %lld", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
        if (t[i] == 1)
            sum += a[i];
    }
    for (i = 0; i < n; i++)
        if (t[i] == 1)
            a[i] = 0;

    for (i = 0; i < n - k + 1; i++)
    {
        awake = 0;
        for (j = i; j < i + k; j++)
            awake += a[j];
        if (awake > temp)
            temp = awake;
    }

    sum = sum + temp;
    printf("%lld", sum);

    return 0;
}
