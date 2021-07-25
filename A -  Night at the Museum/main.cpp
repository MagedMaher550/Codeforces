#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int res = 0;
    char back = 'a';

    for(int i=0; i<s.length(); i++)
        {
            res += min(abs(int(s[i]) - int(back)) , abs(26 - abs(int(s[i]) - int(back))));
            back = s[i];
        }

        cout<<res;
    return 0;
}
