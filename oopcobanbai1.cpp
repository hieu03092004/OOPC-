#include<bits/stdc++.h>
using namespace std;
class SinhVien{
private:
	string ten,ngaysinh,lop;
	double gpa;
	//bien static thuoc ve lop
	static string tenTruong;
public:
	//constructor 
	SinhVien (){
		cout<<"Constructor mac dinh cua lop sinh vien duoc goi"<<endl;;
	}
	//Contructor day du tham so
	SinhVien(string ten,string ngaysinh,string lop,double gpa){
		cout<<"Constructor day du tham so duoc goi la"<<endl;
		this->ten=ten;
		this->ngaysinh= ngaysinh;
		this->lop=lop;
		this->gpa=gpa;
	}
	void nhapThongTin();
	void setTenTruong(string tenTruongMoi);
	string getTenTruong();
	void xuatThongTin();
	string getTen();
	void setTen(string newName);
	//Destructor khong co kieu tra ve
	~SinhVien(){
		cout<<"Doi tuong duoc huy"<<endl;
	}
};
string SinhVien::tenTruong="UIT";
//impelementation
void SinhVien::nhapThongTin (){
	getline(cin,this->ten);
	cin>>this->ngaysinh>>this->lop>>this->gpa;
}
void SinhVien::xuatThongTin(){
	cout<<ten<<endl<<ngaysinh<<endl<<lop<<endl<<gpa;
}
//getter setter
string SinhVien::getTen(){
	return ten;
}
void SinhVien::setTen(string newName){
	this->ten= newName;
}
string SinhVien::getTenTruong(){
	return tenTruong;
}

void SinhVien::setTenTruong(string tenTruongMoi){
	this->tenTruong =  tenTruongMoi;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	SinhVien x;
	x.setTenTruong("HCMUS");
	cout<<x.getTenTruong();
	SinhVien y;
	y.setTenTruong("BKHCM");
	cout<<x.getTenTruong()<<endl<<y.getTenTruong();
	// SinhVien y("Vu Van Teo","19/5/2001","DTVT2",3.2);
	// y.xuatThongTin();
	//constructor
	// SinhVien a[1000];
	// x.nhapThongTin();
	// x.xuatThongTin();
	// x.setTen("Le Van B");
	// x.xuatThongTin();
}