
#include <iostream>

int main()
{
	float price, percent, tax, priPercent,perPrice, priTax, finale;
	std::cout << "Please input the price: $";
	std::cin >> price;
	std::cout << "Please input the mark up percent as a decimal: ";
	std::cin >> percent;
	std::cout << "Please input the sales tax as a decimal: ";
	std::cin >> tax;
	priPercent = price * percent;
	perPrice = price + priPercent;
	priTax =  perPrice * tax;
	finale = perPrice + priTax;
	std::cout << "\n Original price of item: $" << price;
	std::cout << "\n Mark-up percentage: %" << percent;
	std::cout << "\n Sales tax rate: %" << tax;
	std::cout << "\n The final price of the item with tax should be: $" << finale;


}
