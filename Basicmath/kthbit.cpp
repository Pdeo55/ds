#include <bits/stdc++.h>
using namespace std;

int setkthbit(int n, int k)
{
    int maskValue = 1 << k;
    int an = n | maskValue;
    return an;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n;
    cin >> k;

    cout << setkthbit(n, k);

    return 0;
}
