#include <iostream>

using namespace std;

int main()
{
        int a , b , c , d;
        cin>>a>>b>>c>>d;

        int misha = max( (double)(3*a)/(double)10 , a - ( (double)a/(double)250 ) * c );
        int vasya = max( (double)(3*b)/(double)10 , b - ( (double)b/(double)250 ) * d );

        if(misha > vasya)
            cout<<"Misha";

        else if(vasya > misha)
            cout<<"Vasya";

        else
            cout<<"Tie";

    return 0;
}
