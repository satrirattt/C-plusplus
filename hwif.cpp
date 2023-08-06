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
	{	t+=20;
		B += 20;
	}
	else if (a == 'C')
	{	t+= 30;
		C +=30;

	}

	cout << "Enter Character (A,B,C) : " ;
	cin >> b ;
	if (b == 'A')
	{	t +=10 ;
		A +=10;
	}
		
	else if (b == 'B')
	{	t+=20;
		B += 20;
	}
	else if (b == 'C')
	{	t+= 30;
		C +=30;

	}

	cout << "Enter Character (A,B,C) : " ;
	cin >> c ;
	if (c == 'A')
	{	t +=10 ;
		A +=10;
	}
		
	else if (c == 'B')
	{	t+=20;
		B += 20;
	}
	else if (c == 'C')
	{	t+= 30;
		C +=30;

	}

	//ออก ex.A = 10 , B = 20 , C = 30
    cout << ((a == 'A') ? "A = 10" : (a == 'B') ? "B = 20" : "C = 30") << " , ";
    cout << ((b == 'A') ? "A = 10" : (b == 'B') ? "B = 20" : "C = 30") << " , ";
    cout << ((c == 'A') ? "A = 10" : (c == 'B') ? "B = 20" : "C = 30") << endl;
    
	//ออก ex. A + A + A =
	cout << ((a == 'A') ? "A" : (a == 'B') ? "B" : "C") << " + ";
    cout << ((b == 'A') ? "A" : (b == 'B') ? "B" : "C") << " + ";
    cout << ((c == 'A') ? "A" : (c == 'B') ? "B" : "C") << " = ";

	//ออก ex. 10 + 10 + 10 =3
	cout << ((a == 'A') ? "10" : (a == 'B') ? "20" : "30") << " + ";
    cout << ((b == 'A') ? "10" : (b == 'B') ? "20" : "30") << " + ";
    cout << ((c == 'A') ? "10" : (c == 'B') ? "20" : "30") << " = " << t << endl;
	
	return(0);
}