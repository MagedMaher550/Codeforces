#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> name;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
        name.insert(s[i]);

    if(name.size()%2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
