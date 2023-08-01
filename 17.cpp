//string as input and removes all spaces from it using pointers.
#include<iostream>
using namespace std;

void rm_spaces(string& str)
{
    int n=str.length();
    char a[n];
    char c=' ';

    for(int i=0; i<n; i++)
    {
        a[i]=str[i];
    }

    size_t pos=str.find(c);//size_t in C++ is the type returned by the sizeof operator and is frequently used in the standard library to describe sizes and counts. 
    while(pos!=string::npos)//npos is a constant static member value with the greatest possible value for an element of type size_t. 
    {
        str.erase(pos,1);
        pos=str.find(c, pos);
    }
}

int main()
{
    string str;
    cout<<"Enter a sentence:";
    getline(cin, str);

    rm_spaces(str);
    cout<<"New string:"<<str;
    return 0;
}