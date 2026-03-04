/*
Write a program that tracks how many pages a student read each day over a week.

This version uses a vector instead of a fixed-size array.

The program should:
1. Ask the user to enter 7 values (pages read each day)
2. Store those values in a std::vector
3. Print how many pages were read each day
4. Print the total pages read at the end
*/

#include <iostream>
#include <vector>

#define  DAYS  7

int main() {
    std::vector<int> pages;
    int read_total = 0;
    int read_daily = 0;

    std::cout << "Enter pages read each day (7 days):\n";

    for (int i = 0; i < DAYS; i++) {
        std::cout << "Give your daily read pages at Day " << i+1 << std::endl;
        std::cin >> read_daily;
        pages.push_back(read_daily); 
    }
    
    for (int i=0 ; i < pages.size(); i++) {
        std::cout << "Read Pages at Day " << i+1 << " is " << pages.at(i) << std::endl;
        read_total += pages.at(i);
    }

    std::cout << "\nTotal pages: " << read_total << std::endl;

    return 0;
}