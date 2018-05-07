/*Problem 967A Mind the Gap*/
#include <stdio.h>
int main()
{
    int n, s, i, final = 1, result = 0;
    /* n is the number of landing planes
     * s is the minimum time allowed time
     */
    int h[110] = {};
    int m[110] = {};
    /* h and m are the time, in hours and minutes, when a plane will land */

    scanf("%d %d", &n, &s);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &h[i], &m[i]);
    }

    if (h[0] * 60 + m[0] > s)
    {
        result = 0;
        final = 0;
    }
    else
        for (i = 0; i < n; i++)
        {
            if (h[i + 1] * 60 + m[i + 1] - h[i] * 60 - m[i] > s * 2 + 1 && final == 1)
            {
                result = h[i] * 60 + m[i] + s + 1;
                final = 0;
                break;
            }
        }
    if (final == 1)
        result = h[n - 1] * 60 + m[n - 1] + s + 1;

    printf("%d %d", result / 60, result % 60);

    return 0;
}
