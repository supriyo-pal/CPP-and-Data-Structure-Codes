#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr={1,2,3,4,5,6};

    vector<int>::iterator ptr;

    for(ptr=arr.begin();ptr<arr.end();ptr++){

        cout<<*ptr<<" ";
    }

}
