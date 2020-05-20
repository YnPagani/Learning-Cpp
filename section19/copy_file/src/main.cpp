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

    char c;

    while(!in_file.eof()){
        in_file.get(c);
        out_file.put(c);
    }
    std::cout << "File copied!" << std::endl;

    in_file.close();
    out_file.close();


    return 0;
}