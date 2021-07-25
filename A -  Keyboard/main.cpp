#include <iostream>
using namespace std;

int main()
{
    string s , keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c>>s;

    if(c == 'L')
    {
        for(int i=0; i <s.length(); i++)
        {
            for(int j=0; j <keyboard.length(); j++)
            {
                if(s[i] == keyboard[j])
                {
                    cout<<keyboard[j + 1];
                    break;
                }
            }
        }
        cout<<"\n";
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            for(int j=0; j<keyboard.length(); j++)
            {
                if(s[i] == keyboard[j])
                {
                    cout<<keyboard[j - 1];
                    break;
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}
