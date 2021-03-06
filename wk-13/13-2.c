/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-05-11
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>
#include <string.h>

#define maxn 100

int main()
{
    char integer[maxn];
    scanf("%s", integer);
    int length = strlen(integer);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d", integer[i] - '0');
    }
    printf("\n");

    return 0;
}
