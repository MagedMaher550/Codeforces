#include <iostream>
using namespace std;

string shift(string s)
{
    char tmp = s[s.length()-1];
    for(int i=s.length()-1; i>0; i--)
            s[i] = s[i-1];

    s[0] = tmp;
    return s;
}

int cycle(string s)
{
    int count = 0;
    string tmp = s;

    while(true)
        {
            s = shift(s);
            if(s == tmp)
                break;
            count++;
        }
return count +1;
}

int main()
{
    string s;
    cin>>s;

    cout<<cycle(s);
    return 0;
}
