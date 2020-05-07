#include <iostream>
#include <iomanip>

int main(){

    double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};


    std::cout << "--Defaults-------------------" << std::endl;

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    std::cout << "--Setprecision 2-------------------" << std::endl;

    std::cout << std::setprecision(2);      // only 2 digits of the number will appear, if the number is really big,
                                            // it will appear in scientific notation
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;


    std::cout << "--Setprecision 5-------------------" << std::endl;

    std::cout << std::setprecision(5);      
    
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    std::cout << "--Setprecision 3 and fixed-------------------" << std::endl;

    std::cout << std::setprecision(3) << std::fixed;    // the precision will be applied to the digits after the decimal point

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    std::cout << "--Setprecision 3 and scientific-------------------" << std::endl;
    
    std::cout << std::setprecision(3) << std::scientific;    // the precision will be applied to the digits after the decimal point

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    std::cout << std::endl;

    return 0;
}