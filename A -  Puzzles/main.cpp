#include <iostream>
#include <algorithm>
#define floop(i,a,b) for(int i=a; i<b; i++)

using namespace std;

int main()
{
    int n , m , ans;
    cin >>n>>m;
    int puzzles[m];

    floop(i,0,m)
        cin>>puzzles[i];

    sort(puzzles , puzzles + m);

    ans = puzzles[n-1] - puzzles[0];

    floop(i,1,m-n+1)
        if (puzzles[i+n-1] - puzzles[i] < ans)
            ans = puzzles[i+n-1] - puzzles[i];

    cout<<ans;
    return 0;
}
