#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::ifstream in_file;
    std::string line;
    char c;
    in_file.open("poem.txt");

    if(!in_file){
        std::cerr << "Problem opening the file" << std::endl;
        return 1;
    }

    // Reading character by character of the file and displaying it
     
    while(in_file.get(c)){          // true  - if gets the character from the file
        std::cout << c;             // false - if it's the end of the file or there was a problem reading the character
    }



    in_file.close();
    std::cout << std::endl << std::endl;
    return 0;
}