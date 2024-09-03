#include<iostream>
using namespace std;

class Car{
	
	private:
		int chasis;
		string model,type;
		
	public:
		void printCar()
		{
			
			cout<<"Car is:"<<"\n"<<chasis<<" "<<"\n"<<model<<" "<<"\n"<<type<<" "<<endl;
		}
		
		void assignCar(){
			
			chasis = 1244;
			model = "Ferrari";
			type ="Sports Car";
		}
		
		void assignCar(int c, string m,string t){
			
			chasis = c;
			model = m;
			type = t;
		}
};

int main(){
	
	Car c1,c2;
	c1.assignCar();
	c1.printCar();
	
	c2.assignCar(333,"Roll Royals","Royal Car");
	c2.printCar();
}
