#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num1,num2,total = 0;
	cout << "Enter num1 : ";
	cin >> num1;
	cout << "Enter num2 : ";
	cin >> num2;
	for (int n = 1 ; n <= num2 ; n ++   )
	{	cout << num1 << " X " << n << " = " << num1 * n <<endl;	
		total = total + (num1 * n);	
	}
	cout << "Total = " << total <<endl;
	cout << "AVG. = "<<total/(float)num2<<endl;
	system("pause") ;
	return(0);
}
