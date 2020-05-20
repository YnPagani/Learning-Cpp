#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::ifstream in_file{"poem.txt"};
    std::ofstream out_file{"poem_copy.txt"};

    if(!in_file.is_open() || !out_file.is_open()){
        std::cerr << "Stream error" << std::endl;
        return 1;
    }

    std::string line{};

    while(!in_file.eof()){
        std::getline(in_file, line);
        out_file << line << std::endl;
    }
    std::cout << "File copied!" << std::endl;

    in_file.close();
    out_file.close();


    return 0;
}