#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    double ab = b * log(a);
    double cd = d * log(c);

    if(ab > cd){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
