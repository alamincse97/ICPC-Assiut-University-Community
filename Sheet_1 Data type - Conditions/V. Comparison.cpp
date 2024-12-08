#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    char s;

    scanf("%d %c %d", &a, &s, &b);
    if((s == '<' && a < b) || (s == '>' && a > b) || (s == '=' && a == b))
        printf("Right\n");
    else
        printf("Wrong");
    return 0;
}
