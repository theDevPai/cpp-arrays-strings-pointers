//concatenate two strings (character arrays) using pointers
#include <iostream>
using namespace std;

int main() {
	char string1[20], string2[20], * pString1, * pString2;
	cout << "Enter the first string: ";
	cin >> string1;
	cout << "Enter the second string: ";
	cin >> string2;
	pString1 = string1;
	pString2 = string2;
	while (*pString1 != '\0') {
		pString1++;
	}
	while (*pString2 != '\0') {
		*pString1 = *pString2;
		pString1++;
		pString2++;
	}
	*pString1 = '\0';
	cout << string1;
}