#include <bits/stdc++.h>
using namespace std;

void fullPyramid(int n)
{
    for (int r = 0; r < n; r++)

    {
        int k = 0;
        for (int c = 0; c < (2 * n) - 1; c++)
        {
            if (c < (n - r - 1))
            {
                cout << " ";
            }
            else if (k < (2 * r + 1))
            {
                cout << "*";
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void HollowPyramid(int n)
{
    for (int r = 0; r < n; r++)

    {
        int k = 0;
        for (int c = 0; c < (2 * n) - 1; c++)
        {
            if (c < (n - r - 1))
            {
                cout << " ";
            }
            else if (k < (2 * r + 1))
            {
                // k is used to print * now for hollow we fetch boundary conditions
                if (k == 0 || k == 2 * r || r == n - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void HollowInvertedHalfPyramid(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (c == 0 || r == 0 || c == (n - r - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void NumericHollowHalfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++) // catch is there
        {
            if (j == 0 || j == i || i == n - 1)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void InvertedNumericHalfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n + 1; j++) // catch is here
        {
            if (j == n || j == i + 1 || i == 0)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void EquiPalindromicPyramid(int n)
{
    int k = n;
    // run outer loop for rows i.e i
    for (int i = 0; i < n; i++)
    {
        // run inner loop for coulums that will be 2n-1
        int c = 1;
        for (int j = 0; j < k; j++)
        {

            // now print the spaces that are from coloum 0 to n-i-1

            if (j < (n - i - 1))
            {
                cout << " ";
            }

            // printing count in incrsing order upto n-1
            else if (j <= (n - 1))
            {
                cout << c;
                c++;
            }
            // when it is n decresing c-2 and printing it
            else if (j == n)
            {
                c = c - 2;
                cout << c;
                c--;
            }
            else
            {
                cout << c;
                c--;
            }
        }
        k++;
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    EquiPalindromicPyramid(n);
    InvertedNumericHalfPyramid(n);
    // NumericHollowHalfPyramid(n);
    // fullPyramid(n);
    // cout << endl;
    // HollowInvertedHalfPyramid(n);
    // cout << endl;
    // HollowPyramid(n);

    return 0;
}
