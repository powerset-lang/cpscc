
#include <iostream>

void greet() {
    std::cout << "Welcome to the Continuation-Passing Style C Compiler!" << std::endl;
}

int main(int argc, char** argv) {
    greet();
    // Parse command-line arguments
    // Currently, a very prescriptive argument specification.
    if (argc != 2) {
        std::cout << "Usage: cpscc filename.c" << std::endl;
    }
    auto filename = argv[1];
    // analysis, synthesis
    // ...
    return 0;
}
