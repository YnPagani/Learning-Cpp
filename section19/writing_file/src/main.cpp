#include <iostream>
#include <fstream>
#include <string>


int main(){
    
    /* Creates the file if it does not exist, if it exists, then
    all it's data will be overwritten */

    std::ofstream out_file{"output.txt"};                                            // if it exists, then all it's data will be overwritten
    
    // Checks if there were no errors 

    if(!out_file.is_open()){
        std::cerr << "Error creating or opening the file" << std::endl;
        return 1;
    }

    // Gets user input and write to the file

    std::string line{};

    std::cout <<"Enter something to write to the file: ";
    std::getline(std::cin, line);

    out_file << line << std::endl;


    // Close the stream
    
    out_file.close();

    return 0;
}