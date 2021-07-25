#include <iostream>

using namespace std;

int main()
{
    int n , k , res , Min;
    cin>>n;
    int customers[n];

    for(int i=0; i<n; i++)
        cin>>customers[i];

    for(int i=0; i<n; i++)
        {
            res = 0;
            for(int j=0; j<customers[i]; j++)
                {
                    cin>>k;
                    res += 5 * k;
                }
                res += 15 * customers[i];

                if(i == 0)
                    Min = res;

                if(res < Min)
                    Min = res;
        }

        cout<<Min;

    return 0;
}
