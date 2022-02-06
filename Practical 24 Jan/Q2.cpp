/*
Code By: Om Gupta 214047 
2) Write a program that determines a student’s grade. It reads three test scores (between 0 and 100) and calculates the grade based on the following rules:


a. If the average score is 90 or more, the grade is ‘A’.
b. If the average score is between 80 and 90, the program checks the third score.      If the third score is more than 90, the grade is ‘A’; otherwise, the grade is ‘B’.
c. If the average score is between 70 and 80, the program checks the third score. If the third score is more than 80, the grade is ‘B’; otherwise, the grade is ‘C’.
d. If the average score is between 60 and 70, the program checks the third score. If the third score is more than 70, the grade is ‘C’; otherwise, the grade is ‘D’.
e. If the average score is less than 60, the program checks the third score. If the third score is more than 60, the grade is ‘D’; otherwise, the grade is ‘F’.

The program’s main is to contain only call statements . At least three subfunctions are required: one to read scores, one to determine the grade, and one to print the results.
*/
#include<iostream>
using namespace std;

double read_score(int);
double calc_avg(double, double, double);
void print_result(double, double);
int main(){
	double score1 = read_score(1);
	double score2 = read_score(2);
	double score3 = read_score(3);
	double avg_score = calc_avg(score1, score2, score3);
	if (avg_score) print_result(avg_score, score3);
	return 0;
}

double read_score(int serial){
	double score;
	cout<<"Enter the marks of subject "<<serial<<": ";
	cin>>score;
	return score;
}

double calc_avg(double score1, double score2, double score3){
	if (score1>100 || score2>100 || score3>100){ cout<<"Invalid Scores Entered !";
	return 0;
	}
	else return (score1+score2+score3)/3;
}

void print_result(double avg_score, double score3){
	if (avg_score >= 90)
		cout<<"GRADE A";
	else if (avg_score >= 80)
		if (score3 > 90) cout<<"GRADE A";
		else cout<<"GRADE B";
	else if (avg_score >= 70)
		if (score3 > 80) cout<<"GRADE B";
		else cout<<"GRADE C";
	else if (avg_score >= 60)
		if (score3 > 70) cout<<"GRADE C";
		else cout<<"GRADE D";
	else if (avg_score < 60)
		if (score3 > 60) cout<<"GRADE D";
		else cout<<"GRADE F";
	else cout<<"Invalid Scores Entered!";
}