#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n , x , sum = 0 , t , left;
    cin>>n>>x;

    for(int i=0; i<n; i++)
        {
            cin>>t;
            sum += t;
        }

    if(sum == 0)
        cout<< 0 ;

    else
        {
            if(abs(sum) <= x)
                cout<<1;

            else if(abs(sum) > x && abs(sum)%x == 0)
                cout<<abs(sum) / x;

            else
                cout<<abs(sum) / x + 1;

        }

    return 0;
}
