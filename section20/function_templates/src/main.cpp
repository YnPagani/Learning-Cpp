#include <iostream>
#include <string>


template <typename T>
T min(T a, T b){
    return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
    std::cout << a << " " << b << std::endl;
}

struct Person{
    std::string name;
    int age;

    // necessary since the compiler doesn't know how to compare two Person obj

    bool operator<(const Person &rhs){
        return  (this->age) < (rhs.age);
    }
};

std::ostream& operator<<(std::ostream &os, const Person &obj){
        os << obj.name << " " << obj.age;
        return os;
    }


int main(){

    std::cout << min<int>(2,3) << std::endl;
    std::cout << min(2,3) << std::endl;
    std::cout << min('A','B') << std::endl;
    std::cout << min(12.3,39.2) << std::endl;
    std::cout << min(5+2*2,7+40) << std::endl;

    Person p1{"Ronald", 50};
    Person p2{"Dudi", 32};

    Person p3 = (p1 < p2) ? p1 : p2;
    std::cout << p3 << std::endl;


    func<int, int>(10, 20);
    func(10,20);
    func<char, double>('A', 12.4);
    func(2000, "testing");
    func(1000, std::string("Frank"));

    return 0;
}