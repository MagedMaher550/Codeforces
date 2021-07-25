#include <iostream>
using namespace std;

bool isLucky(string s , int k)
{
    int count = 0;
    for(int i=0; i<s.length(); i++)
        {
            if( (s[i] == '4' || s[i] == '7'))
                count++;
        }
    if(count > k)
        return false;
    else
        return true;
}

int main()
{
    int n , k , count = 0;
    string s;
    cin>>n>>k;

    for(int i=0; i<n; i++)
        {
            cin>>s;
            if(isLucky(s , k))
                count++;
        }
        cout<<count;
    return 0;
}
