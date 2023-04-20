// main.cpp
#include "testCase.h"
#include <iostream>
const std::string DataMakerPath="./dataMaker.cpp";
const std::string StandardProgramPath="./standardProgram.cpp";
const int TestCasesNum=10;
int main() {
    DataMaker dataMaker(DataMakerPath);
    StandardProgram standardProgram(StandardProgramPath);

    for (int i = 1; i <= TestCasesNum; ++i) {
        std::string inputFilename = "./data/" + std::to_string(i) + ".in";
        std::string outputFilename = "./data/" + std::to_string(i) + ".out";

        dataMaker.generateInputFile(inputFilename, i);
        standardProgram.processInputFile(inputFilename, outputFilename);

        std::cout << "已生成: " << inputFilename << " 和 " << outputFilename << std::endl;
    }

    return 0;
}
