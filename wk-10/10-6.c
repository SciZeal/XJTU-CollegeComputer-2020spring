/*
 * author: SciZeal
 * email:  SciZeal@outlook.com
 * time:   2020-04-20
 *
 * MIT LICENCE
 */

#define _AUTHOR_IS_SCIZEAL

#include <stdio.h>
#include <string.h>

#define maxn 50

int main()
{
    char number_string[maxn];
    scanf("%s", number_string);
    for (int i = strlen(number_string) - 1; i >= 0; i--)
    {
        printf("%c", number_string[i]);
    }

    return 0;
}
