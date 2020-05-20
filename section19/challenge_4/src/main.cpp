#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){

    std::ifstream in_file{"romeoandjuliet.txt"};
    std::ofstream out_file{"romeoandjuliet_line.txt"};

    if(!in_file.is_open() || !out_file.is_open()){
        std::cerr << "Problem with streams" << std::endl;
        return 1;
    }

    std::string line{};
    int line_number{1};

    while(!in_file.eof()){
        std::getline(in_file, line);
        
        if(line == ""){
            out_file << std::setw(10) << std::left << " " << line << std::endl;            
        }
        else{
            out_file << std::setw(10) << std::left << line_number << line << std::endl;
            line_number++;            
        }
    }
    std::cout << "Process done!" << std::endl;
    
    in_file.close();
    out_file.close();

    return 0;
}