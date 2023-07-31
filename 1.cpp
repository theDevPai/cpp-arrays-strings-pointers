//checking if array is sorted in ascending order
#include<iostream>
using namespace std;

string array_checker(int a[], int n)
{
    int max=0;
    for(int i=0; i<n-1; i++)
    {
        cout<<a[i];
        if(a[i]>a[i+1])
        {
            return "Not in ascending order";
        }
        return "Ascending order";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"ARRAY CHECKING..."<<endl;
    cout<<"RESULT:"<<array_checker(a,n);

    delete[] a;

    return 0;
}