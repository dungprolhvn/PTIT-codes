#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int demKH = 1, demMH = 1, demHD = 1;

class KhachHang {
    string maKH, tenKH, gioiTinh, ngaySinh, diaChi;
    friend class HoaDon;

    friend istream& operator>> (istream &in, KhachHang &kh)
    {
        string tmp = to_string(demKH);
        if (demKH < 10)
        {
            tmp = "00" + tmp;
        }
        else if (demKH < 100)
        {
            tmp = "0" + tmp;
        }
        kh.maKH = "KH" + tmp;
        demKH++;
        getline(cin, kh.tenKH);
        cin >> kh.gioiTinh >> kh.ngaySinh;
        cin.ignore();
        getline(cin, kh.diaChi);
        return in;
    }
};

class MatHang {
    string maMH, tenMH, donViTinh;
    int giaMua, giaBan;
    friend class HoaDon;

    friend istream& operator>> (istream &in, MatHang &mh)
    {
        string tmp = to_string(demMH);
        if (demMH < 10)
        {
            tmp = "00" + tmp;
        }
        else if (demMH < 100)
        {
            tmp = "0" + tmp;
        }
        mh.maMH = "KH" + tmp;
        demMH++;
        cin.ignore();
        getline(cin, mh.tenMH); cin >> mh.donViTinh >> mh.giaMua >> mh.giaBan;
        return in;
    }
};

class HoaDon {
    string maHD, maKH, maMH;
    int soLuong;
    
    void 

    friend istream& operator>> (istream &in, HoaDon &hd)
    {
        return in >> hd.maKH >> hd.maMH >> hd.soLuong;
    }

    friend ostream& operator<< (ostream &out, HoaDon &hd)
    {
        
    }
};

int main()
{
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++)
        cin >> dshd[i];

    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}