#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER NUMBER OF TERMS: ";
    cin>>n;
    int sum = 0;
    for (int i=1; i<=n; i++){
        if (i%2==0)
            sum -= i;
        else sum +=i;
    }
    cout<<"SUM OF SERIES = "<<sum;
    return 0;
}