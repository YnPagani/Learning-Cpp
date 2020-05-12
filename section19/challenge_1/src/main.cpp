// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

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

    const int total_width{70};
    const int field1_width{20};     // country name
    const int field2_width{20};     // city name
    const int field3_width{15};     // population
    const int field4_width{15};     // cost

    characters_colunms();

    // Display the report title header centered in width of total_width
    
    int title_length = tours.title.size();
    std::cout << std::setw((total_width - title_length)/2) << "" << tours.title << std::endl << std::endl;

    std::cout << std::setw(field1_width) << std::left << "Country"
              << std::setw(field2_width) << std::left << "City"
              << std::setw(field3_width) << std::right << "Population"
              << std::setw(field4_width) << std::right << "Price"
              << std::endl;  

    std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;

    // Reset the filling character to blank space and set the decimal precision to 2
    
    std::cout << std::setfill(' ');                     
    std::cout << std::setprecision(2) << std::fixed;

    // Show the table with all the data from the tours

    for(Country Country : tours.countries){
        for(size_t i{0}; i < Country.cities.size(); i++){
            
            std::cout << std::setw(field1_width) << std::left << ((i == 0) ? Country.name : "")
                      << std::setw(field2_width) << std::left << Country.cities.at(i).name
                      << std::setw(field3_width) << std::right << Country.cities.at(i).population
                      << std::setw(field4_width) << std::right << Country.cities.at(i).cost
                      << std::endl;
        }
    }


    std::cout << std::endl << std::endl;
    return 0;
}

void characters_colunms(){
    std::cout << "123456789|123456789|123456789|123456789|123456789|123456789|123456789|" << std::endl << std::endl;
}
