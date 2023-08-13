#include <bits/stdc++.h>
using namespace std;


//function oveloading
class Math{
        public:
        
        int sum(int a,int b){
            return a+b;
        }

        int sum(int a,int b,int c){
            return a+b+c;
        }

};

//operator overloading

class param{
    public:
    int val;

    void operator+(param& obje2){
            int v1=this->val;
            int v2=obje2.val;

            cout<< v1+v2<<endl;

    }


};
int main(int argc, char const *argv[])
{
    Math ram;

    cout<<ram.sum(4,5)<<endl;
    cout<<ram.sum(4,5,6);


    cout<<"-------------------------"<<endl;

    param obje1 ,obje2;
    obje1.val=44;
    obje2.val=12;

    obje1+obje2;
    return 0;
}
