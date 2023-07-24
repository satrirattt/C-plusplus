#include <iostream>
using namespace std;
int main()
{
	float f,s,t,m,final,T,S ;
	cout << "============QUIZZES============" <<endl ;
	cout << "Enter first quizz (10) : " ;
	cin >> f ;
	cout << "Enter second quizz (10) : " ;
	cin >> s ;
	cout << "Enter third quizz (10) : ";
	cin >> t ;
	cout << "============MID-TERM===========" <<endl ;
	cout << "Enter mid-term (40) : " ;
	cin >> m ;
	cout << "=============FINAL=============" <<endl ;
	cout << "Enter final (50) : " ;
	cin >> final ;
	T = (f + s + t) / 3 ;
	cout << "Quizz Total : " << T <<endl;
	cout << "Mid term : " << m <<endl;
	cout << "Final : " << final <<endl;
	S = T + m + final ;
	cout << "Total : " << S <<endl;
	cout << "Your score is" << ((S >= 50)? " PASS" : " FAIL" ) <<endl ; 

	return(0);
}