#include<iostream>
using namespace std;

bool check_prime(int);

int main(){
    long long int number;
    cout<<"ENTER A NUMBER: ";
    cin>>number;

    if (number){
        if (number>0){
            cout<<"PRIME FACTORS OF "<<number<<" ARE:";
            for (int i = 2; i <= number/2; i++){
                if (number%i == 0)
                    if (check_prime(i)) cout<<'\n'<<i;
            }
        }
        else cout<<"\nPlease enter a POSITIVE integer!";

        if (check_prime(number)){
            cout<<'\n'<<number;
            }
    }
    else cout<<"Every integer is a factor of 0 (Zero).";
    return 0;
}

bool check_prime(int number){
    if (number<=0) return false;

    for (int i = 2; i <= number/2; i++){
        if (number%i == 0)
            return false;
    }
    return true;
}