//10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
#include <iostream>
using namespace std;

int main() {
    int m = 3; 
    int n = 4; 
    int result = 1;

    for (int i = 1; i <= n; ++i) {
        result *= m; 
    }

    cout << m << " to the power of " << n << " is " << result << endl;

    return 0;
}

