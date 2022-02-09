#include<iostream>
using namespace std;

int main(){
    unsigned int row;
    cout<<"ENTER NUMBER OF ROWS: ";
    cin>>row;

    for (int i = 0; i < row; i++){
        for (int stars = 1; stars <= 2*i+1; stars++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}