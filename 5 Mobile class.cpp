#include<iostream>
using namespace std;

class Mobile{
	
	private:
		string mb,p,so;
		
	public:
		void printMobile()
		{
			
			cout<<"Mobile is:"<<"\n"<<mb<<" "<<"\n"<<p<<" "<<"\n"<<so<<" "<<endl;
		}
		
		void assignMobile(){
			
			mb = "abcd";
			p = "Snapdragon";
			so ="12345";
		}
		
		void assignMobile(string m, string pr,string s){
			
			mb = m;
			p = pr;
			so = s;
		}
};

int main(){
	
	Mobile m1,m2;
	m1.assignMobile();
	m1.printMobile();
	
	m2.assignMobile("xyz","Matic","5678");
	m2.printMobile();
}
