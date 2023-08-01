//finds the longest word in a sentence (string) and displays its length.
#include <iostream>
#include<string.h>
#include<sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Using stringstream to split the sentence into words
    stringstream ss(sentence);
    string word;
    string longestWord;
    size_t maxLength = 0;

    while (ss >> word) {

        if (word.length() > maxLength) {
            maxLength = word.length();
            longestWord = word;
        }
    }

    if(maxLength>0)
    {
        cout<<"The longest word is:"<<longestWord<<endl<<"Maximum length:"<<maxLength<<endl;
    }
    else
    {
        cout<<"No word is found"<<endl;
        cout<<"MaxLength:"<<maxLength<<endl;
        cout<<"Longest word:"<<longestWord<<endl;
    }
    
    return 0;
}