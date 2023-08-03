#include <bits/stdc++.h>
using namespace std;

long long int factorial(int n){
    long long int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

bool is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// find all prime numbers upto n
vector<int> prime_no_upto_N(int n)
{
    vector<int> arr;

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            arr.push_back(i);
        }
    }

    return arr;
}


vector<int> fibonaaci(int n){
    vector<int> arr;

    int prev=0;
    int curr=1;
    arr.push_back(prev);
    arr.push_back(curr);

    for (int i = 2; i < n; i++)
    {
        
        int next =prev+curr;
        arr.push_back(next);
        prev=curr;
        curr=next;
       

    }
    return arr;
}

//union of fibonaacci and prime numbers

void unionofprime_fibonacci(int n)
{
vector<int> a= prime_no_upto_N(n);
vector<int> b= fibonaaci(n);

set<int> set1;

for(const int &nums:a){
set1.insert(nums);
}

for(const int &nums:b){
set1.insert(nums);
}

for(const int &nums:set1){
    cout<<nums<<" ";
}
}

///  general functions

void printVector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout<<"factorial is="<<factorial(n)<<endl;

    vector<int> arr = prime_no_upto_N(n);
    printVector(arr);
    cout<<endl;

    vector<int> arr1 = fibonaaci(n);
    printVector(arr1);

   cout<<endl;
    unionofprime_fibonacci(n);
    return 0;
}
