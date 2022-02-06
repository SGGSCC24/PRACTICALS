#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER NUMBER OF ROWS: ";
    cin>>n;

    for (int row = n-1; row>=0; row--){

        for (int space = n-1; space>row; space--){
            cout<<" ";
        }

        bool a = 1;
        for (int i = 0; i<row*2+1; i++){
            cout<< a;
            a = !a;
        }
        cout<<endl;
    }
    return 0;
}