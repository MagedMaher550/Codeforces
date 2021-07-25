#include <iostream>

using namespace std;

bool isInt(float k)
{
    if( k == (int) k)
        return true;
    return false;
}
int main()
{
    int n , m , res , Max = 0 , count = 0;
    cin>>n;
    double a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

    cin>>m;
    double b[m];

        for(int i=0; i<m; i++)
            cin>>b[i];

    for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                {
                    if(isInt(b[j]/a[i]) && b[j]/a[i] > Max)
                        {
                            Max = b[j]/a[i];
                            count = 0;
                            //cout<<b[j]<<" "<<a[i]<<endl;
                        }
                    if(isInt(b[j]/a[i]) && b[j]/a[i] == Max)
                        count++;
                }
        }
        cout<<count;
    return 0;
}
