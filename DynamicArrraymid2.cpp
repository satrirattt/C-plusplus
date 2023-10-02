//การสร้าง Dynamic Arrray
#include <iostream>
#include <string>
using namespace std;
int main()
{    int num;
    //string name[10];
    cout<<"Enter Number of Students: ";
    cin>>num;
    string *name = new string[num];
    int *score = new int[num];
    for(int i=0;i<num;i++)
    {    cout<<"Enter Name  :";
        cin>>name[i];
        cout<<"Enter Score : ";
        cin>>score[i];
    }
    system("pause");
    return 0;
}
