#include <iostream>
#include <vector>
using namespace std;

bool anagram(string s1, string s2)
{
    if (s1.length() != s2.length()) {
        return false;
    }

    vector<int> count(256, 0);  // ASCII character frequency

    for (int i = 0; i < s1.length(); i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1 = "listen";
    string s2 = "silent";

    cout << boolalpha << anagram(s1, s2) << endl;  // Output: true
}