/*
Q.2. WAP to print grade of students according to marks taken as input. Write two separate programs
using function and without using function.
Grading Rules:
If marks <=90 grade =’A’
If marks >=80 and < 90 grade=’B’
If marks >=70 and <80 grade=’C’
If marks>=40 and <70 grade=’D’
If marks <40 print “fail”

Code by: Om Gupta
*/

#include<iostream>
using namespace std;

char result(double marks);

int main(){
    double marks;
    cout<<"ENTER MARKS: ";
    cin>>marks;

    // WITHOUT FUNCTIONS
    char grade;
    if (marks<40)
        cout<<"FAIL";
    else{
        grade = 'D';
        if (marks >= 70)
            grade = 'C';
            if (marks >= 80)
                grade = 'B';
                if (marks >= 90)
                    grade = 'A';
    }
    if (grade){
        cout<<"GRADE "<<grade;
    }

    // WITH FUNCTIONS
    // if (marks<40)
    //     cout<<"FAIL";
    // else
    //     cout<<"GRADE "<<grade;
    return 0;
}

char result(double marks){
    char grade = 'D';
    if (marks >= 70)
            grade = 'C';
            if (marks >= 80)
                grade = 'B';
                if (marks >= 90)
                    grade = 'A';
    return grade;
}