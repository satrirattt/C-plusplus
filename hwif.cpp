#include <iostream>
using namespace std;
int main()
{
	
	char a,b,c;
	int t = 0 ;
	int A = 0, B = 0, C = 0 ;
	cout << "RUN : ทดสอบด้วยการป้อน A,B,C ตามลำดับ" <<endl ;
	cout << "Enter Character (A,B,C) : " ;
	cin >> a ;
	if (a == 'A')
	{	t +=10 ;
		A +=10;
	}
		
	else if (a == 'B')
	{	t+=10;
		B += 20;
	}
	else if (a == 'C')
	{	t+= 10;
		C +=30;

	}

	cout << "AEnter Character (A,B,C) : " ;
	cin >> b ;
	if (b == 'A')
	{	t +=10 ;
		A +=10;
	}
		
	else if (b == 'B')
	{	t+=10;
		B += 20;
	}
	else if (b == 'C')
	{	t+= 10;
		C +=30;

	}

	cout << "BEnter Character (A,B,C) : " ;
	cin >> c ;
	if (c == 'A')
	{	t +=10 ;
		A +=10;
	}
		
	else if (c == 'B')
	{	t+=10;
		B += 20;
	}
	else if (c == 'C')
	{	t+= 10;
		C +=30;

	}

	cout << "A = " << A << " , B = " << B << " , C = " << C << endl;
    cout << "A + B + C = " << A << " + " << B << " + " << C << " = " << t << endl;
	
	return(0);
}