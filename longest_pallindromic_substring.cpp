#include <iostream>
#include <string>
using namespace std;

int expand(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1; // Length of the palindrome
}

string longestPalindrome(string s) {
    if (s.empty()) return "";

    int start = 0;
    int maxlength = 0;

    for (int i = 0; i < s.length(); i++) {
        int len1 = expand(s, i, i);     // Odd length palindrome
        int len2 = expand(s, i, i + 1); // Even length palindrome
        int len = max(len1, len2);

        if (len > maxlength) {
            start = i - (len - 1) / 2;
            maxlength = len;
        }
    }

    return s.substr(start, maxlength);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = longestPalindrome(input);
    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}