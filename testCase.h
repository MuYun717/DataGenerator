//
// Created by YingXiewu on 2023/4/18.
//

// testCase.h
#ifndef TEST_CASE_H
#define TEST_CASE_H

#include <string>

class DataGenerator {
public:
    DataGenerator() = default;

    void generateInputFile(const std::string &filename, int num);

private:
    void generateData(const ofstream &cout, int num);
};

class StandardProgram {
public:
    StandardProgram() = default;

    void processInputFile(const std::string &inputFilename, const std::string &outputFilename);

private:
    void solve(const ifstream &cin, const ofstream &cout);
};

#endif // TEST_CASE_H
