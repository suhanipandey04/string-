#include<iostream>
using namespace std;
 string convert(string s)
 {
   int index=0;
   while(index<s.length())
    {
        if(s[index]>='a'&&s[index]<='z')
        {
            s[index]=s[index]-'a'+'A';
        }
        index++;
    }
    return s;
 }
 int main()
 {
    string s = "hello";

    cout << "Original string: " << s << endl;
    cout << "converted string: " << convert(s) << endl;

    return 0;
 }