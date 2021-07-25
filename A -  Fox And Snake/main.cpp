#include <iostream>
using namespace std;

int main()
{
    int n, m , r = 1;
    bool x = false;
    cin>>n>>m;

    while(r <= n)
    {
        if(r%2 == 1)
        {
            for(int i=0; i<m; i++)
                cout << "#";
            cout << endl;
        }
        else if(r%2 == 0 && x == false)
        {
            for(int j=0; j<m-1; j++)
                cout << ".";
            cout << "#" << endl;
            x = true;
        }
        else
        {
            cout << "#";
            for(int j=0; j<m-1; j++)
                cout << ".";
            cout << endl;
            x = false;
        }
        r++;
    }
    return 0;
}
