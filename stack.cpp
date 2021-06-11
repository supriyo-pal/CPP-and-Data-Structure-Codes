#include<iostream>
using namespace std;
int stack[100], n=100 ,top=-1;


void push(int val){

if (top>=n-1){
    cout<<"Stack is Overflow";
}
else{
    top++;
    stack[top]=val;
}
}

void pop(){
if(top<=-1){
    cout<<"Stack is Underflow"<<endl;
}
else{
    cout<<"The last item is popped "<<endl;
    top--;

}
}

void display(){

if (top>=0){
    cout<<"Stack elements are "<<endl;
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
        cout<<endl;

    }
}
else{
    cout<<"Stack is empty "<<endl;
}
}

int main(){

int choice, val,c;
cout<<"1> Push in Stack "<<endl;
cout<<"2> Pop from the stack "<<endl;
cout<<"3> Display the stack "<<endl;
cout<<"4> Exit "<<endl;
do{
    cout<<"Enter your choice: "<<endl;
    cin>>choice;

    switch(choice){
case 1:
    {
        cout<<"Enter the value ";
        cin>>val;
        push(val);
        break;
    }
case 2:
    {
        pop();
        break;
    }
case 3:
    {
        display();
        break;
    }
case 4:
    {
        cout<<"Exit "<<endl;
        break;
    }
    default:{
    cout<<"Invalid choice "<<endl;
    }
    }
 cout<<"Select 1 to continue ";
 cin>>c;
}while(c==1);
return 0;

}
