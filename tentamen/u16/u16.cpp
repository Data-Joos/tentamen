#include <iostream>

using namespace std;

class Person
{
    public:
    int age;
    string name;
    string gender;

};

int main() 
{
    Person person1;
    person1.name = "Josefina";
    person1.age = 29;
    person1.gender = "Kvinna";

    cout<<person1.name<<endl<<person1.age<<endl<<person1.gender<<endl;

    return 0;
}