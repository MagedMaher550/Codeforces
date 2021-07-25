#include <iostream>
using namespace std;

int get(string s)
{   int x;
    for(int i=0; i<s.length(); i++)
        if(s[i] == '^')
            x = i;
    return x;
}

int main()
{
    string s;
    cin>>s;
    long long int right = 0 , left = 0 , q = get(s);
    bool x = true;

    for(int i=0; i<q; i++)
        if(s[i] != '=' )
                left += (s[i] - 48) * (q - i);

    for(int i=q; i<s.length(); i++)
        if(s[i] != '=')
            right += (s[i] - 48) * (i - q);

        if(right > left)
            cout<<"right";
        else if(right < left)
            cout<<"left";
        else
            cout<<"balance";
    return 0;
}
