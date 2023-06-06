#include <bits/stdc++.h>
using namespace std;

bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

// find max numbaer
int maxNumber(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minNumber(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// print extreams
int Extreams(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {

       
        
        cout << arr[start]<<" ";
        cout << arr[end]<<" ";
        start++;
        end--;
    }
}

int Reverse(int arr[],int size){
    int start = 0;
	int end = size-1;

	while(start<=end) {

		//step1:
		swap(arr[start], arr[end]);
		//step:2
		start++;
		//step3
		end--;
		
	}


	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
    return 0;
}

int main()
{
    int arr[6] = {1, 5, 6, 7, 55, 9};
    int size = 6;
    // 1)
    //    int key;
    //    cout<<"enter the key to find:- ";
    //    cin>>key;
    //    if(find(arr,size,key)){
    //     cout <<"Found"<<endl;
    //    }
    //    else{
    //     cout<<"not found";
    //    }

    //  2) find the maximum

    cout << "Maximum of array is:- " << maxNumber(arr, size) << endl;

    //  2) find the manimum

    cout << "Minimum of array is:- " << minNumber(arr, size) << endl;
    cout << "printing extreams array is:- " << Extreams(arr, size) << endl;
    cout << "printing Reverse array is:- "<< Reverse(arr, size) << endl;

    return 0;
}
