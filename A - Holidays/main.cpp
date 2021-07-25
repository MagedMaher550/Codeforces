#include <iostream>

using namespace std;

int main()
{
    long n;
    cin>>n;

    int tmp = 0;

    if(n%7 ==0 && n >=7)
        cout<<2*(n/7)<<" "<<2*(n/7);

    else if(n < 7)
        {
            if(n == 1)
                cout<<0<<" "<<1;

            else if(n>1 && n<6)
                cout<<0<<" "<<2;

            else
                cout<<1<<" "<<2;
        }

    else
        {
            if(n%7 == 1)
                cout<<2*(n/7)<<" "<<2*(n/7)+1;

            else if(n%7>1 && n%7<6)
                cout<<2*(n/7)<<" "<<2*(n/7)+2;

            else
                cout<<2*(n/7)+1<<" "<<2*(n/7)+2;
        }


    return 0;
}
