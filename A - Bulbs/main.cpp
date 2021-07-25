#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n , m , x , y;
    set<int> bulbs;
    cin>>n>>m;

    for(int i=0; i<n; i++)
        {
            cin>>x;
            for(int i=0; i<x; i++)
                {
                    cin>>y;
                    bulbs.insert(y);
                }

        }
        if(bulbs.size() == m)
            cout<<"YES";
        else
            cout<<"NO";
    return 0;
}
