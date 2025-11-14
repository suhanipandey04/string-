#include <iostream>
#include <string>
using namespace std;

int expand(string s, int i, int j) {
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j]) {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s) {
    int totalcount = 0;
    for (int i = 0; i < s.length(); i++) {
        // odd length palindromes
        int j=i;
        int oddans=expand(s,i,j);
        // even length palindromes
        j=i+1;
        int evenans=expand(s,i,j);

        totalcount=totalcount+oddans+evenans;
    }
    return totalcount;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = countSubstrings(s);
    cout << "Total palindromic substrings: " << result << endl;

    return 0;
}