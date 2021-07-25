#include <iostream>

using namespace std;

int main()
{
    long k , n , w , cost = 0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
        cost += i*k;

    if(cost <= n)
        cout<<0;
    else
        cout<<cost-n;

    return 0;
}
