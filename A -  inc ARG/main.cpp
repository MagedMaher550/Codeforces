#include <iostream>

using namespace std;

int findZero(string s)
{
    int x = -1;
    for(int i=0; i<s.length(); i++)
        if(s[i] == '0')
            {
                x = i;
                break;
            }

    return x;
}

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    if(findZero(s) != -1)
        cout<<findZero(s)+1;
    else
        cout<<n;
    return 0;
}
