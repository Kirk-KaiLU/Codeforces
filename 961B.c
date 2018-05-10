/*Problem 961B Lecture Sleep*//*Overtime on test5*/
#include <stdio.h>
int main()
{
    long n, k, sum, awake, temp = 0;
    int i, j, a[100000] = {}, t[100000] = {};
    /* n is the duration of the lecture in minutes 
     * k is the number of the minutes you can keep her awake
     * sum is the number of theorems she could write down herself
     * awake is the number of theorems she could write down by being awake
     */
    scanf("%ld %ld", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &t[i]);
    for (i = 0; i < n; i++)
        sum += a[i] * t[i];
    for (i = 0; i < n; i++)
        if (t[i] == 1)
            t[i] = 0;
        else
            t[i] = 1;

    for (i = 0; i < n - k + 1; i++)
    {
        awake = 0;
        for (j = i; j < i + k; j++)
            awake += a[j] * t[j];
        if (awake > temp)
            temp = awake;
    }

    sum = sum + temp;
    printf("%ld", sum);

    return 0;
}
