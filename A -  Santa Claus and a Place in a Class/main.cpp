#include <iostream>
using namespace std;

int main()
{
    long n , m , k;

    cin>>n>>m>>k;
    if(k%2 == 0)
        {
            k --;
            cout<< (k / (2*m) ) + 1<<" "<< (k % (2 * m)) / 2 + 1 <<" R";
        }

    else
        cout<< (k / (2*m) ) + 1<<" "<< (k % (2 * m)) / 2 + 1 <<" L";



    return 0;
}
