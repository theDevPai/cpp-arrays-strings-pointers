//calculate length of string with the help of pointers
#include<iostream>
using namespace std;

unsigned int strLength(char* a)
{
    unsigned int length=0;

    while(*a != '\0')
    {
        length++;
        a++;
    }

    return length;
}

int main()
{
    int MAX_SIZE=100;
    char a[MAX_SIZE];

    cout << "Enter a string: ";
    cin.getline(a, MAX_SIZE);

    unsigned int length=strLength(a);
    cout<<"Length of the string is:"<<length;

    return 0;
}