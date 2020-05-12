#include <iostream>
#include <fstream>
#include <string>

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

    in_file >> line >> num >> total;

    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;
    
    in_file.close();

    std::cout << std::endl;

    return 0;
}

