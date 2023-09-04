#include <iostream>
using namespace std;
int add(int n1,int n2)
{
	return(n1+n2);
}
int sub(int n1 , int n2)
{
	return(n1-n2);
	
}
int mul(int n1, int n2)
{
	return(n1*n2);
}

int main()
{ 
	int num1,num2;
	cout << "Input number 1 : ";
	cin >> num1;
	cout << "Input number 2 : ";
	cin >> num2;

	/*int sum;
	sum = add(num1,num2);
	cout <<"Result of add = " <<sum<<endl*/

	cout<<"Result of add : "  <<add(num1,num2)<<endl;
	cout<<"Result of sub : "  <<sub(num1,num2)<<endl;
	cout<<"Result of mul : "  <<mul(num1,num2)<<endl;

	
	system("pause");
	return(0);
}

