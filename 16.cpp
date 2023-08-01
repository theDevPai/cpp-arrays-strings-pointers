//largest element in an array of integers.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the aray elements:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int maxele=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>maxele)
        {
            maxele=a[i];
        }
    }

    cout<<"The largest element in the array of integers is:"<<maxele;
    return 0;
}