#include<iostream>
using namespace std;

int sum(int* a, int m, int n)
{
    int sum=0;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum += (*a + i*n +j);
        }
    }
    return sum;
}

int main()
{
    int m,n;
    cout<<"Enter the dimension size of the 2D array:";
    cin>>m>>n;
    int a[m][n];

    cout<<"Enter the array elements:"<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"The 2D array you entered is as follows:"<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

    cout<<endl<<"Sum of all elements in this 2D array is:"<<sum(&a[0][0], m,n);

    return 0;
}