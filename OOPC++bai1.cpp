#include<bits/stdc++.h>
using namespace std;

using ll=long long;

// 
class SinhVien{
private:
	string ten ,ngaysinh ,lop;
	double gpa;
	// bien static thuoc ve lop danh duoc su dung cho tat ca doi tuong trong lop
	static string tenTruong;
public:
	//constructor
	SinhVien(){
		cout<<"Constructor mac dinh duoc goi"<<endl;
	}
	SinhVien(string ten,string ngaysinh,string lop, double gpa){
			cout<<"Constructor day du tham so duoc goi la";
			this->ten =ten;
			this->ngaysinh=ngaysinh;
			this->lop =lop;
			this->gpa=gpa;
	}
	//end constructor

	void nhapThongTin();
	void xuatThongTin();
	string getTen();
	void setTen(string newName);
	//destructor
	// ~SinhVien(){
	// 	cout<<"doi tuong duoc huy";
	// }
	string getTenTruong();
};
string SinhVien::tenTruong="UIT";
void SinhVien::nhapThongTin(){
	getline(cin,ten);
	cin>>ngaysinh>>lop>>gpa;
}
void SinhVien::xuatThongTin(){
	cout<<ten<<endl<<ngaysinh<<endl<<lop<<endl<<gpa<<endl;
}
//getter setter
string SinhVien::getTen(){
	return ten;
}
void SinhVien::setTen(string newName){
	ten=newName;
}
string SinhVien::getTenTruong(){
	return tenTruong;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	// SinhVien x;
	// SinhVien y ("nguyen van b","03/09/2004","CNTT1",2.8);
	// y.xuatThongTin();
	// x.nhapThongTin();
	// x.xuatThongTin();
	// x.setTen("nguyen van b");
	// x.xuatThongTin();
	SinhVien x;
	cout<<x.getTenTruong()<<endl;
	SinhVien y;
	cout<<y.getTenTruong();
}