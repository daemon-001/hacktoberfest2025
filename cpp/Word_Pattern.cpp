#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int n = word.length();

    // Upper half (including middle)
    for (int i = 0; i < n; i++) {
        cout << string(n - i - 1, ' ') << word.substr(0, i + 1) << "\n";
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--) {
        cout << string(n - i - 1, ' ') << word.substr(0, i + 1) << "\n";
    }

    return 0;
}
