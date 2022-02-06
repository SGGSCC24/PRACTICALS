#include<iostream>
using namespace std;

int main(){
    double number;
    int incval;
    cout<<"ENTER A NUMBER: ";
    cin>>number;
    cout<<"ENTER INCREMENT VALUE (0-9): ";
    cin>>incval;

    switch (incval)
    {
    case 0:
        cout<<number+0;
        break;
    case 1:
        cout<<number+1;
        break;
    case 2:
        cout<<number+2;
        break;
    case 3:
        cout<<number+3;
        break;
    case 4:
        cout<<number+4;
        break;
    case 5:
        cout<<number+5;
        break;
    case 6:
        cout<<number+6;
        break;
    case 7:
        cout<<number+7;
        break;
    case 8:
        cout<<number+8;
        break;
    case 9:
        cout<<number+9;
        break;
    
    default:
        cout<<"INCREMENT VALUE HAS TO BE IN RANGE [0,9] !";
        break;
    }
    return 0;
}