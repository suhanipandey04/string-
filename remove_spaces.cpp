#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string modify(string& s) {
        string result = "";

        
        for (int i = 0; i < s.length(); i++) 
        {
            if (s[i] != ' ') 
            {     
                result = result + s[i];   
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    string s1 = "geeks  for geeks";
    cout << "Original: " << s1 << endl;
    cout << "Modified: " << sol.modify(s1) << endl;

    string s2 = "    g f g";
    cout << "Original: " << s2 << endl;
    cout << "Modified: " << sol.modify(s2) << endl;

    return 0;
}
