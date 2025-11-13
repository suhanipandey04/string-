//given two string s1 and s2 to check if s2 is rotation of s1
#include<iostream>
using namespace std;
bool rotatestring(string s1, string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    return (s1+ s1).find(s2) != string::npos;
}
int main()
{
   string s1="aab";
   string s2="aba";

   cout<<rotatestring(s1,s2)<<endl;

}