#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t, m, n, q;

    scanf("%d", &t);
    int z, v, r, c, flag = 0;

    while (t--) {
        char s[1000][1000] = {0};
        scanf("%d %d %d", &m, &n, &q);
        v = m;
        z = 0;
        while (v--)
            scanf("%s", &s[z++]);
            printf("%d %d %d\n", m, n, q);
        while (q--) {
            scanf("%d %d", &r, &c);
            int  count;
            count = 0;
            int rup, rdown, cleft, cright, r2, c2, i;

            for (i = 1, rup = r, rdown = r, cleft = c, cright = c; rup - i >= 0 && rdown + i < m && cleft - i >= 0 && cright + i < n; i++, count++) {
                for (r2 = r - i ; r2 <= r + i; r2++) {
                    for (c2 = c - i; c2 <= c + i; c2++) {
                        if (s[r2][c2] != s[r][c]) {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 1)
                        break;
                }
                if (flag == 1)
                    break;
            }
            printf("%d\n", 2 * count + 1);
            flag = 0;
        }
    }
}


