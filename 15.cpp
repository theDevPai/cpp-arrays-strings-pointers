//sum of all elements in the array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];

    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }

    cout<<"SUM="<<sum<<endl;
    return 0;
}