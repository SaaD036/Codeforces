#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
	cin >> n >> s;

	if(s == string(n, s[0])){
		cout << s[0];
	}
	else{
        for(char i : {'B', 'G', 'R'}){
            if(count(s.begin(), s.end(), i) != n - 1)
                cout << i;
        }
	}
}
