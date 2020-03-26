#include <iostream>

using namespace std;

int main()
{
    unsigned long long int a, b, t ,n ,i ,j;
    string str,str1;
    cin >> t;

    for(i=0; i<t; i++)
    {
        cin >> n;
        cin >> str;
        for(j=0;j<n;j++)
        {
            if(str[j]=='2')
            {
                cout << 1;
                str1[j]='1';
            }
            else if(str[j]=='1')
            {
                cout << 1;
                str1[j]='0';
            }
            else
            {
                cout << 0;
                str1[j]='0';
            }
        }
        cout << endl;
        for(j=0;j<n;j++)
            cout << str1[j];
        cout << endl;

    }

}
