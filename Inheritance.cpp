#include <iostream>
using namespace std;

class parentClass
{
private:
    /* data */
public:
    int var1 = 100;
    parentClass(/* args */);
    ~parentClass();
};

// The ChildClass inherits the ParentClass
class childClass : public parentClass
{
public:
    int var2 = 500;
};

int main()
{
    childClass obj;
    
    cout << obj.var1 << endl;
    //Child class can access variables of parent class.
    cout << obj.var2 << endl;
}
