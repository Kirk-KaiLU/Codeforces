/*Problem 954A Diagonal Walk*/
#include <stdio.h>
int main()
{
    int n, moves, i;
    char str[100];
    scanf("%d", &n);
    scanf("%s", str);
    moves = n;

    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
            break;
        if (str[i] != str[i + 1])
        {
            moves--;
            i++;
        }
    }
    printf("%d", moves);
    return 0;
}
