#include <iostream>
#include <iomanip>
#include <string>

void ruler(){       // characters columns indexes 
    std::cout << "\n1234567890123456789012345678901234567890" << std::endl;
}

int main(){

    int num1{1234};
    double num2{1234.5678};

    std::string hello{"Hello"};

    std::cout <<"----Defaults------------------------------------------------------------" << std::endl;
    ruler();

    std::cout << num1 << num2 << hello << std::endl << std::endl;

    std::cout <<"----width 10 for num1---------------------------------------------------" << std::endl;
    ruler();

    std::cout << std::setw(10) << num1 << num2 << hello << std::endl << std::endl;

    std::cout <<"----width 10 for num1, num2---------------------------------------------" << std::endl;
    ruler();

    std::cout << std::setw(10) << num1 << std::setw(10) << num2 << hello << std::endl << std::endl;


    std::cout <<"----width 10 for num1, num2 + num1 left justify-------------------------" << std::endl;
    ruler();


    std::cout << std::setw(10) << std::left << num1 << std::setw(10) << num2 << hello << std::endl << std::endl;



    std::cout <<"----width 10 for num1, num2 + num1 left justify + fill with dash--------" << std::endl;
    ruler();

    std::cout << std::setfill('-');
    std::cout << std::setw(10) << std::left << num1 << std::setw(10) << num2 << hello << std::endl << std::endl;

    std::cout << std::endl;

    return 0;
}