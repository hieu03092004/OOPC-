#include<bits/stdc++.h>
using namespace std;
class number{
private:
	int a,b;
	char c;
public:
	void nhapThongTin(){
		cout<<"a=";
		cin>>a;
		cout<<"c=";
		cin>>c;
		cout<<"b=";
		cin>>b;
		
	}
	void xuatThongTin(){
		cout<<"a="<<a<<" "<<"b="<<b<<"c="<<c;
	}
	void caculate(){
		if(b==0 && c=='/'){
			cout<<"Gia tri b nhap vao khong hop le";
		}
		else{
			switch(c){
				case '-':
					cout<<a<<"-"<<b<<"="<<a-b;
					break;
				case '+':
					cout<<a<<"+"<<b<<"="<<a+b;
					break;
				case '*':
					cout<<a<<"*"<<b<<"="<<a*b;
					break;
				case '/':
					cout<<a<<"/"<<b<<"="<<fixed<<setprecision(2)<<float(a)/b;
					break;
				default:
					cout<<"Toan tu c ban nhap vao khong hop le";
					break;
			}
		}
	}
};
int main(){
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
	number x;
	x.nhapThongTin();
//	x.xuatThongTin();
	x.caculate();
}
