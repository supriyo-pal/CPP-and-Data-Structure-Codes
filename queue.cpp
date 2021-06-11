#include<iostream>
using namespace std;
int queue[100],n=100,front= -1 ,back = -1,val;

void enqueue(){
if (back==n-1){
    cout<<"Queue is Overflow"<<endl;
}
else{
    if(front == -1)
        front=0;
        cout<<"Enter the element "<<endl;
        cin>>val;
        back++;
        queue[back]=val;
}

}

void dequeue(){
if (front==-1 || front>back){
    cout<<"Queue is Underflow"<<endl;

}
else{
    cout<<"Element deleted from queue is "<<queue[front]<<endl;
    front++;
}
}

void display(){
    if(front==-1){
        cout<<"Queue is Empty "<<endl;
    }
    else{
        cout<<"Elements are "<<endl;
        for(int i=front;i<=back;i++){
            cout<<queue[i]<<" ";
            cout<<endl;
        }
    }
}

int main(){

int ch,c;
cout<<"-------MENU-------"<<endl;
cout<<"1> Enqueue"<<endl;
cout<<"2> Dequeue"<<endl;
cout<<"3> Display"<<endl;
cout<<"4> Exit"<<endl;

do{
    cout<<"Enter your choice "<<endl;
    cin>>ch;

    switch(ch){
case 1:
    enqueue();
    break;
case 2:
    dequeue();
    break;
case 3:
    display();
    break;
case 4:
    cout<<"Exit"<<endl;
    break;
default:
    cout<<"Invalid choice "<<endl;
    }
cout<<"Press 1 to continue "<<endl;
cin>>c;
}while(c==1);


}
