#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string seat[n] , s;
    bool x = false;

    for(int i=0; i<n; i++)
        cin>>seat[i];

    for(int i=0; i<n; i++)
        {
            s = seat[i];
            if( (s[0] == 'O' && s[1] == 'O') )
                {
                    s[0] = '+';
                    s[1] = '+';
                    x = true;
                    seat[i] = s;
                    break;
                }
            else if( (s[3] == 'O' && s[4] == 'O') )
                {
                    s[3] = '+';
                    s[4] = '+';
                    x = true;
                    seat[i] = s;
                    break;
                }

        }

        if(!x)
            {
                cout<<"NO";
            }
        else
            {
                cout<<"YES"<<endl;
                for(int i=0; i<n; i++)
                    cout<<seat[i]<<endl;
            }

    return 0;
}
