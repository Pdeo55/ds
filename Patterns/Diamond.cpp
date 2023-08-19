#include <bits/stdc++.h>
using namespace std;

void solidHalfdiamond(int n)
{
    int k = n;
    // run outer loop for rows i.e 2*n-1
    for (int i = 0; i < 2 * n - 1; i++)
    {
        // condition true is for growing stage and other is for decreasing stage
        int cond = i < n ? i : n - (i % n) - 2;
        for (int j = 0; j < cond; j++)
        {

            cout << "*";
        }
        cout<<endl;
    }
};
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    solidHalfdiamond(n);

    return 0;
}
