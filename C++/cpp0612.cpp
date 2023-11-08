#include <bits/stdc++.h>
typedef unsigned long long ll;

using namespace std;

int counter = 1;

string cap(string s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

class SinhVien {
    public:
        string name;
        string div;
        string dob;
        string id;
        float gpa;

        string normalise(string s)
        {
            string rs = s;
            if (rs[2] != '/')
            {
                rs = "0" + rs;
            }
            if (rs[5] != '/')
            {
                rs = rs.substr(0, 3) + "0" + rs.substr(3);
            }
            return rs;
        }

        string normaliseName(string s)
        {
            stringstream ss(s);
            string rs, buffer;
            while (ss >> buffer)
            {
                rs += (cap(buffer) + " ");
            }
            return rs;
        }

        friend istream &operator>>(istream &is, SinhVien &sv)
        {
            sv.id = "B20DCCN";
            if (counter < 10)
            {
                sv.id = sv.id + "00" + to_string(counter);
            }
            else
            {
                sv.id = sv.id + "0" + to_string(counter);
            }
            counter++;
            cin.ignore();
            getline(is, sv.name);
            is >> sv.div >> sv.dob >> sv.gpa;
            sv.name = sv.normaliseName(sv.name);    
            sv.dob = sv.normalise(sv.dob);
            return is;
        }

        friend ostream& operator<<(ostream &os, SinhVien sv)
        {
            return  os << sv.id << " " << sv.name << sv.div << " " << sv.dob << " " << fixed << setprecision(2) << sv.gpa << endl;
        }
};



int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}