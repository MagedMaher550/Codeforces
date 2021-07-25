#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n , x , y;
    cin>>n>>x>>y;

    if( ((double)x/(double)n) >= ((double)y/(double)100))
        cout<<0;

    else
        cout<<ceil(double(n*y)/double(100)) - x;

}
