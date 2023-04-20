//
// Created by YingXiewu on 2023/4/18.
//

// testCase.h
#ifndef TEST_CASE_H
#define TEST_CASE_H
#include <iostream>
#include <cstdlib>
#include <string>

class DataMaker {
public:
    explicit DataMaker(std::string path):cppPath(std::move(path)){
        std::string cmd="g++ "+cppPath+" -o ./dataMaker.exe";
        int code= std::system(cmd.c_str());
        if(code){
            std::cerr<<"无法编译dataMaker.cpp!";
            throw std::runtime_error("无法编译dataMaker.cpp!");
        }
    };
    void generateInputFile(const std::string &filename, int num);
private:
    std::string cppPath;
};
class StandardProgram {
public:
    explicit StandardProgram(std::string path):cppPath(std::move(path)){
        std::string cmd="g++ "+cppPath+" -o ./standardProgram.exe";
        int code= std::system(cmd.c_str());
        if(code){
            std::cerr<<"无法编译standardProgram.cpp!";
            throw std::runtime_error("无法编译standardProgram.cpp!");
        }
    };
    void processInputFile(const std::string &inputFilename, const std::string &outputFilename);
private:
    std::string cppPath;
};
#endif // TEST_CASE_H
