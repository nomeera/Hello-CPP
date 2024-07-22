#include <iostream>

using namespace std;

// Abstract class
class Pizza
{
private:
    void MakeDough()
    {
        cout << "Making dough for " << GetType() << " pizza!" << endl;
    }
    void AddToppings()
    {
        cout << "Adding toppings for " << GetType() << " pizza!" << endl;
    }
    void Bake()
    {
        cout << "Baking " << GetType() << "pizza!" << endl;
    }

protected:
    // pure virtual function
    // virtual to enable polymorphism (virtual function tables)
    virtual const char *GetType() = 0; // meaning of abstract base class (zero meaning that function does not have defintion until another class inherit from it.

public:
    void MakePizza()
    {
        MakeDough();
        AddToppings();
        Bake();
        cout << GetType() << " pizza completed." << endl;
    }
};

// Derived classes
class BeefPizza : public Pizza
{
protected:
    // Override pure function
    virtual const char *GetType()
    {
        return "beef";
    }
};

class ChickenPizza : public Pizza
{
protected:
    virtual const char *GetType()
    {
        return "chicken";
    }
};

class CheesePizza : public Pizza
{
protected:
    virtual const char *GetType()
    {
        return "cheese";
    }
};

class MushroomPizza : public Pizza
{
protected:
    virtual const char *GetType()
    {
        return "mushroom";
    }
};
// By having a separate MakePizza function, you can reuse this function anywhere in your code without rewriting the logic to make a pizza
//  It clearly indicates that the purpose of the function is to make a pizza, regardless of the specific type of pizza.
void MakePizza(Pizza *p)
{
    p->MakePizza();
}

int main()
{
    // Pizza b; this not allowed because pizza class is abstract class (not have value)
    Pizza *p = NULL; // I know that user want pizza but I don't know its type.
    int type;
    cout << "Choose which pizza you want to make:\n"
         << "1) Beef.\n"
         << "2) Cheese.\n"
         << "3) Chicken.\n"
         << "4) Mushroom." << endl;
    cin >> type;

    switch (type)
    {
    case 1:
        p = new BeefPizza;
        break;
    case 2:
        p = new CheesePizza;
        break;
    case 3:
        p = new ChickenPizza;
        break;
    case 4:
        p = new MushroomPizza;
    default:
        cout << "Incorrect pizza choice!" << endl;
        break;
    }

    if (p)
        MakePizza(p);

    delete p;

    return 0;
}