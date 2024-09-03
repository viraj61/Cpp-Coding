#include<iostream>
using namespace std;

class Date{
	
	private:
		int day,month,year;
		
	public:
		void printDate(){
			
			cout<<"Date is"<<" "<<day<<"-"<<month<<"-"<<year<<endl;
			
		}
		
		void assignDate(){
			
			day=1;
			month=6;
			year=1950;
		}
		
		void assignDate(int d, int m, int y){
			
			day=d;
			month=m;
			year=y;
		}
};

int main(){
	
	Date dt;
	dt.assignDate();
	dt.printDate();
	
	Date dt1;
	dt1.assignDate(8,5,1982);
	dt1.printDate();
	return 0;
}
