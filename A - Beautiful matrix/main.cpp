#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x = 0 , ans;

    for(int i=1; i<=5; ++i)
    {
        for(int j=1; j<=5; ++j)
        {
            cin>>x;
            if (x == 1)
            {
                ans = abs(i - 3) + abs(j - 3);
            }
        }
    }
    cout<<ans;
    return 0;
}
