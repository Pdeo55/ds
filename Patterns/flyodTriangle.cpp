#include <bits/stdc++.h>
using namespace std;

void flyodTriangle(int n)
{
    //    1
    //    2 3
    //    4 5 6
    //    7 8 9 10
    int c = 1;
    for (int i = 0; i <= n; i++)
    {
        // condition true is for growing stage and other is for decreasing stage

        for (int j = 0; j < i; j++)
        {

            cout << c << " ";
            c++;
        }
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    flyodTriangle(n);

    return 0;
}
