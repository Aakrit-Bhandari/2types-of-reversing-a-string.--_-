#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char a[20];
    scanf("%[^\n]%*c", a);
    int l = strlen(a);
    for (int i = l - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
}