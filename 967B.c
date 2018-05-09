/*Problem 967B Watering System*/
#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b);
int main()
{
    long long sum;
    long n, a, b, s1;
    /* n is the number of holes
     * a is the volume of water which will be poured in
     * b is the volume of water needed to get out from the first hole
     * s1 is the size of the first hole
     * sum is the sum of the size of the non-blocked hole
     */
    int num = 0 , i;
    int s[100005] = {};
    /* num is the number of the holes need to be blocked
     * s[] is the size of the hole except the first hole
     */

    scanf("%d %d %d", &n, &a, &b);
    scanf("%d", &s1);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &s[i]);
    }
    qsort(s, n - 1, sizeof(int), comp);

    sum = s1;
    for (i = 0; i < n - 1; i++)
    {
        sum += s[i];
    }

    while (a * s1 < b * sum)
    {
        sum -= s[num];
        num++;
    }
    
    printf("%d", num);

    return 0;
}

int comp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}
