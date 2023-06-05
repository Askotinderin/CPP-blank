#include "main.hpp"

int main (int argc, char** argv) {

    for (int i = 0; i < argc; i++)
        std::cout << argv[i] << std::endl;

    std::cout << "Program finished successfuly" << std::endl;

    return 0;
}