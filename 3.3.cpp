#include <iostream>
#include <iomanip>
#include "mytemperature.h"

int main() {
    cout << std::fixed << std::setprecision(2); 
    cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius\n";
    for (double c = 40.0; c >= 31.0; c--) {
        double f = celsius_to_fah(c);
        std::cout << c << "\t\t" << f << "\t\t|\t";

        double f2 = 120 - 10 * (40 - c);  
        double c2 = fahrenheit_to_cels(f2);
        std::cout << f2 << "\t\t" << c2 << std::endl;
    }
    return 0;
}