#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char character;
    cout<<"ENTER ANY ENGLISH ALPHABET: ";
    cin>>character;
    character = tolower(character);
    if (int(character)>=97 && int(character) <= 122){
        if (character == 'a' ||character == 'e' ||character == 'i' ||character == 'o' ||character == 'u'){
            cout<<"VOWEL";
        }
        else cout<<"CONSONANT";
    }
    else cout<<"INVALID ENGLISH ALPHABET!";
    return 0;
}