#include<iostream>
using namespace std;

int main(){

int arr[4]={1,2,3,4};
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for(int i = 0; i < 4; i++) {
  cout << cars[i] << "\n";
}

cout<<"\n";
for (int j=0;j<4;j++){
    cout<<arr[j]<<"\n";
}

}
