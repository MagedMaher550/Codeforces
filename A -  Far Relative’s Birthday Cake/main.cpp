#include <iostream>

using namespace std;

int main()
{
    int n , count = 0 , count2 = 0 , res = 0;
    cin>>n;

    char cake[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>cake[i][j];

    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                {
                    if(cake[i][j] == 'C')
                        count++;

                    if(cake[j][i] == 'C')
                        count2++;
                }
                res += ( count * (count-1) )/2 + ( count2 * (count2-1) )/2;
                count = 0;
                count2 = 0;
        }

        cout<<res;
    return 0;
}
