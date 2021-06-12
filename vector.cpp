#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> arr={1,2,3,4,5,6};

    vector<int>::iterator ptr;

    for(ptr=arr.begin();ptr<arr.end();ptr++){

        cout<<*ptr<<" ";
    }

    vector<int> a;
    int n;
    cout<<"How many elements do you want to enter ?"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        a.push_back(element);
    }

    for(int i=0;i<n;i++){

        cout<<a[i]<<" ";

    }
}
