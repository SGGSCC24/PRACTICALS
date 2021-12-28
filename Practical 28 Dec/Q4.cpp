/*
Reversing digits of a 3-digit number.

Code By: Om Gupta 214047
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a 3-digit number: ";
    cin>>n;

    /*
    // Only if loops are allowed.
    // Condition to check for a 3-digit input only
    while (n>999){
        cerr<<"\nPlese enter a 3-digit number only!\n\n";
        cout<<"Enter a 3-digit number: ";
        cin>>n;
    }
    */

    cout<<"Reversed Number of "<<n<<" : ";
    int reversed = 0;
    reversed += (n%10)*100;
    n /= 10;
    reversed += (n%10)*10;
    n /= 10;
    reversed += (n%10);
    cout<<reversed;

    return 0;
}