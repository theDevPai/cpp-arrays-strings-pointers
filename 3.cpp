//dynamically allocate memory for array of integers
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
  cout<<"Enter the array elements:";
  int* a=new int[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  cout<<"The array is :";
  for(int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  }

  delete[] a;

  return 0;
}