#include <iostream>
using namespace std;

int main() {
    int num, origNum, remainder, result = 0;
    cout << "Enter a integer: ";
    cin >> num;
    origNum = num;

    while (origNum != 0) {
        remainder = origNum % 10;
        
        result += remainder * remainder * remainder;
        
        origNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
