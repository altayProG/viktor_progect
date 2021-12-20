#include "fraction.h"

void Fraction::enter_numenator()
{
    std::cout << "Enter numenator: ";
    int n;
    std::cin >> n; 
    numerator = n;
}
void Fraction::enter_denominator()
{
    std::cout << "Enter denominator: ";
    int n;
    std::cin >> n; 
    denominator = n;
}
void Fraction::show_drob()
{
    std::cout << "Fraction:\n";
    std::cout << numerator << std::endl;
    std::cout << "- \n";
    std::cout << denominator << std::endl;
}
