#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

struct PhanSo 
{
    ll a, b;
};

void nhap(PhanSo &x)
{
    cin >> x.a >> x.b;
}

void in(PhanSo x)
{
    cout << x.a << "/" << x.b;
}

void rutgon(PhanSo &x)
{
    ll d = __gcd(x.a, x.b);
    x.a /= d; x.b /= d;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}