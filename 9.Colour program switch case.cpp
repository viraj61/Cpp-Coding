/*9.Colour Program Using switch Case*/
include<iostream>
using namespace std;

enum Colour {
    Red = 1,
    Green,
    Blue
};

int main() {
    int colour;
    cout << "Enter the colour number (1 for Red, 2 for Green, 3 for Blue): ";
    cin >> colour;

    switch(colour) {
        case Red:
            cout << "It is the red colour." << endl;
            break;
        case Green:
            cout << "It is the green colour." << endl;
            break;
        case Blue:
            cout << "It is the blue colour." << endl;
            break;
        default:
            cout << "Invalid colour selected." << endl;
            break;
    }

    return 0;
}

