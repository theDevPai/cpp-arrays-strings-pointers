#include<iostream>
using namespace std;

void vowel_checker(string& str)
{
    int vowel = 0, cons = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                vowel++;
            else
                cons++;
        }
    }
    cout << "No. of vowels: " << vowel << endl;
    cout << "No. of consonants: " << cons << endl;
}

int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin, str);

    cout << "String input......checking for vowels & consonants";
    vowel_checker(str);
    return 0;
}
