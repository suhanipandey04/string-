#include<iostream>
using namespace std;
 string revstr(string s)
 {
    int i=0;
    int j=s.length()-1;

    while(i<=j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
 }
 int main()
 {
    string s = "hello";

    cout << "Original string: " << s << endl;
    cout << "Reversed string: " << revstr(s) << endl;

    return 0;
 }