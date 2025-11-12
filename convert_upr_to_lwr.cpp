#include<iostream>
using namespace std;
 string convert(string s)
 {
   int index=0;
   while(index<s.length())
    {
        if(s[index]>='A'&&s[index]<='Z')
        {
            s[index]=s[index]-'A'+'a';
        }
        index++;
    }
    return s;
 }
 int main()
 {
    string s = "HELLO";

    cout << "Original string: " << s << endl;
    cout << "converted string: " << convert(s) << endl;

    return 0;
 }