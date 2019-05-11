//
// Created by emilia on 13.04.19.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <iostream>
#include <complex>
#include <vector>
#include <string>
#include <regex>

class Matrix {
    //std::complex<double> cplx;
    std::vector<std::vector<std::complex<double>>> cplx;
    int rows, columns;
public:
    Matrix(int rows_, int columns_, const std::complex<double> &init_);
    Matrix(const Matrix &origin);
    Matrix(std::string str);
    ~Matrix() {};

    std::complex<double> GetField(int x, int y) const;
    void SetField(int x, int y, std::complex<double> value);
    void Print();

    Matrix operator+(const Matrix& other);
    Matrix operator-(const Matrix& other);
    Matrix operator*(const Matrix& other);
};
#endif //MATRIX_MATRIX_H
