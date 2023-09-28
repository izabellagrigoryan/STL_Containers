// Map.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

using namespace std;
template<typename K, typename V>
void print(std::map<K, V> const& m)
{
    for (auto const& pair : m) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}

int main()
{
    std::map<string, string> countries;
    countries["Armenia"] = "Yerevan";
    countries["France"] = "Paris";
    countries["Italy"] = "Rome";
    countries["England"] = "London";
    countries["Spain"] = "Madrid";
    countries["Austria"] = "Vienna";

    print(countries);

    return 0;
}