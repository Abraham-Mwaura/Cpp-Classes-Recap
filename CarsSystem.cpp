#include <iostream>
#include <string>
using namespace std;

class Cars
{
private:
    /* data */
    string companyName;
    string modelName;
    string fuelType;
    float mileage;
    double price;

public:
    Cars(/* args */)
    {
        cout << "The default constructor is called" << endl;
    }
    // called when a parameterized object is instantiated
    Cars(string cName, string mName, string ftype, float m, double p)
    {
        cout << "parameterized constructor has been called" << endl;
        companyName = cName;
        modelName = mName;
        fuelType = ftype;
        mileage = m;
        price = p;
    }
    // Called when a copied object is instantiated
    Cars(Cars &obj)
    {
        cout << "Copy constructor is called" << endl;
        companyName = obj.companyName;
        modelName = obj.modelName;
        fuelType = obj.fuelType;
        mileage = obj.mileage;
        price = obj.price;
    }

    void setData(string cName, string mName, string fType, float m, double p)
    {
        companyName = cName;
        modelName = mName;
        fuelType = fType;
        mileage = m;
        price = p;
    }

    void displayData()
    {
        cout << "Car properties" << endl
             << endl;
        cout << "Car Company : " << companyName << endl;
        cout << "Car  Model : " << modelName << endl;
        cout << "Car fuel Type: " << fuelType << endl;
        cout << "Car Mileage: " << mileage << endl;
        cout << "Car Price : " << price << endl;
    }

    ~Cars()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    // car1 used the default constructor, car2 calls the parameterized contructor
    Cars car1, car2("Toyota", "Fortuner", "Diesel", 10, 350000);

    car1.setData("Toyota", "Altis", "Petrol", 15.5, 150000);

    car1.displayData();
    car2.displayData();

    // car3 uses the  copy constructor
    Cars car3 = car1;
    car3.displayData();

    return 0;
}
