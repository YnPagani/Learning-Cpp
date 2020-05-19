#include <iostream>
#include <fstream>
#include <string>


int main(){
    std::string user_word{};
    std::ifstream in_file;
    in_file.open("romeoandjuliet.txt");

    if(!in_file.is_open()){
        std::cerr << "Error opening the file" << std::endl;
        return 1;
    }

    std::cout << "Enter the word to be searched for: ";
    std::cin >> user_word;

    int word_counter{};
    int find_counter{};

    while (!in_file.eof()){
        std::string word{};
        in_file >> word;

        size_t found = word.find(user_word);    // Search for substring user_word in word
        if(found != std::string::npos){         // if found it - return the position of the first character of the substring in word
            find_counter++;                     // if does not found it - return npos
        }
        word_counter++;
    }


    std::cout << std::endl;
    std::cout << word_counter << " words were searched..." << std::endl;
    std::cout << "The substring " << user_word << " was found " << find_counter << " times" << std::endl << std::endl;

    in_file.close();
    
    
    return 0;
}