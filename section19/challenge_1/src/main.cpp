// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

const int colunm_size = 100;
const int field_size = 25;

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

void display_center(std::string const &original, int colunm_size);
void characters_colunms();
void display_header(Tours const &obj);

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami!",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    std::cout << std::setprecision(2) << std::fixed;

    characters_colunms();
    display_header(tours);
 
    for(size_t i{0}; i < tours.countries.size(); i++){
        std::cout << std::setw(field_size) << std::left << tours.countries[i].name
                  << std::setw(field_size) << std::left << tours.countries[i].cities[0].name
                  << std::setw(field_size) << std::right << tours.countries[i].cities[0].population
                  << std::setw(field_size) << std::right << tours.countries[i].cities[0].cost
                  << std::endl;
    
        for(size_t j{1}; j < tours.countries[i].cities.size(); j++){
            std::cout << std::setw(field_size) << " " << std::setw(field_size) << std::left << tours.countries[i].cities[j].name
                      << std::setw(field_size) << std::right << tours.countries[i].cities[j].population
                      << std::setw(field_size) << std::right << tours.countries[i].cities[j].cost
                      << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}




void display_center(std::string const &original, int colunm_size){
    
    int blank_space_size = (colunm_size - original.size()) / 2;
    std::string centered_string = std::string(blank_space_size, ' ') + original + std::string(blank_space_size, ' '); 
    std::cout << std::setw(colunm_size) << centered_string << std::endl;
}

void characters_colunms(){
    std::cout << "123456789|123456789|123456789|123456789|123456789|123456789|123456789|123456789|123456789|123456789|" << std::endl << std::endl;
}

void display_header(Tours const &obj){
    display_center(obj.title, colunm_size);
    std::cout << std::setfill('=') << std::setw(colunm_size) << "=" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(25) << std::left << "Countries"
              << std::setw(25) << std::left << "Cities"
              << std::setw(25) << std::right << "Population"
              << std::setw(25) << std::right << "Price";

    std::cout << std::setfill('-') << std::setw(colunm_size) << "-" << std::endl;
    std::cout << std::setfill(' ');
}