#include <iostream>
#include <string>

using namespace std;
int main ()
{
    string words1;

    do {
        cout << "Please Enter The Letter Coding Warriors: ";
        cin >> words1;
    } while (words1 == "CodingWarriors");

    int num1;
    int num2;

    cout << "Please Enter The Number 1: ";
    cin >> num1;

    cout << "Please Enter The Number 2: ";
    cin >> num2;

    // Sum The Numbers;
    float sumCalculating = num1 + num2;

    // Subtract The Numbers;
    float SubtractCalculation = num1 - num2;

    // Print The Numbers;
    cout << "Sum The Numbers: " << sumCalculating << endl;
    cout << "Subtract The Numbers: " << SubtractCalculation << endl;
}