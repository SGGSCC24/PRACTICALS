/*
13. Write a program in which a function is passed address of two variables and then alter its
contents.
*/

#include<iostream>
using namespace std;

//Required function.
void modify_var(int &variable1, int &variable2){
    cout<<"\n\nENTER NEW VALUE OF VARIABLE 1: ";
    cin>>variable1;
    cout<<"ENTER NEW VALUE OF VARIABLE 2: "; 
    cin>>variable2;
}

int main(){
    int a ,b;
    cout<<"ENTER VALUE OF VARIABLE 1: ";
    cin>>a;
    cout<<"ENTER VALUE OF VARIABLE 2: "; 
    cin>>b;

    cout<<"\nORIGINAL VALUES:\nVariable 1 = "<<a<<"\nVariable 2 = "<<b;

    modify_var(a, b);
    
    cout<<"\nMODIFIED VALUES:\nVariable 1 = "<<a<<"\nVariable 2 = "<<b;
    return 0;
}