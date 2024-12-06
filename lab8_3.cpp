#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age, height, bou;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;
        if (height >= 180)
        {
            cout << "Enter your bounty: ";
            cin >> bou;
            if (bou <= 1100000000)
            {
                name = "Sanji";
            }
            else
            {
                name = "Zoro";
            }
        }
        else if (height < 180)
        {
            name = "Usopp";
        }
        if (height < 100)
        {
            name = "Chopper";
        }
    }
    else if (age <= 60)
    {
        cout << "Enter your bounty: ";
        cin >> bou;
        if (bou > 500000000)
        {
            name = "Jinbe";
        }
        else if (bou <= 500000000)
        {
            name = "Franky";
        }
    }
    else if (age > 60)
    {
        name = "Brook";
    }
    cout << "Your character = " << name;
    return 0;
}
