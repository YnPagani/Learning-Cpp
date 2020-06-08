#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>


void display(const std::vector<int> &vec){
    std::cout << "[";
    for(auto const &i : vec){
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}


void test1(){
    std::cout << "\n--------------------------------" << std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    auto i = nums1.begin();         // pointing to 1
    std::cout << *i << std::endl;
    i++;                            // pointing to 2
    std::cout << *i << std::endl;
    i += 2;                         // pointing to 4
    std::cout << *i << std::endl;
    i = nums1.end() - 1;            // end of the vector is after the last element
    std::cout << *i << std::endl;
}

void test2(){
    std::cout << "\n--------------------------------" << std::endl;
    
    std::vector<int> nums1{1,2,3,4,5};
    std::vector<int>::iterator it = nums1.begin();
    
    while(it != nums1.end()){
        std::cout << *it << std::endl;
        it++;   
    }
    
    it = nums1.begin();
    
    while(it != nums1.end()){
        *it = 0;
        it++;
    }
    display(nums1);

}

void test3(){
    std::vector<int> vec{1,2,3,4,5};
    auto it1 = vec.rbegin();            //reverse iterator starts in the last element
    while(it1 != vec.rend()){           // checks if the iterator is in the first element of the vector
        std::cout << *it1 << std::endl;
        it1++;
    }

    std::list<std::string> name {"Dudi", "Matias", "Losso"};
    auto it2 = name.crbegin();
    std::cout << *it2 << std::endl;
    it2++;
    std::cout << *it2 << std::endl;
    
    std::map<std::string, std::string> favorities{
        {"Yuri", "Cpp"},{"Losso", "Java"},{"James", "Python"}
    };

    auto it3 = favorities.begin();
    while(it3 != favorities.end()){
        std::cout << it3->first << " loves " << it3->second << std::endl;
        it3++;
    }


}

int main(){
    //test1();
    //test2();
    test3();
    return 0;
}