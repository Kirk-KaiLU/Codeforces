/*Problem 957A Tritonic Iridescence*/
#include <stdio.h>
int main()
{
    int i, n;
    char string[100];

    scanf("%d", &n);
    scanf("%s", string);

    for (i = 0; i < n; i++)
        if (string[i] == string[i + 1] && string[i] != '?')
        {
            printf("No");
            return 0;
        }

    for (i = 1; i < n - 1; i++)
    {
        if (string[i] == '?' && (string[i - 1] == string[i + 1] || string[i + 1] == '?'))
        {
            printf("Yes");
            return 0;
        }
    }
    if (string[0] == '?' || string[n - 1] == '?')
    {
        printf("Yes");
        return 0;
    }

    printf("No");
    return 0;
}
