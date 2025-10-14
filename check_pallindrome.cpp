#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char lowercase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
            return ch;
        else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkpallindrome(string a) {
        int s = 0;
        int e = a.length() - 1;
        while (s <= e) {
            if (a[s] != a[e]) {
                return false;
            } else {
                s++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(lowercase(s[j]));
            }
        }
        return checkpallindrome(temp);
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a string to check for palindrome: ";
    getline(cin, input);

    if (sol.isPalindrome(input)) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "The string is not a valid palindrome." << endl;
    }

    return 0;
}