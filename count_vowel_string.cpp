//count number of vowel strings
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        map<char, int> a;

        a['a'] = 1;
        a['e'] = 1;
        a['i'] = 1;
        a['o'] = 1;
        a['u'] = 1;

        for (int i = left; i <= right; i++) {
            char first = words[i][0];
            char last = words[i][words[i].size() - 1];

            if (a.find(first) != a.end() && a.find(last) != a.end()) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    vector<string> words = {"apple", "orange", "banana", "umbrella", "ice"};
    int left = 0, right = 4;

    int result = sol.vowelStrings(words, left, right);
    cout << "Number of vowel strings: " << result << endl;

    return 0;
}