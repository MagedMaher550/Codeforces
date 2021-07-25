#include<iostream>

using namespace std;

int main()
{
    int n , pos , ans;
    bool x;

    cin>>n;
    int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];

    for(int i=0; i<n; i++)
    {
        x = false;

        if(a[0]>15)
            ans = 15;

        else
        {
            for(int i=1; i<n; i++)
            {
                if(a[i]-a[i-1]>15)
                {
                    pos = i-1;
                    x = true;
                    break;
                }
            }
            if(x)
                ans = a[pos] + 15;

            else
                ans = a[n-1] + 15;
        }
        if(ans>90)
            {
                cout<<90<<endl;
                break;
            }

        else
            {
                cout<<ans<<endl;
                break;
            }

    }
    return 0;
}
