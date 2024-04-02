
#include <iostream>
#include "Date.h"
#include "GoodsC.h"
#include "GoodsO.h"

int main() {
    Date today(2024, 3, 1);
    Date dateOfBirth("2000.12.31");

    std::cout << "Today's date: " << today;
    std::cout << std::endl;

    std::cout << "Date of birth: " << dateOfBirth;
    std::cout << std::endl;

    std::cout << "Is today a leap year? " << (today.isVisok() ? "Yes" : "No") << std::endl;
    std::cout << "Is today before date of birth? " << (today.isBefore(dateOfBirth) ? "Yes" : "No") << std::endl;
    std::cout << "Is today after date of birth? " << (today.isAfter(dateOfBirth) ? "Yes" : "No") << std::endl;

    GoodsO item;
    std::cin >> item;

    std::cout << "\nItem information:" << std::endl;
    std::cout << "Name: " << item.getName() << std::endl;
    std::cout << "Cost: " << item.getCost() << std::endl;
    std::cout << "Amount: " << item.getAmount() << std::endl;
    std::cout << "Nomer: " << item.getNomer() << std::endl;
    std::cout << "Date Nad: " << item.getDateNad();
    std::cout << std::endl;
    std::cout << "Date Oform: " << item.getDateOform();
    std::cout << std::endl;

    std::cout << "Total cost: " << item.calc() << std::endl;

    GoodsC itemC;
    std::cin >> itemC;

    std::cout << "\nItemC information:" << std::endl;
    std::cout << "Name: " << itemC.getName() << std::endl;
    std::cout << "Cost: " << itemC.getCost() << std::endl;
    std::cout << "Amount: " << itemC.getAmount() << std::endl;
    std::cout << "Nomer: " << itemC.getNomer() << std::endl;
    std::cout << "Date Nad: " << itemC.getDateNad();
    std::cout << std::endl;
    std::cout << "Date Oform: " << itemC.getDateOform();
    std::cout << std::endl;

    std::cout << "Total cost: " << itemC.calc() << std::endl;

    return 0;
}