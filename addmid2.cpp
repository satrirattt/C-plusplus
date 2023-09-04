#include <iostream>
using namespace std;
void add(int n1,int n2);
void sub(int n1,int n2);
void mul(int n1,int n2);
int main()
{ 
	int num1,num2;
	cout << "Input number 1 : ";
	cin >> num1;
	cout << "Input number 2 : ";
	cin >> num2;

	add(num1,num2);
	sub(num1,num2);
	mul(num1,num2);
	
	system("pause");
	return(0);
}
void add(int n1 , int n2)
{	int sum;
	sum = n1+n2;
	cout<<"Result of add : " <<sum<<endl;
}
void sub(int n1 , int n2)
{
	int result;
	result = n1-n2;
	cout<<"Result of sub : "  <<result<<endl;
}
void mul(int n1, int n2)
{
	int result;
	result = n1*n2;
	cout<<"Result of mul : "  <<result <<endl;
}
