#include <bits/stdc++.h>
using namespace std;

void PasclesTriangle(int n)
{
    //    1
    //    1 2 1
    //    1 3 3 1
    //    1 4 6 4 1
    //    1 5 10 10 5 1

    // it is formed by bionomial coeffient formula

    // formula c=c*(i-j)/j    where i =[1,n] j =[1,i]

    for (int i = 0; i < n; i++)
    {
        int c = 1;
        for (int j = 0; j < n - i; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {

            cout << c << " ";
            c = c * (i - j) / (j + 1);
        }
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    PasclesTriangle(n);

    return 0;
}
