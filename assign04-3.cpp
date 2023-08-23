#include <iostream>
using namespace std;

int main() {
    char word;
    int upper = 0;
    int lower = 0;
    int space = 0;
    int special = 0;

    cout << "Enter message : ";
    
	while (cin.get(word)) {
        if (isupper(word)) {
            ++upper;
        } else if (islower(word)) {
            ++lower;
        } else if (isspace(word)) {
            ++space;
        } else {
            ++special;
            break;
        }
    }

    cout << "Your message have " << upper << " uppers character." << endl;
    cout << "Your message have " << lower << " lowers character." << endl;
    cout << "Your message have " << space << " spaces character." << endl;
    cout << "Your message have " << special << " specials character." << endl;

    return 0;
}
