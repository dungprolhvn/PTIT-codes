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

PhanSo tong(PhanSo A, PhanSo B)
{
    PhanSo kq;
    kq.a = A.a * B.b + B.a * A.b;
    kq.b = A.b * B.b;
    rutgon(kq);
    return kq;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}