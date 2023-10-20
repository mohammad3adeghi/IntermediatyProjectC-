#include <iostream>

using namespace std;
int main ()
{
    int num1,num2;

    cout << "Please Enter The Number1: ";
    cin >> num1;
    cout << "Please Enter The Number2: ";
    cin >> num2;

    if (num1 < num2) {
        cout << "num2 Is Largest Number" << endl;
    } else if (num1 > num2) {
        cout << "num1 Is Largest Number" << endl;
    } else {
        cout << "num1 and num2 Is Equals" << endl;
    }
}