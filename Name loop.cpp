#include <iostream>
#include <string>
using namespace std;
int main()
{
	int Number;
	string Name;
	cout << "Enter Name : ";
	cin >> Name;
	cout << "Enter Number : ";
	cin >> Number;
	for (int n = 1 ; n <= Number ; n++ )
		cout << "Name : " << n << " : " << Name <<endl ;

	system("pause") ;
	return(0);
}
