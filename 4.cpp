//capitalize first word
#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

string capitalizeWords(const string& sentence) {
    string result = sentence;

    if (!result.empty() && islower(result[0])) {
        result[0] = toupper(result[0]);
    }

    for (size_t i = 1; i < result.length(); ++i) {
        if (result[i - 1] == ' ' && islower(result[i])) {
            result[i] = toupper(result[i]);
        }
    }

    return result;
}

int main() {
    string input;

    cout << "Enter a sentence: ";
    getline(cin, input);

    string capitalizedSentence = capitalizeWords(input);
    cout << "Capitalized sentence: " << capitalizedSentence << endl;

    return 0;
}
