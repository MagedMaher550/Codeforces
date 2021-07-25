#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int mlOfDrink = k*l;

    int noOfToast = mlOfDrink/nl;
    int noOfLimes = c*d;
    int amountOfSalt = p/np;

    cout<<min(min(noOfToast , noOfLimes) , amountOfSalt)/n;
    return 0;
}


