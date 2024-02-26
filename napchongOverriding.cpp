#include<bits/stdc++.h>
using namespace std;

using ll=long long;
class SV{
private:
	string name,ngaysinh;
	double d1,d2,d3;
public:
	friend istream& operator >> (istream &in,SV &x){
		getline(in,x.name);
		in>>x.ngaysinh>>x.d1>>x.d2>>x.d3;
		return in;
	}	
	friend ostream& operator << (ostream &out,SV x){
		out<<x.name<<" "<<x.ngaysinh<<" "<<fixed<<setprecision(1)<<(x.d1+x.d2+x.d3)<<endl;
		return out;
	}
};
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	SV x;
	cin>>x;
	cout<<x;
}