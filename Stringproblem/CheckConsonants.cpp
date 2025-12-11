#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int countConsonants(string str){
    int count = 0;

    for(int i = 0; i < str.length(); i++){
        char c = tolower(str[i]);

        // Check alphabet
        if(c >= 'a' && c <= 'z'){
            // Check NOT vowel
            if(!isVowel(c)){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string str;
    cout << "Enter string: ";
    cin >> str;

    cout << "Consonants: " << countConsonants(str);
}
