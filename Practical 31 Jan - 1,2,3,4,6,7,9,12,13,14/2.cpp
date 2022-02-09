#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long int number;
    long long int reversed_number = 0;
    cout<<"ENTER AN INTEGER: ";
    cin>>number;
    while(number){
        reversed_number = reversed_number*10 + number%10;
        number /= 10;
    }
    cout<<reversed_number;
    return 0;
}