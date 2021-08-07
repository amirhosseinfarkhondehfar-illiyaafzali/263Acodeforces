#include <iostream>

using namespace std;

int main()
{
    string s[5][5];
    int x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == "1")
            {
                if (i < 3)
                {
                    x = 4-i;
                }
                else
                {
                    x=i;
                }
                 if (j < 3)
                {
                    y = 4-j;
                }
                else
                {
                    y=j;
                }
            }
        }
    }
    int result=(x-2)+(y-2);
    cout << result << endl;
}
