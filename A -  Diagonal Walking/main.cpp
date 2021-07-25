#include <iostream>
#include<string.h>
using namespace std;

int main(){

	int n, count = 0;
	cin >> n;
	string s;
	cin >> s;

	for (int i = 1; i < n; ++i)
        {
            if ((s[i] == 'U' && s[i - 1] == 'R') || (s[i] == 'R' && s[i - 1] == 'U'))
             {
                s[i] = 'D';
                count++;
             }
        }

	cout << n-count;
	return 0;
}
