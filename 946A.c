/*Problem 946A
 *You are given a sequence a consisting of n integers. 
 *You may partition this sequence into two sequences b and c in such a way
 *that every element belongs exactly to one of these sequences.
 *Let B be the sum of elements belonging to b, 
 *and C be the sum of elements belonging to c.
 *(if some of these sequences is empty, then its sum is 0) 
 *What is the maximum possible value of B - C?
 */

#include <stdio.h>
int main()
{
    int num, i;
    int j = 0, k = 0, sum = 0;
    int origin[100], b[100], c[100];

    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &origin[i]);
    }

    for (i = 0; i < num; i++)
    {
        if (origin[i] > 0)
        {
            b[j] = origin[i];
            j++;
        }
        else
        {
            c[k] = origin[i];
            k++;
        }
    }

    for (i = 0; i < j; i++)
    {
        sum += b[i];
    }
    for (i = 0; i < k; i++)
    {
        sum -= c[i];
    }

    printf("%d", sum);
    
    return 0;
}