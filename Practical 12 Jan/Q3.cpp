/*
Q.3 WAP to print “Pass” and “Fail” when students marks are >= 40 and <40 respectively.

Code by: Om Gupta
*/

#include<iostream>
using namespace std;

int main(){
    double marks;
    cout<<"ENTER MARKS: ";
    cin>>marks;

    if (marks<40)
        cout<<"FAIL";
    else
        cout<<"PASS";
    return 0;
}