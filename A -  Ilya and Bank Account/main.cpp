#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s , s2;
    cin>>s;

    if(s[0] != '-')
        cout<<s;

    else
        {
            if( int(s[s.length()-1]) >= int(s[s.length()-2]))
                s2 = s.substr(0,s.length()-1);
            else
                s2 = s.substr(0,s.length()-2) + s[s.length()-1];

            if(s2 == "-0")
                cout<<0;
            else
                cout<<s2;
        }
    return 0;
}
