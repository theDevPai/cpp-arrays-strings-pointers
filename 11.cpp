//removing occurences from a certain string 
#include<iostream>
using namespace std;

void rm_dup(string& str, char ch)
{
    size_t pos=str.find(ch);//size_t in C++ is the type returned by the sizeof operator and is frequently used in the standard library to describe sizes and counts. 
    while(pos!=string::npos)//npos is a constant static member value with the greatest possible value for an element of type size_t. 
    {
        str.erase(pos,1);
        pos=str.find(ch, pos);
    }
}

int main()
{
    string str;
    cout<<"Enter the string:";
    getline(cin, str);

    char a;
    cout<<"Enter the character to be removed:";
    cin>>a;
    rm_dup(str, a);

    cout<<"New string:"<<str;
    return 0;
}