/*
Miles Brodie
CS20A -- Section 4452
Project #1.2

This program
*/


#include <iostream>
using namespace std;


// Parent class
class Animal
{
public:
    int age;
    string name;

    Animal(){
    }

    void set_age(int a){
        age = a;
    }

    void set_name(string n){
        name = n;
    }
};

// Child class -- Zebra
class Zebra: public Animal
{
public:
    string place_of_birth = "Africa";

    Zebra(string n, int a){
        name = n;
        age = a;
    }
};


// Child class -- Dolphin
class Dolphin: public Animal
{
public:
    string place_of_birth = "Ocean";

    Dolphin(string n, int a){
        name = n;
        age = a;
    }
};


int main()
{
    string n;
    int a;

    cout << "Enter Zebra's Name: ";
    cin >> n;
    cout << "Enter Zebra's Age: ";
    cin >> a;
    Zebra z(n, a);

    cout << endl;

    cout << "Enter Dolphin's Name: ";
    cin >> n;
    cout << "Enter Dolphin's Age: ";
    cin >> a;
    Dolphin d(n, a);

    cout << endl;

    cout << "Zebra Name: " << z.name << endl;
    cout << "Zebra Age: " << z.age << endl;
    cout << "Zebra Place of Birth: " << z.place_of_birth << endl;

    cout << endl;

    cout << "Dolphin Name: " << d.name << endl;
    cout << "Dolphin Age: " << d.age << endl;
    cout << "Dolphin Place of Birth: " << d.place_of_birth << endl;

    return 0;
}