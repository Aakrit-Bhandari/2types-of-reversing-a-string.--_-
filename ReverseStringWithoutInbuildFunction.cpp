#include <bits\stdc++.h>
using namespace std;
string Even(string c, int i)
{
    char temp;
    for (int j = 0; j <= i / 2; j++)
    {
        int k = (i - 1) - j;
        temp = c[j];
        c[j] = c[k];
        c[k] = temp;
    }
    return c;
}
string Odd(string c, int i)
{
    char temp;
    for (int j = 0; j < i / 2; j++)
    {
        int k = (i - 1) - j;
        temp = c[j];
        c[j] = c[k];
        c[k] = temp;
    }
    return c;
}
int main(void)
{
    string c;
    cin >> c;
    int i = 0;
    while (c[i] != '\0')
    {
        i++;
    }
    string ans;
    if (i % 2 == 0)
    {
        ans = Even(c, i);
    }
    else
    {
        ans = Odd(c, i);
    }
    cout << ans;
}