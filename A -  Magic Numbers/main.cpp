#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    bool x = true , y = true , z = true;

    for(int i=0; i<s.length(); i++)
        {
            if(s[i] != '1' && s[i] != '4')
                x = false;

            else if(s[i] != '1')
                if(i < 1 || (s[i] == '4' && s[i-1] != '1') )
                    {
                        y = false;
                        if(i < 2  ||(s[i] == '4' && s[i-1] == '4' && s[i-2] != '1'))
                            z = false;

                        if(!(y||z))
                            x = false;
                    }
        }
        if(x)
            cout<<"YES";
        else
            cout<<"NO";
    return 0;
}
