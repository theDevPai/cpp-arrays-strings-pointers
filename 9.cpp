//factorial of a positive integer using a function with a pointer as a parameter
#include <iostream>
using namespace std;

void factorial(int n, unsigned long long* result)
{
    *result = 1; // Initialise result to 1 for factorial

    for (int i = 1; i <= n; ++i) {
        *result *= i; // Multiply result by i
    }
}

int main()
{
    int num;
    cout<<"Enter a positive number to find the factorial of:";
    cin>>num;

    unsigned long long fact;
    cout<<"The factorial of num is :";
    factorial(num, &fact);
    cout<<fact;
    return 0;
}