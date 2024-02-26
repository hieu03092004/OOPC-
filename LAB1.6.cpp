#include<bits/stdc++.h>
using namespace std;

class User {
private:
    string passWord;

public:
    void checkLogin() {
    	int count=0;
    	do{
    		cout << "Vui long nhap mat khau:";
        	cin >> passWord;
        	if(checkPassWord()){
        		cout<<"Dang nhap thanh cong!";
				return;	
			}
        	else{
        		cout<<"Mat khau ban nhap chua chinh xac"<<endl;
        		count++;
			}
		} while(count<4);
        cout<<"Dang nhap that bai"; 
    }

    void xuatThongTin() {
        cout << passWord <<endl;
        
    }
    bool checkPassWord(){
    	string s="";
    	string t="123";
    	for(int i=0;i<passWord.size();i++)
    		s+=passWord[i];	
    	if(s==t){
    		cout<<"Dang nhap thanh cong!";
    		return true;
		}
    	return false;
	}
};

int main() {
    User a;
    a.checkLogin();
//    a.xuatThongTin();
//    a.checkPassWord();
    return 0;
}
