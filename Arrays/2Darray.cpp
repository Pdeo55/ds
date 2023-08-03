// counting 0's and 1's in the array
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
    cout<<"Printing 2d matrix :-"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printRowwiseSum(int arr[3][3], int row, int col)
{
    cout<<"Printing row wise sum :-"<<endl;
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum = sum +arr[i][j];
        }
        cout <<sum << endl;
    }
}
void printColwiseSum(int arr[3][3], int row, int col)
{
    cout<<"Printing col wise sum :-"<<endl;
    for (int i = 0; i < col; i++)
    {
        int sum=0;
        for (int j = 0; j < row; j++)
        {
            sum = sum +arr[j][i];
        }
        cout <<sum << endl;
    }
}

bool findKey(int arr[3][3], int row, int col,int key)
{
    
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if(arr[i][j]==key){
                return true;
            }
        }
        
    }
    return false;
}

void getMax(int arr[3][3], int row, int col)
{
    int maxi=INT_MIN;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (arr[i][j]>maxi)
            {
                maxi=arr[i][j];
            }
            
            
        }
    }
    cout<<"maximum of MAtrix is :- "<<maxi<<endl;
}
void getMin(int arr[3][3], int row, int col)
{
    int mini=INT_MAX;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (arr[i][j]<mini)
            {
                mini=arr[i][j];
            }
            
            
        }
    }
    cout<<"manimum of MAtrix is :- "<<mini<<endl;
}
int main(int argc, char const *argv[])
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    int key=55;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArray(arr, row, col);
    printRowwiseSum(arr, row, col);
    printColwiseSum(arr, row, col);

    if(findKey(arr,row,col,key)){
        cout<<"key is present in matrix"<<endl;
    }else{
         cout<<"key is not present in matrix"<<endl;
    }


    getMax(arr, row, col);
    getMin(arr, row, col);

    vector<vector<int>> arrVEC(row, vector<int>(col, -8));
    
    for (int i = 0; i < arrVEC.size(); i++)
    {
        for (int j = 0; j < arrVEC[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
