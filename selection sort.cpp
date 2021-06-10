#include<iostream>
using namespace std;

// swaping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//sorting algoritham
void selection(int arr[],int n){

 int i,j,min_index;

 for (int i=0;i<n-1;i++){

    min_index=i;
    for(int j=i+1;j<n;j++){
        if (arr[j]<arr[min_index]){
            min_index=j;
        }
        swap(&arr[min_index],&arr[i]);
    }
 }

}

//printing the array
void print_array(int arr[],int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){

int arr[5]={5,3,2,4,1};
int n = sizeof(arr)/sizeof(arr[0]);
selection(arr,n);
cout<<"Sorted array: \n ";
print_array(arr,n);
return 0;
}
