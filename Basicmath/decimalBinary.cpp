#include <bits/stdc++.h>
using namespace std;


//by devide apporoach
int decimaltobinary(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {

        // int bits = n % 2;
        int bits = (n & 1);
        binaryno = bits * pow(10, i++) + binaryno;

        // n = n / 2;
        n=n>>1;
    }
    return binaryno;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int decimal = decimaltobinary(n);
    cout << decimal;
    return 0;
}
