//maximum element in arrays using pointers
#include<iostream>
using namespace std;

int max_ele(int* a, int n)
{
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=max)
        max=a[i];
    }
    return max;
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    int* ptr=a;
   cout<<"The maximum element in this array is: "<<max_ele(ptr, n);
   return 0;
}