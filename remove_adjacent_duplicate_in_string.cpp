#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    string ans = "";
    int index = 0;

    while (index < s.length()) {
        if (!ans.empty() && ans.back() == s[index]) {
            ans.pop_back();
        } else {
            ans.push_back(s[index]);
        }
        index++;
    }
    return ans;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = removeDuplicates(input);
    cout << "String after removing adjacent duplicates: " << result << endl;

    return 0;
}