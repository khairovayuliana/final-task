
#include <string>
#include <iostream>

class Vampire {
protected:
    std::string name;
    int age;
    bool isAlive;
    int hungerLevel;

public:
    Vampire(const std::string& name, int age);
    
    // Геттеры и сеттеры
    std::string getName() const;
    void setName(const std::string& newName);
    int getAge() const;
    void setAge(int newAge);
    bool getIsAlive() const;
    int getHungerLevel() const;

    void drinkBlood();
};
