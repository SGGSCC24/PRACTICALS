#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER NUMBER OF TERMS: ";
    cin>>n;
    double sum = 0;
    for (int i = 1; i <= n; i++){
        sum += 1.0/i;
    }
    cout<<"SUM OF SERIES = "<<sum;
    return 0;
}