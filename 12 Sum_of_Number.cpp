//12:Sum of series :
	//1+2+3+�.+n
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) 
	{
        sum += i;
    }

    cout << "Sum of the series 1 + 2 + ... + " << n << " = " << sum << endl;

    return 0;
}

	
		
	

