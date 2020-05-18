#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>



class Student{
public:
    std::string name;
    std::string responses;
    int score;

    Student(std::string name = "", std::string responses = "", int score = 0);
    ~Student();
};

Student::Student(std::string name, std::string responses, int score)
    : name{name}, responses{responses}, score{score} {
        
}
Student::~Student(){}

void show_log(std::vector<Student> &vec);               // fuction to display a formatted report  


int main(){

    // Declare and initialize the stream with correspondent file

    std::ifstream in_file;
    in_file.open("responses.txt");

    // Verifies if there is any problem with the stream

    if(!in_file.is_open()){
        std::cerr << "Error trying to open the file" << std::endl;
    }
    
    /* Extract each student name and responses from the stream,
    then compare it with the tests answers to give every student an score */
    
    std::string answers{};
    std::vector<Student> log{};

    in_file >> answers;

    while(!in_file.eof()){
        Student temp{};
        in_file >> temp.name >> temp.responses;

        for(size_t i{0}; i < answers.size(); i++){
            if(answers.at(i) == temp.responses.at(i)){
                temp.score += 1;
            }
        }
        log.push_back(temp);
    }

    show_log(log);

    return 0;
}

void show_log(std::vector<Student> &vec){
    int const SIZE = 20;
    std::cout << std::setw(SIZE) << std::left << "Students" 
              << std::setw(SIZE) << std::right << "Score" 
              << std::endl;
    std::cout << std::setw(2 * SIZE) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');

    for(size_t i{0}; i < vec.size(); i++){
        std::cout << std::setw(SIZE) << std::left << vec.at(i).name
                  << std::setw(SIZE) << std::right << vec.at(i).score
                  << std::endl;    
    }
}