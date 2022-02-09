#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"ENTER A NUMBER: ";
    cin>>number;

    if (number){
        cout<<"FACTORS OF "<<number<<" ARE:";
        if (number>0){
            for (int i = 1; i <= number/2; i++){
                if (number%i == 0)
                    cout<<'\n'<<i;
            }
        }
        else{
            for (int i = 1; i <= -number/2; i++){
                if (number%i == 0)
                    cout<<'\n'<<-i;
            }
        }
        cout<<'\n'<<number;
    }

    else cout<<"EVERY NUMBER IS A FACTOR OF 0 (Zero).";
    return 0;
}