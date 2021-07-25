#include <iostream>

using namespace std;

char maxC(string s)
{
    int max = 0;
    for(int i=0; i<s.length(); i++)
        {
            if(int(s[i] > max))
                max = int(s[i]);
        }
return char(max);
}

int countChar(string s , char c)
{
    int count = 0;
    for(int i=0; i<s.length(); i++)
        {
            if(s[i] == c)
                count++;
        }
return count;
}

string mulString(char c , int n)
{
    string s = "";
    for(int i=0; i<n; i++)
        s += c;

return s;
}

int main()
{
    string s;
    cin>>s;
    string ans = mulString(maxC(s) , countChar(s,maxC(s)));
    cout<<ans;

    return 0;
}
