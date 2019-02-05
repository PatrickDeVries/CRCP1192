#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    int id;
    int age;
    string name;
public:
    void display()
    {
        cout << age << endl;
        cout << id <<  endl;
        cout << name << endl;
    }
    void setID(int x)
    {
        id = x;
    }
    int getID()
    {
        reutnr id;
    }
    void setAge(int x)
    {
        age = x;
    }
    int getAge()
    {
        return age;
    }
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    student Z;
    Z.setAge(26);
    Z.setID(007);
    Z.setName("Z");
    Z.display();
    return 0;
}
