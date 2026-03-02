#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s;

    // Read full line including spaces
    cout << "Enter a string: ";
    getline(cin, s);

    stringstream ss(s);
    string word;
    vector<string> words;
    // Extract words (automatically ignores multiple spaces)
    while (ss >> word) {
        words.push_back(word);
    }
    // Print words in reverse order
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i];
        if (i != 0) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
