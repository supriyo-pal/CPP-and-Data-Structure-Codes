#include<iostream>
using namespace std;

//swaping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//print the array
void print_array(int array[],int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

//sorting algorithm
void bubble_sort(int *array,int n){
bool flag;
for(int i=0;i<n;i++){
flag=false;


    for(int j=0;j<n-i-1;j++){

        if(array[j]>array[j+1]){
            swap(array[j],array[j+1]);
            flag=true;
        }
    }

    if(flag==false){
        cout<<"Array is already Sorted"<<endl;
        break;

    }
}
}

int main(){

    int n;
    cout<<"Enter the size of the array \n";
    cin>>n;

    int arr[n];

    cout<<"Enter the Elements :\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array before sorting :\n";
    print_array(arr,n);

    bubble_sort(arr,n);
    cout<<"Array after sorting :\n";
    print_array(arr,n);
}
