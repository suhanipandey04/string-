#include <iostream>
#include <string>
#include <vector>
using namespace std;

int firstrepeatingChar(string s) {
    vector<int> count(256, 0);  // Frequency array for ASCII characters

    for (int i = 0; i < s.length(); i++) {
        count[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (count[s[i]] >1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int index = firstrepeatingChar(input);
    cout<<index<<endl;

    
    return 0;
}
//for non repeating character change the if condition count[s[i]]==0 return i
   