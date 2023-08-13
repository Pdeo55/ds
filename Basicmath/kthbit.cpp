#include <bits/stdc++.h>
using namespace std;

int setkthbit(int n, int k)
{
    int maskValue = 1 << k;
    // creaitng new number with k asid postion if k =2 then it is 10
    int an = n | maskValue;
    //or ing with mask no so that 0 will turn into 1
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
