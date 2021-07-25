#include <iostream>

using namespace std;

int main()
{
        int a1 , a2 , a3 , b1 , b2 , b3 , n;
        cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;

        int a = (a1+a2+a3+4)/5;
        int b = (b1+b2+b3+9)/10;


        if( a + b <= n)
            cout<<"YES";
        else
            cout<<"NO";

    return 0;
}
