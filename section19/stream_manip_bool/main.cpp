#include <iostream>
#include <iomanip>

int main(){
    
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 10): " << (10 == 20) << std::endl;

    // set to true/false format

    std::cout << std::boolalpha; // change to true/false format for all bool values following this line

    std::cout << "boolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10 == 10): " << (10 == 20) << std::endl;

    std::cout << std::noboolalpha; // back to 1/0 format for the following lines

    std::cout << "boolalpha - default (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10 == 10): " << (10 == 20) << std::endl;


    std::cout << std::endl;

    return 0;

}