// main.cpp
#include "testCase.h"
#include <iostream>

int main() {
    DataGenerator dataGenerator;
    StandardProgram standardProgram;

    for (int i = 1; i <= 10; ++i) {
        std::string inputFilename = "./data/" + std::to_string(i) + ".in";
        std::string outputFilename = "./data/" + std::to_string(i) + ".out";

        dataGenerator.generateInputFile(inputFilename, i);
        standardProgram.processInputFile(inputFilename, outputFilename);

        std::cout << "已生成: " << inputFilename << " 和 " << outputFilename << std::endl;
    }

    return 0;
}
