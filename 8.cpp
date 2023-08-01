//string input and palindrome check
#include<iostream>
using namespace std;

string check_pali(string& str)
{
    for(int i=0; i<str.length()/2; i++)
    {
        if(str[i]!=str[str.length()-i-1])
        return "Not a palindrome";
    }
    return "Palindrome";
}

int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin, str);

    cout<<"The string is: "<<check_pali(str);

    return 0;
}