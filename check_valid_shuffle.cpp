#include <iostream>
#include <vector>
#include <string>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    string str = s; // Initialize with same length
    for (int i = 0; i < s.length(); i++) {
        str[indices[i]] = s[i];
    }
    return str;
}

int main() {
    string s = "codeleet";
    vector<int> indices = {4,5,6,7,0,2,1,3};

    string result = restoreString(s, indices);
    cout << "Restored string: " << result << endl;

    return 0;
}