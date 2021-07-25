#include <iostream>

using namespace std;

int main()
{
    int n , x , count = 0 , chest = 0 , biceps = 0 , back = 0;
    cin>>n;

    for(int i=0; i<n; i++)
        {
            cin>>x;
            if(count == 0)
                chest += x;
            else if(count == 1)
                biceps += x;
            else if(count == 2)
                back += x;

            count++;
            count %= 3;
        }

    if(chest > biceps && chest > back)
        cout<<"chest";
    else if(back > biceps && back > chest)
        cout<<"back";
    else
        cout<<"biceps";

    return 0;
}
