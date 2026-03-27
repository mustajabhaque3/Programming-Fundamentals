#include <iostream>
using namespace std;

int main() {
    string input, result = "";
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    cout << "Input: " << input << endl;
    
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;  // Keep non-vowel
        }
    }
    
    cout << "Output: " << result << endl;
    
    return 0;
}