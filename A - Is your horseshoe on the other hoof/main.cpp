#include <iostream>
#include <set>
using namespace std;

int main()
{
    long long int a;
    set<long long int> h;
    for(int i=0; i<4; i++)
        {
            cin>>a;
            h.insert(a);
        }
    cout<<4 - h.size();
    return 0;
}
