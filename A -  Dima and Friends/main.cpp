#include <iostream>
#define floop(i,a,b) for(int i=a; i<b; i++)
using namespace std;

int main()
{
    int n , x , sum = 0 , ans = 0;
    cin>>n;

    floop(i,0,n)
    {
        cin>>x;
        sum += x;
    }
    n++;

    floop(i,1,6)
    {
        if( (sum + i)%n != 1)
            ans++;
    }

    cout<<ans;
    return 0;
}
