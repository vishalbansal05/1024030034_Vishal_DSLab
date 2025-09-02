#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (!isVowel(ch))
            result += ch;
    }
    cout << "String without vowels: " << result << endl;
    return 0;
}
