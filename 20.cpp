//find the intersection of two arrays using pointers.
#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the intersection of two arrays
int* findIntersection(int* arr1, int size1, int* arr2, int size2, int& intersectionSize) {
    // Sort both arrays
    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    // Allocate memory for the intersection array (maximum possible size is the minimum of size1 and size2)
    int* intersection = new int[min(size1, size2)];
    intersectionSize = 0;

    // Pointers to traverse both arrays
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    // Traverse both arrays to find the common elements
    while (ptr1 < arr1 + size1 && ptr2 < arr2 + size2) {
        if (*ptr1 == *ptr2) {
            intersection[intersectionSize++] = *ptr1;
            ptr1++;
            ptr2++;
        } else if (*ptr1 < *ptr2) {
            ptr1++;
        } else {
            ptr2++;
        }
    }

    return intersection;
}

int main() {
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1;

    int* arr1 = new int[size1];
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    int* arr2 = new int[size2];
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int intersectionSize;
    int* intersection = findIntersection(arr1, size1, arr2, size2, intersectionSize);

    if (intersectionSize == 0) {
        cout << "No common elements found.\n";
    } else {
        cout << "Intersection of the two arrays: ";
        for (int i = 0; i < intersectionSize; i++) {
            cout << intersection[i] << " ";
        }
        cout << "\n";
    }

    // Clean up dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] intersection;

    return 0;
}
