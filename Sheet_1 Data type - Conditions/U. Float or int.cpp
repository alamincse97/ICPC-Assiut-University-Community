#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    scanf("%lf", &n);

    int integer = (int)n;
    double decimal = n - integer;

    if(n == integer)
        printf("int %d", (int)n);
    else
        printf("float %d %.3lf", integer, decimal);

    return 0;
}
