//given two string s and t to check that s1 is the substring of t1 or not

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();

        if (m < n) {
            return false;
        }

        int j = 0; // pointer for s
        for (int i = 0; i < m && j < n; i++) {
            if (s[j] == t[i]) {
                j++;
            }
        }

        return (j == n);
    }
};

int main() {
    Solution sol;
    
    string s1 = "abc";
    string t1 = "ahbgdc";

    string s2 = "axc";
    string t2 = "ahbgdc";

    cout << s1 << " is subsequence of " << t1 << "? " 
         << (sol.isSubsequence(s1, t1) ? "Yes" : "No") << endl;

    cout << s2 << " is subsequence of " << t2 << "? " 
         << (sol.isSubsequence(s2, t2) ? "Yes" : "No") << endl;

    return 0;
}
