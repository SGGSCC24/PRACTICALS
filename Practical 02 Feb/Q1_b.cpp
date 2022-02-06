#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER NUMBER OF ROWS: ";
    cin>>n;
    
    for (int row = 0; row<(n/2.0); row++){
        for (int space = (n/2.0); space >row; space--){
            cout<<" ";
        }
        for (int stars = 1; stars <= row*2+1; stars++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int row = n/2.0; row>0; row--){
        for (int space = n/2.0; space>=row; space--){
            cout<<" ";
        }
        for (int stars = 2; stars < row*2+1; stars++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}