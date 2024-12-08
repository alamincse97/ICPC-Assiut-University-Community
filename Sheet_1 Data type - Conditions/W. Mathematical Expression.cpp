#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    int res;
    switch(s)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    }

    if(res == c)
        printf("Yes");
    else
        printf("%d", res);

    return 0;
}
