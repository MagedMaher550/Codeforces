#include <iostream>
using namespace std;

int main()
{
    int n , sum = 0;
    cin>>n;

    int arr[n];
    bool check[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<sizeof(check); i++)
        check[i] = false;

    for(int i=0; i<n; i++)
        sum += arr[i];

    sum /= (n/2);


    for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                {
                    if(arr[i] + arr[j] == sum && i != j && (check[i] == false && check[j] == false) )
                        {
                            cout<<i+1<<" "<<j+1<<endl;
                            check[i] = check[j] = true;
                        }

                }
        }
    return 0;
}
