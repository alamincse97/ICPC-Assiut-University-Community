#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    long long res = a * b * c * d;
    int x = res % 100;

    if (x < 10)
        printf("0%d", x);
    else
        printf("%d", x);

    return 0;
}
