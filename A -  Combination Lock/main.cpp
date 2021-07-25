#include <iostream>
#include <cstdlib>

using namespace std;

int get(int a , int b)
{
    int x = abs(a-b);
    int y = 10 - x;

return int(min(x,y));
}

int main()
{
    int n;
    string state , comb;
    cin>>n>>state>>comb;

    int a , b , count = 0;
    for(int i=0; i<n; i++)
        {
            a = 48 - state[i];
            b = 48 - comb[i];
            count += get(a,b);
        }
        cout<<count;

    return 0;
}
