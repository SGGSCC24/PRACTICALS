/*
3) Write a program to compute the real roots of a quadratic equation (ax2 + bx + c = 0).
Your program is to prompt the user to enter the constants (a,b,c). It should then display the roots based on the following rules:

If both a and b are zero, there is no solution.
If a is zero, there is only one root (-c/b).
If the discriminant (b2 - 4ac) is negative, there are no real roots.
For all other combinations, there are two roots.

code by : Om Gupta 214047

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c;
    
    cout<<"Enter coefficient of x^2: ";
    cin>>a;

    cout<<endl<<"Enter coefficient of x: ";
    cin>>b;
    
    cout<<endl<<"Enter the constant: ";
    cin>>c;

    if (a==0){
        if (b==0){
            cout<<"\nNo Roots Possible! ";
            return 0;
        }
        else{
        cout<<"\nRoot is :"<<-c/b;
        return 0;
        }
    }
    float D = b*b - 4*a*c;
    cout<<endl<<"Discriminant: "<<D<<endl;

    if (D<0){
        cout<<endl<<"No real roots exists.";
    }else if(D==0){
        float root1 = -b/(2*a);
        float root2 = -b/(2*a);
        cout<<endl<<"Roots are: "<<root1<<", "<<root2;
    }else{
        float root1 = (-b + sqrt(D) ) / (2*a);
        float root2 = (-b - sqrt(D) ) / (2*a);
        cout<<endl<<"Roots are: "<<root1<<", "<<root2;
    }
    return 0;
    
}