#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::ifstream in_file;
    std::string line;

    in_file.open("poem.txt");

    if(!in_file){
        std::cerr << "Problem opening the file" << std::endl;
        return 1;
    }

    // Reading line by line of the file and displaying it

    while(std::getline(in_file, line)){         // if we have a problem trying to read the line
        std::cout << line << std::endl;         // or it's the end of the file, then we have false
    }



    in_file.close();
    std::cout << std::endl;
    return 0;
}