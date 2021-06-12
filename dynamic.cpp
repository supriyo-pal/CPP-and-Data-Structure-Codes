#include<iostream>
using namespace std;

int main()
{
    int n;
    int b=100;
    int *a=new int;
    *a=10;
    cout<<*a<<endl;
    cout<<b<<endl;
    delete a;

    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int *arr=new int[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The elements are "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    delete arr;
}
