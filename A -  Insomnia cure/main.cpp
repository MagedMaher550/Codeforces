#include <iostream>

using namespace std;
//A. Insomnia cure

int main()
{
    int k , l , m , n;
    long d , count = 0;

    cin>>k>>l>>m>>n>>d;

    for(int i=1; i<=d; i++)
        if((i%k == 0) || (i%l == 0) || (i%m == 0) || (i%n == 0))
            count++;

    cout<<count;
    return 0;
}
