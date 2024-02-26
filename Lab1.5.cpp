#include<bits/stdc++.h>
using namespace std;
void dienTichHinhTron(){
	double r;
	cout<<"Nhap ban kinh hinh tron:";
	cin>>r;
	double dienTich =3.14*pow(r,2);
	cout<<"Dien Tich hinh tron la:"<<fixed<<setprecision(2)<<dienTich;
}
void dienTichHinhChuNhat(){
	int chieuDai,chieuRong;
	cout<<"Nhap chieu dai hinh chu nhat:";
	cin>>chieuDai;
	cout<<"Nhap chieu rong hinh chu nhat:";
	cin>>chieuRong;
	cout<<"Dien Tich Hinh Chu Nhat la:"<<chieuDai*chieuRong;
}
bool nhap(double &a,double &b,double &c){
	cout<<"Nhap do dai 3 canh cua tam giac:";
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c >a)
		return true;
	return false;
}
void dienTichHinhTamGiac(){
	double a,b,c;
	if(nhap(a,b,c)){
		double s=(a+b+c)/2;
		double dienTich=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"Dien tich tam giac la:"<<fixed<<setprecision(2)<<dienTich;
	}
	else
		cout<<"Ba canh vua nhap khong phai la 3 canh cua tam giac";
}
int main(){
	while(1){
		cout<<"Chuong trinh co cac lua chon de tinh dien tich"<<endl;
		cout<<"---------------------------------------------------";
		cout<<endl;
		cout<<"1:Tinh dien tich hinh tron"<<endl;
		cout<<"2:Tinh dien tich hinh chu nhat"<<endl;
		cout<<"3:Tinh dien tich hinh tam giac"<<endl;
		cout<<"Nhap lua chon cua ban (1|2|3):";
		int lc;
		cin>>lc;
		if(lc==1){
			dienTichHinhTron();
			break;
		}	
		else if(lc==2){
			dienTichHinhChuNhat();
			break;
		}
		else if(lc==3){
			dienTichHinhTamGiac();
			break;
		}
		else{
			cout<<"Lua chon cua ban khong hop le!";
			break;
		}
	}
}
