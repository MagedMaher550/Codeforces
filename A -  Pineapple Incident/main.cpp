#include <iostream>

using namespace std;

int main()
{
    long t , s , x , tmp;
    cin>>t>>s>>x;

    if(t == x || ((x-t)%s == 0 || (x-t-1)%s == 0) && (x-t)/s>0)
    cout<<"YES";

    else
    cout<<"NO";

        return 0;
}
