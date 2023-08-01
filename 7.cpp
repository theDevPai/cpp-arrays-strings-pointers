//merge two sorted arrays into 1 sorted array
#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main()
{
    int n1,n2, n3;
    cout<<"Enter size of the two arrays:(n1 & n2)";
    cin>>n1>>n2;
    n3=n1+n2;
    int a[n1], b[n2], c[n3];
    cout<<"Enter the elements of first array:";
    for(int i=0; i<n1; i++)
    {
     cin>>a[i];   
    }
    
    cout<<"Enter the elements of second array:";
    for(int i=0; i<n2; i++)
    {
     cin>>b[i];   
    }

    sort(a, a+n1);
    sort(b, b+n2);
    cout<<endl<<"the sorted array 1:"<<endl;
    for(int i=0; i<n1; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl<<"the sorted array 2:"<<endl;
    for(int i=0; i<n2; i++)
    {
        cout<<b[i]<<" ";
    }

    cout<<endl<<"The merged array:"<<endl;
    int i=0, j=0, k=0;
    while(i<n1)
    {
        c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }

    sort(c,c+n3);
    
    for(int i=0; i<n3; i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}

