#include <iostream>
using namespace std;
int main()
{
	int num,value,neg = 0,pos = 0 , zero = 0;
	cout << "Enter number : " ;
	cin >> num;
	int i = 1; //ตัวแปรเริ่มต้นซ้ำ
	while(i <= num) //ตรวจสอบเงื่อนไขทำซ้ำ
	{	
		cout << "Enter value " << i << " : " ;
		cin >> value;
		i++;

	if (value == 0) zero++ ;
	else if (value > 0 )pos++ ;
	else if (value < 0 )neg++ ;

	}
		cout << "Zero = " << zero << " number" <<endl;
		cout << "Positive = " << pos << " number" <<endl; 
		cout << "Negative = " << neg << " number" <<endl; 

	system("pause") ;
	return(0);
}
