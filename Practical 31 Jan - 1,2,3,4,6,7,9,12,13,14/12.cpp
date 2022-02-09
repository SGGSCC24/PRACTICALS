/*
12. Write a program that swaps two numbers using pointers.
*/
#include<iostream>
using namespace std;

void swap(int*, int*);

int main(){
    int a = 2;
    int b = 3;
    cout<<"BEFORE SWAPPING: \n"<<a<<", "<<b<<endl;

    swap(&a, &b);
    
    cout<<"AFTER SWAPPING: \n"<<a<<", "<<b<<endl;
    return 0;
}

void swap(int* a, int* b){
    int* temp = a;
    a = b;
    b = temp;
}