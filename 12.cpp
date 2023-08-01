//swap 2 integers using pointers
#include <iostream>
using namespace std;

void swapIntegers(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1, num2;

    cout << "Enter the integers: ";
    cin >> num1>>num2;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapIntegers(&num1, &num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
