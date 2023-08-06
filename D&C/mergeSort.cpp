#include <bits/stdc++.h>
using namespace std;

void mergeArray(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    // create two new arrays i.e left and rigth of to diff lenght that is 0->mid and mid+1->end

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // creat dynamic array wkth new
    int *left = new int[len1];
    int *right = new int[len2];

    // copy elements of left array ie from 0 to mid of main array into left new created array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    // copy elements of right array ie from mid+1 -> end of main array into right new created array
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // lets right now merging logic that is based on two pointer aaporach we just compare right and left array elements
    //  add it into the array in sorted format if any of the list gr=et empty first we will just append
    // remianng elements into it directly

    int leftkaindex = 0; //pointer index
    int rightkaindex = 0;
    int mainkaindex = s;
    // jabtak do me se ek array khatam nahi hota tabtak add kro
    while (leftkaindex < len1 && rightkaindex < len2)
    {
        if (left[leftkaindex] < right[rightkaindex])
        {
            arr[mainkaindex++] = left[leftkaindex++];
        }
        else{
              arr[mainkaindex++] = right[rightkaindex++];
        }
    }
    //if right is over then add all left into array first check current index on left or right is less than size or not
    while(leftkaindex<len1){
           arr[mainkaindex++] = left[leftkaindex++];
    }
     //if left is over then add all right into array
    while(rightkaindex<len2){
           arr[mainkaindex++] = right[rightkaindex++];
    }
}

void mergeSort(int *arr, int s, int e)
{

    // base case banao i.e s==e ->jab array me ek hi element ho to wo sorted hai to use return karo
    //  s>e-> ye koi array hi nahi hai
    if (s >= e)
    {
        return;
    }

    // step 1 mid nikalo
    int mid = (s + e) / 2;

    // break kro and sort karo left and right arrays ko jo recurrsion sambhal lega

    mergeSort(arr, s, mid);

    // right wala do
    mergeSort(arr, mid + 1, e);

    // arrays merge krdo
    mergeArray(arr, s, e);
}

int main(int argc, char const *argv[])
{
    int arr[5] = {3, 2, 45, 16, 21};
    int n = 5;

    int s = 0;
    int e = n - 1;

    mergeSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
