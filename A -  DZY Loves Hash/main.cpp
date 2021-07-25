#include <iostream>
#include <set>

using namespace std;

int main()
{
    int p , n , x , ans = -1;
    cin>>p>>n;
    set<int> check;

    for(int i=1; i<=n; i++)
        {
            cin>>x;
            x = x%p;
            check.insert(x);

            if(check.size() != i)
                {
                    ans = i;
                    break;
                }
        }

    cout<<ans;
    return 0;
}
