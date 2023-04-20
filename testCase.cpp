// testCase.cpp
#include "testCase.h"
#include<bits/stdc++.h>

using namespace std;
void DataMaker::generateInputFile(const std::string &filename, int num) {
    std::ofstream outputFile(filename);
    if (outputFile.is_open()) {
        outputFile.close();
        string cmd="dataMaker.exe "+to_string(num)+" >"+filename;
        std::system(cmd.c_str());
    } else {
        std::cerr << "无法打开文件: " << filename << std::endl;
    }
}
void StandardProgram::processInputFile(const std::string &inputFilename, const std::string &outputFilename) {
    std::ifstream inputFile(inputFilename);
    std::ofstream outputFile(outputFilename);
    if (inputFile.is_open() && outputFile.is_open()) {
        inputFile.close();
        outputFile.close();
        string cmd="standardProgram.exe <"+inputFilename+" >"+outputFilename;
        std::system(cmd.c_str());
    } else {
        std::cerr << "无法打开文件: " << inputFilename << " 或 " << outputFilename << std::endl;
    }
}
