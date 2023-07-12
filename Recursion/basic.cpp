#include <iostream>
#include <limits.h>
using namespace std;

void maxiEle(int arr[], int i, int n, int &ans)
{

    // base case
    if (i >= n)
    {
        return;
    }

    if (arr[i] > ans)
    {
        ans = arr[i];
    }

    maxiEle(arr, i + 1, n, ans);
}

void printDigits(int n) {
        //base case
        cout << "Prining value of n "  << n << endl;
        if(n == 0 ) {
                return ;
        }

        //baaaki recursion sambhal lega
        printDigits( n / 10);

        //1 case main solve karunga
        int digit = n % 10;
        cout << digit << " ";
}

int main()
{

    int arr[6] = {10, 56, 99, 44, 959, 55};
    int n = 6;
    int i = 0;
    // cout << "Enter the value of n  " << endl;
    // cin >> n;

    // int ans  = factorial(n);
    int ans = INT_MIN;
    maxiEle(arr, i, n, ans);

    cout << ans;

    return 0;
}