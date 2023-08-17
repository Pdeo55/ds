#include <bits/stdc++.h>
using namespace std;

int quetiont(int divident, int divisor)
{
    int s = 0;
    int e = divident;
    int mid = e - (s + e) / 2;

    int ans = 0;

    while (s <= e)
    {
        if (mid * divisor == divident)
        {
            return mid;
        }
        if (mid * divisor > divident)
        {
            /// so we have to decrese mid and go left side
            e = mid - 1;
            mid = s + (e - s) / 2;
        }
        else
        {
            /// so we have to decrese mid and go right side
            s = mid + 1;
            ans = mid;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}
int main(int argc, char const *argv[])
{
    int divident = 42;
    int divisor = 7;

    cout << quetiont(abs(divident), abs(divisor));
    return 0;
}
