#include <iostream>
#include <fstream>
#include <string>



int main(){

    /* creates the file if it does not exist, if it exists, 
    then all it's data will be overwritten */

    std::ofstream out_file{"output.txt"};

    // Checks if there were no errors

    if(!out_file.is_open()){
        std::cerr << "Problem creating or opening the file" << std::endl;
        return 1;
    }

    // Takes the user input and writes it into the file

    std::string line{};

    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line);

    out_file << line << std::endl;

    // Closes the stream

    out_file.close();

    return 0;
}