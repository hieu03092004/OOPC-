#include<bits/stdc++.h>
using namespace std;
int a[25];
void nhap(int &n){
	do{
		cout<<"Nhap 3=< n <=20:";
		cin>>n;
	}
	while(!(n>=3 && n<= 20));
	for(int i=0;i<n;i++){
		cout<<"Nhap a"<<"["<<i<<"]"<<"=";
		cin>>a[i];
	}
}
void in(int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
void HoanVi(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
void sort(int n){
	for(int i=0;i<n-1;i++){
		int minpos=i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[minpos])
				minpos=j;
		if(minpos!=i)
			HoanVi(a[i],a[minpos]);
	}
}
bool isPrime(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}	
	return true;
}
void inSNT(int n){
	vector<int>v;
	for(int i=0;i<n;i++){
		if(isPrime(a[i]))
			v.push_back(a[i]);
	}
	if(v.size()==0)
		cout<<"Trong mang khong co so nguyen to";
	else{
		cout<<"So luong so nguyen to trong mang la:"<<v.size()<<endl;
		cout<<"Cac so nguyen to trong mang la:";
		for(int x:v)
			cout<<x<<" ";	
	}
	
}
int main(){
	int n;
	nhap(n);
//	sort(n);
//	in(n);
	inSNT(n);
}
