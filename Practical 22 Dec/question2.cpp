#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int sub1marks , sub2marks, sub3marks, sub4marks,totalmarks, average ;
    int deviation ,deviation1 , deviation2 , deviation3 , deviation4 , variances ,standard_deviation;
    cout<<"NUMBER IN SUBJECT 1:    \n";
    cin>>sub1marks;
    cout<<"NUMBER IN SUBJECT 2:    \n";
    cin>>sub2marks;
    cout<<"NUMBER IN SUBJECT 3:    \n";
    cin>>sub3marks;
    cout<<"NUMBER IN SUBJECT 4:    \n";
    cin>>sub4marks;

    totalmarks = sub1marks + sub2marks + sub3marks + sub4marks ;
    average = totalmarks/4 ;        //finding mean 
    cout<<"AVERAGE MARKS IS : "<<average <<"\n";

    deviation1 = (average - sub1marks)*(average - sub1marks) ; //finding squared diffrences
    deviation2 = (average - sub2marks)*(average - sub2marks) ;
    deviation3 = (average - sub3marks)*(average - sub3marks) ;
    deviation4 = (average - sub4marks)*(average - sub4marks) ;
    
    variances = (deviation1 + deviation2+ deviation3 + deviation4)/4 ; //finding avearge of squared differences
    
    standard_deviation = sqrt(variances);       //calculating   satndard deviation        
    cout<<"SO DEVIATION IS "<<standard_deviation ;


    
    return 0;  
}
