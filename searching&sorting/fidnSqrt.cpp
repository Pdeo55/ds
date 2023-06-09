#include <bits/stdc++.h>
using namespace std;
int sqrt(int n)
{
    int s = 0;
    int e = n;
    int m = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (m * m == n)
        {
            return m;
        }
        if (m * m > n)
        {
            e = m - 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
int main()
{

    int n;
    cin >> n;

    cout << "absolute square root is " << sqrt(n);
    return 0;
}