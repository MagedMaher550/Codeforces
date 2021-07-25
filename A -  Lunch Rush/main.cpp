#include <iostream>

using namespace std;

int main()
{
    long n , k , f , t , fTmp , fMax;
    cin>>n>>k;

    for(int i=0; i<n; i++)
        {
            cin>>f>>t;

            if(t <= k)
                fTmp = f;
            else
                fTmp = f - t + k;

            if(i == 0)
                fMax = fTmp;

            if(fTmp > fMax)
                fMax = fTmp;
        }

        cout<<fMax;
    return 0;
}
