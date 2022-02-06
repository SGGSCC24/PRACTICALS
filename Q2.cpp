#include <iostream>
using namespace std;

double read_score(int);
double calc_avg(double, double, double);
void print_result(double, double);
int main()
{
	double s1 = read_score(1);
	double s2 = read_score(2);
	double s3 = read_score(3);
	double avg_score = calc_avg(s1, s2, s3);
	if (avg_score)
		print_result(avg_score, s3);
	return 0;
}

double read_score(int serial)
{
	double score;
	cout << "Enter the marks of subject " << serial << ": ";
	cin >> score;
	return score;
}

double calc_avg(double sc1, double sc2, double sc3)
{
	if (sc1 > 100 || sc2 > 100 || sc3 > 100)
	{
		cout << "Invalid Scores Entered !";
		return 0;
	}
	else
		return (sc1 + sc2 + sc3) / 3;
}

void print_result(double avg_score, double score3)
{
	if (avg_score >= 90)
		cout << "GRADE A";
	else if (avg_score >= 80)
		if (score3 > 90)
			cout << "GRADE A";
		else
			cout << "GRADE B";
	else if (avg_score >= 70)
		if (score3 > 80)
			cout << "GRADE B";
		else
			cout << "GRADE C";
	else if (avg_score >= 60)
		if (score3 > 70)
			cout << "GRADE C";
		else
			cout << "GRADE D";
	else if (avg_score < 60)
		if (score3 > 60)
			cout << "GRADE D";
		else
			cout << "GRADE F";
	else
		cout << "Invalid Scores Entered!";
}