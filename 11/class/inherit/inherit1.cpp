#include <bits/stdc++.h>
using namespace std;

// reference:https://roadmap.sh/cpp
class Animal {
public:
    void breathe() {
        std::cout << "I can breathe" << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.breathe(); // Output: I can breathe
    myDog.bark(); // Output: Dog barks!    
    return 0;
}