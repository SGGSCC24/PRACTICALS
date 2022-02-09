#include<iostream>
using namespace std;

bool check_prime(int);

int main(){
    int n;
    cout<<"ENTER AN INTEGER: ";
    cin>>n;
    if (check_prime(n))
        cout<<n<<" is a Prime Number.";
    else cout<<n<<" is NOT a Prime Number.";


    cout<<"\n\nPrime numbers less than 100: ";
    for (int i = 1; i<=100; i++){
        if (check_prime(i))
            cout<<'\n'<<i;
    }

    return 0;
}

//Required function to check for prime number.
bool check_prime(int number){
    for (int i = 2; i <= number/2; i++){
        if (number%i == 0)
            return false;
    }
    return true;
}