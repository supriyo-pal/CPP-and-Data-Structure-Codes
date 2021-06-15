#include<iostream>
using namespace std;

void repeating(int arr[],int size)
{

    int i,j,count=0;

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {

            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<endl;
                count++;
            }
        }
    }
    cout<<"The value is repeated for "<<count<<" times"<<endl;

}
int main()
{

    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements :"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    repeating(arr,n);
}
