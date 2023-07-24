#include <iostream>
#include <string>
using namespace std;
int main()
{
	float F,C;
	cout << "Enter Fahrenheit : " ;
	cin >>  F ;
	cout << "********Output********" <<endl;
	C = (5.0/9.0) * (F-32);
	cout << "Celsuis = " << C <<endl ;
	cout <<  C  << " is " << (C >= 30 ? "Hot" : "Cool") <<endl; 
	system("pause");
	return (0);

}
