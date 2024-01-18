#include<bits/stdc++.h>
using namespace std;

class PhanSo {
    unsigned long long int ts, ms;
    public:
        PhanSo(unsigned long long int ts, unsigned long long int ms)
        {
            this->ts = ts;
            this->ms = ms;
        }
        friend istream& operator>> (istream &in, PhanSo &ps)
        {
            return in >> ps.ts >> ps.ms;
        }
        friend ostream& operator<< (ostream &out, PhanSo ps)
        {
            return out << ps.ts << "/" << ps.ms;
        }
        friend PhanSo operator+ (PhanSo ps1, PhanSo ps2)
        {
            PhanSo result(1, 1);
            unsigned long long int lcm = (ps1.ms / __gcd(ps1.ms, ps2.ms)) * ps2.ms;
            result.ms = lcm;
            result.ts = (ps1.ts * (lcm/ps1.ms)) + (ps2.ts * (lcm/ps2.ms));
            unsigned long long int g = __gcd(result.ts, result.ms);
            result.ms /= g, result.ts /= g;
            return result;
        }
};

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}