#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){

    std::ifstream in_file;
    
    std::string line{};
    int num{};
    double total{};

    /* for this path to work with debug and build, in launch.json, "cwd" must be "${workspaceFolder}/src/",
    othewise it will only work with build */
   
    in_file.open("test.txt");          

    if(!in_file){
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    // Reading data from test.txt and formatting the output

    while(!in_file.eof()){              // eof() return true if it is in the end of the file         
        
        in_file >> line >> num >> total;

        std::cout << std::setw(10) << std::left << line
                << std::setw(10) << num
                << std::setw(10) << total
                << std::endl;
    }


    in_file.close();

    std::cout << std::endl;

    return 0;
}

