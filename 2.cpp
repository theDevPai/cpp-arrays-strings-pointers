//reversing a string using array
#include<iostream>
using namespace std;

void reverse_str(string str)
{
    int len=str.length();
    char a[len];

    for(int i=0; i<len; i++)
    {
        a[i]=str[len-i-1];
    }

    for(int i=0; i<len; i++)
    {
        cout<<a[i];
    }
    delete[] a;
}

int main()
{
    string str;
    cout<<"Enter the string to be reversed:";
    getline(cin,str);

    cout<<"Original string:"<<str<<endl;
    cout<<"Reversed string:";
    reverse_str(str);
    return 0;
}