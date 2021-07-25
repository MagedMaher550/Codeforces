#include <iostream>

using namespace std;

int main()
{
    int n , count1 = 0 , count2 = 0;
    string s;
    cin>>n>>s;
    bool x = true;

    for(int i=0; i<n; i++)
        {
            if(s[i] != '4' && s[i] != '7')
                {
                    x = false;
                    break;
                }
             if(i < n/2)
                count1 += s[i] - 48;
             else
                count2 += s[i] - 48;
        }

        if(x && count1 == count2)
            cout<<"YES";
        else
            cout<<"NO";

    return 0;
}
