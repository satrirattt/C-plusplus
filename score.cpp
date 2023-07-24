#include <iostream>
#include <string>
using namespace std;
int main()
{
	int s;
    cout << "Input C++ Score : " ;
    cin >>  s ;
	cout << (s >= 50 ? "You pass with score " : "You fail with score ") << s << ";"<<endl; 
	system("pause");
    return (0);

}