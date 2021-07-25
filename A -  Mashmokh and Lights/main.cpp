#include <iostream>
using namespace std;

int main()
{
    int n , m , t;
    cin>>n>>m;

    int lights[n+1] = {0};

    for(int i=0; i<m; i++)
    {
        cin>>t;
        for (int j=t; j<=n; j++)
            if (lights[j] == 0)
                lights[j] = t;
    }

    for (int i=1; i<=n; i++)
        cout << lights[i] << " ";

    return 0;
}
