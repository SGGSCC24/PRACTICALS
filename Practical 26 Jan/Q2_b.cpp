/*
b)
        *
      * *
    * * *
  * * * *
* * * * *
*/

#include<iostream>
using namespace std;

int main(){
    unsigned int n;
    cout<<"ENTER NUMBER OF ROWS: ";
    cin>>n;
    for (int row = 1; row<=n; row++){
        for (int space = n; space > row; space--){
            cout<<"  ";
        }
        for (int stars = 0; stars < row; stars++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}