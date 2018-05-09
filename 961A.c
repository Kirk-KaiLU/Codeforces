/*Problem 961A Tetris*/
#include <stdio.h>
int main()
{
    int n, m, temp, i, points = 1001;
    int a[1000] = {};
    /* n is the length of the platform
     * m is the number of the squares
     */

    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &temp);
        a[temp - 1] = a[temp - 1] + 1;
    }

    for (i = 0; i < n; i++)
        if (points > a[i])
            points = a[i];

    printf("%d", points);

    return 0;
}
