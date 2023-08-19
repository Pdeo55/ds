#include <bits/stdc++.h>
using namespace std;

void SolidSquare(int n){
  for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
}
// handle just edge rows
void HollowSquare(int n){
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                if(r==0||r==(n-1)||c==0||c==(n-1)){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
            
        }
        
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    SolidSquare(n);
    cout<<endl;
    HollowSquare(n);
  
    
    return 0;
}
