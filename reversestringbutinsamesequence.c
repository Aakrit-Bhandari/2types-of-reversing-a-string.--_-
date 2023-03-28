#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char a[50];
    // fgets(a, 50, stdin);
    scanf("%[^\n]%*c", &a);
    char *g = strtok(a, " ");
    while (g != '\0')
    {
        strrev(g);
        printf("%s ", g);
        g = strtok(NULL, " ");
    }
}
