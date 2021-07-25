#include <iostream>

using namespace std;

int main()
{
    long n , tmp = 1 , row = 1, height = 0 , i = 0;
    cin>>n;

    while(n >= 0)
        {
            if(i >= tmp)
                {
                    tmp = ( row * (row+1) )/2;
                    n -= tmp;
                    height++;
                    row++;
                }
            i++;
        }
        cout<<height-1;

    return 0;
}
