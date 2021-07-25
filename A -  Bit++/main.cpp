#include <iostream>

using namespace std;

bool check(string s)
{
    bool x = true;
    for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '-')
                {
                    x =  false;
                    break;
                }
        }
return x;
}
int main()
{
    int n , count = 0;
    cin>>n;
    string s;

    for(int i=0; i<n; i++)
        {
            cin>>s;
            if(check(s))
                count++;
            else
                count--;
        }
        cout<<count;
    return 0;
}
