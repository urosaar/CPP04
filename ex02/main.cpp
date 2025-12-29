#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int n = 4;
    Animal* animals[n];
    
    for (int i = 0; i < n / 2; i++)
        animals[i] = new Dog();
    for (int i = n / 2; i < n; i++)
        animals[i] = new Cat();
    for (int i = 0; i < n; i++)
        animals[i]->makeSound();
    for (int i = 0; i < n; i++)
        delete animals[i];

    return 0;
}

