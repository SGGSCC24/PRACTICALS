#include<iostream>
using namespace std;

int main(){
    int num1 = 3;
    int num2 = 7;

    cout<<"BEFORE SWAPPING: num1 = "<<num1<<" , num2 = "<<num2;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"\nAFTER SWAPPING : num1 = "<<num1<<" , num2 = "<<num2;
    return 0;
}