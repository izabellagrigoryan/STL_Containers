// Operators_for Map.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

using namespace std;
class Person
{
public:
    string name;
    string surname;
    int age;
    
    Person(string name, string surname, int age):name(name), surname(surname), age(age){}

    bool operator==(const Person& obj)
    {
        if (name == obj.name && surname == obj.surname && age == obj.age)
            return true;

        return false;
    }
    
};

template<> struct less<Person>
{
    bool operator() (const Person& person1, const Person& person2) const
    {
        return person1.age < person2.age;
    }
};

template<typename T1, typename T2>
std::ostream& operator<<(std::ostream& os, const std::pair<T1, T2> &obj)
{
        os << obj.first.name << " " << obj.first.surname << " is from country - " << obj.second << ", age: " << obj.first.age;

        return os;
}

void init_map(std::map<Person, std::string> &m_map)
{
    Person person1("Arsen", "Sargsyan", 22);
    Person person2("Sargis", "Davtyan", 23);
    Person person3("Armen", "Zaqaryan", 25);
    Person person4("Arsen", "Sargsyan", 21);

    m_map.insert(std::make_pair(person1, "Germany"));
    m_map.insert(std::make_pair(person2, "England"));
    m_map.insert(std::make_pair(person3, "Russia"));
    m_map.insert(std::make_pair(person4, "Georgia"));
}

void print_map(std::map<Person, std::string> &map)
{
    auto it = map.begin();

    while (it != map.end())
    {       
        std::cout << *it << std::endl;
        it++;
    }
}

int main()
{
    std::map<Person, std::string> m_map;

    init_map(m_map);
    print_map(m_map);
}
