#include <iostream>

using namespace std;

int main()
{
    long x , y , z;
    cin>>x>>y>>z;

    if(x+y <= z )
        cout<<2*x+2*y;

    else if(y+z <= x)
        cout<<2*z+2*y;

    else if(x+z <= y)
        cout<<2*z+2*x;

    else
        cout<<x+y+z;

    return 0;
}
