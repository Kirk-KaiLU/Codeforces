/*Problem 965A Paper Airplanes*/
#include <stdio.h>
int main()
{
    int k, n, s, p, each, total, packs;
    /* k is the number of people
     * n is the number of airplanes each should make
     * s is the number of airplanes that can be made using one sheet
     * p is the number of sheets in one pack
     * each is the number of sheet that each person is given
     * total is the totoal number of sheets they need
     * packs is the minimum number of packs they should buy
     */

    scanf("%d %d %d %d", &k, &n, &s, &p);

    each = (n + s - 1) / s;
    total = each * k;
    packs = (total + p - 1) / p;

    printf("%d", packs);

    return 0;
}
