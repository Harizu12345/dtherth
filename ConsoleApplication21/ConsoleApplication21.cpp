#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//1

/*
int main() {
    ifstream cppcFile("cppc.txt");

    if (!cppcFile.is_open()) {
        cout << "error cppc.txt\n";
        return 1;
    }

    string line;
    int maxLength = 0;

    while (getline(cppcFile, line)) {
        int currentLength = line.length();
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    cppcFile.close();

    cout << "long: " << maxLength << " symbol\n";

    return 0;
}
*/


//2

int main() {
    ifstream cppcFile("cppc.txt");

    if (!cppcFile.is_open()) {
        cout << "error cppc.txt\n";
        return 1;
    }

    string wordToFind;
    cout << "enter ur word: ";
    cin >> wordToFind;

    string word;
    int count = 0;

    while (cppcFile >> word) {
        for (char& c : word) {
            c = tolower(c);
        }
        if (word == wordToFind) {
            count++;
        }
    }

    cppcFile.close();

    cout << "word " << wordToFind << " occurs " << count << " in file\n";

    return 0;
}