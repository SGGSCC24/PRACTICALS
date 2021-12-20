#include <iostream>

#define VOWEL_A "a"
#define VOWEL_E "e"
#define VOWEL_I "i"
#define VOWEL_O "o"
#define VOWEL_U "u"

using namespace std;

int main() {
    const int even1 = 0;
    const int even2 = 2;
    const int even3 = 4;
    const int even4 = 6;
    const int even5 = 8;

    cout << VOWEL_A << " " << VOWEL_E << " " << VOWEL_I << " " << VOWEL_O << "  "<< VOWEL_U << endl;
    cout << even1 << " " << even2 << " " << even3 << " " << even4 << " " << even5 << endl;
    cout << 1 << " " << 3 << " " << 5 << " " << 7 << " " << 9;
    
    return 0;
}