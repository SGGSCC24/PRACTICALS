#include<iostream>
using namespace std;

int main(){
    int row;

    cout<<"ENTER NUMBER OF ROWS: ";
    cin>>row;

    for (int i=0; i<row; i++){
        for (int j = 0; j<=i; j++){
            cout<<char(65+i);
        }
        cout<<endl;
    }
    return 0;
}
