#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n , x , sum2 = 0 , sum = 0 , count = 0;
    cin>>n;
    int coins[n];

    for(int i=0; i<n; i++)
        {
            cin>>coins[i];
            sum += coins[i];
        }

    sort(coins , coins + n);
    reverse(coins , coins+n);

    for(int i=0; i<n; i++)
        {
            sum2 += coins[i];
            count++;
            if(sum2 > sum/2)
               break;
        }

        cout<<count;
    return 0;
}
