#include <iostream>

using namespace std;

int main()
{
    long n;
    int x , y;
    cin>>n;
    long lc1 = 0 , lc2 = 0 , rc1 = 0 , rc2 = 0;

    for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            if(x == 0)
                lc1++;
            else
                lc2++;

            if(y == 0)
                rc1++;
            else
                rc2++;
        }

        cout<<min(lc1,lc2) + min(rc1,rc2);

    return 0;
}
