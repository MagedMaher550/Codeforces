#include <iostream>

using namespace std;

bool win(string s)
{
    bool x = true;
    for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '0')
                {
                    x = false;
                    break;
                }
        }
return x;
}

int main()
{
    int n , d , count = 0 , max = 0;
    cin>>n>>d;
    string s;

    for(int i=0; i<d; i++)
        {
            cin>>s;
            if(!win(s))
                count++;
            else
                count = 0;

            if(count >= max)
                max = count;
        }
        cout<<max;
    return 0;
}
