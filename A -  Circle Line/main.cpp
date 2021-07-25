#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n , s , t , minStation , maxStation , d1 = 0 , d2 = 0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cin>>s>>t;
    if(s >= t)
        {
            maxStation = s - 1;
            minStation = t - 1;
        }
    else if(s < t)
        {
            maxStation = t - 1;
            minStation = s - 1;
        }

    if(maxStation - minStation== 0)
        cout<<0;
    else
        {
            for(int i= minStation; i<maxStation; i++)
                d1 += arr[i];

            for(int i=maxStation; i<n; i++)
                d2 += arr[i];

            for(int i=0; i<minStation; i++)
                d2 += arr[i];

            cout<<min(d1 , d2);
        }

    return 0;
}
