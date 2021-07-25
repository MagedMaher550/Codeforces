#include <iostream>

using namespace std;
//A. Buy a Shovel

int main()
{
    int k , r , i = 1;
    cin>>k>>r;

    while(k*i%10 != 0 && k*i%10 != r)
            i++;

    cout<<i;
    return 0;
}
