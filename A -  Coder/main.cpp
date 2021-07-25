#include <iostream>

using namespace std;

string mulString(string s , int n)
{
    string tmp = s;
    for(int i=1; i<n; i++)
        s += tmp;
    return s;
}

int main()
{
    int n;
    cin >> n;

    string row1 = "C.", row2 = ".C", res;

    row1 = mulString(row1, n / 2);
    row2 = mulString(row2, n / 2);

    if(n == 1)
        cout<<1<<endl<<'C';

    else if (n % 2 == 0)
    {
        cout << n * n / 2 << endl;
        res = row1 + '\n' + row2 + '\n';
        res = mulString(res, n / 2);
        cout << res;
    }
    else
    {
        cout << (n * (n / 2 + 1) - n / 2) << endl;
        row1 += 'C';
        row2 += '.';
        res = row1 + '\n' + row2 + '\n';
        res = mulString(res, n / 2);
        res += row1;
        cout << res;
    }

    return 0;
}
