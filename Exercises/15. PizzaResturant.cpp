#include <iostream>

using namespace std;

void MakeBeefPizzaDough()
{
    cout << "Making beef pizza dough..." << endl;
}

void MakeChickenPizzaDough()
{
    cout << "Making chicken pizza dough..." << endl;
}

void MakeCheesePizzaDough()
{
    cout << "Making Cheese pizza dough..." << endl;
}

void AddBeefPizzaToppings()
{
    cout << "Adding beef pizza topping..." << endl;
}

void AddChickenPizzaToppings()
{
    cout << "Adding chicken pizza topping..." << endl;
}

void AddCheesePizzaToppings()
{
    cout << "Adding cheese pizza topping..." << endl;
}

void BakeBeefPizza()
{
    cout << "Baking beef pizza" << endl;
}

void BakeChickenPizza()
{
    cout << "Baking chicken pizza" << endl;
}

void BakeCheesePizza()
{
    cout << "Baking cheese pizza" << endl;
}

void MakeBeefPizza()
{
    MakeBeefPizzaDough();
    AddBeefPizzaToppings();
    BakeBeefPizza();
    cout << "Beef pizza done!" << endl;
}

void MakeChickenPizza()
{
    MakeChickenPizza();
    AddChickenPizzaToppings();
    BakeChickenPizza();
    cout << "Chicken pizza done!" << endl;
}

void MakeCheesePizza()
{
    MakeCheesePizza();
    AddCheesePizzaToppings();
    BakeCheesePizza();
    cout << "Cheese pizza done!" << endl;
}

int main()
{
    int choice;
    cout << "Choose which pizza you want to make:"
         << "1) Beef.\n"
         << "2) Chicken.\n"
         << "3) Cheese." << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        MakeBeefPizza();
        break;
    case 2:
        MakeChickenPizza();
        break;
    case 3:
        MakeCheesePizza();
    default:
        cout << "Incorrect pizza choice!" << endl;
        break;
    }

    return 0;
}