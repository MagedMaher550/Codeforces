#include<iostream>
using namespace std;

int main()
{
    int k , n , g , t;
    string s;
    bool x = false;

    cin>>n>>k;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'G')
            g = i;

        else if(s[i] == 'T')
            t = i;
    }

    if(t > g)
    {
        for(int i=g; i<s.length(); i+=k)
        {
            if(s[i] == '#')
                break;

            else if(s[i] == 'T')
                x = true;
        }
    }

    else
    {
        for(int i=g; i>=0; i-=k)
        {
            if(s[i] == '#')
                break;

            else if(s[i] == 'T')
                x = true;
        }
    }

    if(x == true)
        cout<<"YES";

    else
        cout<<"NO";

    return 0;
}
