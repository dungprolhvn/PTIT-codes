#include <iostream>
#include <iomanip>
using namespace std;

class SinhVien
{
	string name;
	string id;
	string lop;
	string dob;
	double gpa;
	
	public:
		SinhVien()
		{
			
		}
		string chuanhoa(string s)
		{
			string rs = s;
			if (s[2] != '/')
			{
				rs = "0" + rs;
			}
			if (s[5] != '/')
			{
				rs = rs.substr(0, 3) + "0" + rs.substr(3);
			}
			return rs;
		}
		void nhap()
		{
			getline(cin, name);
			cin >> lop;
			cin >> dob;
			dob = chuanhoa(dob);
			cin >> gpa;	
			id = "B20DCCN001";
		}
		void xuat()
		{
			cout << id << " " << name << " " << lop << " " << dob << " " << fixed << setprecision(2) << gpa;
		}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
