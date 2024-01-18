#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

class SinhVien {
    string maSv;
    string tenSv;
    string lopSv;
    string email;
    public:
        void nhapSinhVien() 
        {
            cin >> maSv; cin.ignore();
            getline(cin, tenSv);
            cin >> lopSv;
            cin >> email;
        }
        void hienThongTin()
        {
            if (lopSv[0] == 'E' && (maSv.substr(3, 4) == "DCCN" || maSv.substr(3, 4) == "DCAT"))
            {
                return;
            }
            cout << maSv << " " << tenSv << " " << lopSv << " " << email << endl;
        }
        string layMaSv()
        {
            return this->maSv;
        }
        string layLopSv()
        {
            return this->lopSv;
        }
};


void lietke(SinhVien *sv, const int n, const string q)
{
    string pattern = "";
    if (q == "Ke toan")
    {
        pattern = "DCKT";
        printf("DANH SACH SINH VIEN NGANH KE TOAN:\n");
    }
    else if (q == "Cong nghe thong tin")
    {
        pattern = "DCCN";
        printf("DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN:\n");
    }
    else if (q == "An toan thong tin")
    {
        pattern = "DCAT";
        printf("DANH SACH SINH VIEN NGANH AN TOAN THONG TIN:\n");
    }
    else if (q == "Vien thong")
    {
        pattern = "DCVT";
        printf("DANH SACH SINH VIEN NGANH VIEN THONG:\n");
    }
    else
    {
        pattern = "DCDT";
        printf("DANH SACH SINH VIEN NGANH DIEN TU:\n");
    }
    for (int i = 0; i < n; i++)
    {
        if (sv[i].layMaSv().substr(3, 4) == pattern)
        {
            sv[i].hienThongTin();
        }
    }
}

int main()
{
    int t, n; cin >> t;
    string truyVan;
    cin.ignore();
    SinhVien *sv = new SinhVien[t];
    for (int i = 0; i < t; i++)
    {
        sv[i].nhapSinhVien();
    }
    cin >> n;
    cin.ignore();
    while (n--)
    {
        getline(cin, truyVan);
        lietke(sv, t, truyVan);
    }
    return 0;
}