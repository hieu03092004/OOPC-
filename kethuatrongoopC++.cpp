#include<bits/stdc++.h>
using namespace std;
//inheritance ke thua
//Superclass:Base class lop cha lop con
//subclass:derived class
class Person{
	private:
		string ten , diachi;
	public:
		Person(){
			cout<<"Ham tao cua lop Person duoc goi"<<endl;
		}
		string getTen(){
			return ten;
		}
		string getDiaChi(){
			return diachi;
		}
		void setTen(string ten){
			this->ten= ten;
		}
		void setDiaChi(string diachi){
			this->diachi=diachi;
		}
		void inThongTin(){
			cout<<ten<<" "<<diachi<<" ";
		}

};
class Student:public Person{
private:
	double gpa;
public:
	Student(){
		cout<<"Ham tao cua lop studen duoc goi"<<endl;
	}
	void inThongTin(){
		Person::inThongTin();
		cout<<fixed<<setprecision(2)<<gpa<<endl;
	}
	double getGpa(){
		return gpa;
	}
	void setGpa(double gpa){
		this->gpa = gpa;
	}	
};
// class Employee:public Person{
// private:
// 	double salary;
// public:
// 	double getSalary(){
// 		return salary;
// 	}
// 	void setSalary(double salary){
// 		this->salary=salary;
// 	}
// };
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Student s;
	// s.setTen("nguyen van a");
	// s.setDiaChi("hai duong");
	// s.setGpa(3.5);
	// s.inThongTin();

}