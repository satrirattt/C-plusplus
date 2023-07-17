#include <iostream>
using namespace std;
int main()
{
	int A ;
	cout << "Amount to be withdraw : " ;
	cin >> A ;
	cout << "1000 : " << A/1000 <<endl;
	cout << "100 : " << (A%1000)/100 <<endl;
	cout << "50 : " << (A%100)/50 <<endl;
	cout << "20 : " << (A%50)/20 <<endl;

	system("pause");
	return(0);
}