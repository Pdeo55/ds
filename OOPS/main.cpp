#include <bits/stdc++.h>
using namespace std;

class Animal{

    private:
    int weight;
    public:
    int age;
    string name;

    void sleep(){
        cout<<"sleeping"<<endl;

    }  
    void eat(){
        cout<<"eating"<<endl;
        
    }

    void setWeight(int weight){
        this->weight=weight;
    }
    int getWeight(){
        return weight;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    //static allocation

    // Animal ramesh;

    // ramesh.sleep();
    // ramesh.eat();

    // ramesh.age=44;

    // cout<<ramesh.age;
    // ramesh.setWeight(55);
    // cout<<endl;
    // cout<<ramesh.getWeight();



    // dynamic allocation

    Animal* suresh =new Animal;

    // as the suresh is created in heap and its pointer is in stack so suresh has adreess of class

    // (*suresh).age=13;

    suresh->age=13;
    cout<<suresh->age;


    return 0;
}
