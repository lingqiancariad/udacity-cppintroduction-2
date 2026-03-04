#include <iostream>
#include <vector>
#include <array>
#include <iterator>

int main() {
    // Raw C-Style Array
    std::string rsvp_classic[3] = {"yes-", "no-", "maybe-"};
    // Modern C++ Style Array
    std::array<std::string, 3> rsvp_modern = {"yes", "no", "maybe"};
    // Modern C++ Style Vector
    std::vector<std::string> rsvp_vector = {"yes+"};
    rsvp_vector.push_back("no+");
    rsvp_vector.push_back("maybe+");

    // size of Raw Array
    int arrayLength_raw = sizeof(rsvp_classic) / sizeof(rsvp_classic[0]);
    arrayLength_raw = std::size(rsvp_classic); // c++ 17
    // size of Modern Array
    int arrayLength_modern = std::size(rsvp_modern); // c++ 17
    arrayLength_modern = rsvp_modern.size();
    // size of Vector
    int vectorLength = std::size(rsvp_modern); // c++ 17
    vectorLength = rsvp_modern.size();

    //============= For-Loop ============== 
    /* C-Style Array */
    for (std::string response : rsvp_classic) {
        std::cout << response << std::endl;
    }

    for (auto response : rsvp_classic) {
        std::cout << response << std::endl;
    }
    // c-style 
    for (int i = 0; i < sizeof(rsvp_classic) / sizeof(rsvp_classic[0]); i++) {
        std::cout << rsvp_classic[i] << std::endl;
    }
    // c++ 17
    for (int i = 0; i < std::size(rsvp_classic); i++) { 
        std::cout << "Element at index " << i << " is: " << rsvp_classic[i] << std::endl;
    }

    /* Modern C++ Style Array */
     for (std::string response : rsvp_modern) {
        std::cout << response << std::endl;
    }

    for (auto response : rsvp_modern) {
        std::cout << response << std::endl;
    }
    // c-style
    for (int i = 0; i < sizeof(rsvp_modern) / sizeof(rsvp_modern[0]); i++) {
        std::cout << rsvp_modern[i] << std::endl;
    }

    for (int i = 0; i < rsvp_modern.size(); i++){
        std::cout << rsvp_modern[i] << std::endl;
    }
    // c++ 17
    for (int i = 0; i < std::size(rsvp_modern); i++) {
        std::cout << "Element at index " << i << " is: " << rsvp_modern[i] << std::endl;
    }    

    /* vector */
    for (std::string response : rsvp_vector) {
        std::cout << response << std::endl;
    }

    for (auto response : rsvp_vector) {
        std::cout << response << std::endl;
    }
    // c-style
    for (int i = 0; i < sizeof(rsvp_vector) / sizeof(rsvp_vector[0]); i++) {
        std::cout << rsvp_vector[i] << std::endl;
    }

    for (int i = 0; i < rsvp_vector.size(); i++) {
        std::cout << rsvp_vector.at(i) << std::endl;
    }
    // c++ 17
    for (int i = 0; i < std::size(rsvp_vector); i++) {
        std::cout << "Element at index " << i << " is: " << rsvp_vector[i] << std::endl;
    }

    return 0;
}