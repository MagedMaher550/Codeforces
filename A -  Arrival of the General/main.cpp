#include <iostream>
using namespace std;

int main()
{
    int n , Max , Min , h , maxIndex = 0 , minIndex = 0, ans;
    cin>>n;

    for(int i=0; i<n; i++)
        {
            cin >> h;
            if(i == 0)
                Max = Min = h;

            if (Max < h)
                {
                    Max = h;
                    maxIndex = i;
                }
            if (Min >= h)
             {
                Min = h;
                minIndex = i;
             }
        }

    ans = maxIndex + (n - minIndex - 1);

    if (maxIndex > minIndex)
        ans--;

    cout << ans;
}
