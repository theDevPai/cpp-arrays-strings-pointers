//reversing integer array using pointers
#include<iostream>
using namespace std;

void reverse_arr(int* a, int n, int* ptr)
{
    for(int i=0; i<n; i++)
    {
        ptr[i]=a[n-i-1];
    }

}

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

    int* ptr;
    cout<<"Array after reversing:"<<endl;
    reverse_arr(&a[0], n, ptr);
    for(int i=0; i<n; i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}