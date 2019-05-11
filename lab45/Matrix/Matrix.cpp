//
// Created by emilia on 13.04.19.
//

#include "Matrix.h"


std::complex<double> toComplex(std::string s){
    if(s.find("i")!= std::string::npos){
        std::size_t pos = s.find("i");
        s.replace(pos, 1, ",");
    }
    std::istringstream is('(' + s + ')');
    std::complex<double> c;
    is >> c;

    return c;
}

std::vector<std::vector<std::complex<double>>> toVector(std::string str){
    std::vector<std::complex<double>> v;
    std::vector<std::vector<std::complex<double>>> vec;

    int size = 1;
    for(auto i: str)
        if(i == ';') size ++;

    int i=0;
    std::smatch matches;
    std::regex reg("([0-9]+[i][0-9]+|[i][0-9]+|[0-9]+)");
    while(std::regex_search(str,matches, reg)){
        v.push_back(toComplex(matches.str()));
        str = matches.suffix().str();
        i++;

        if(i%size == 0) {
            vec.push_back(v);
            v.clear();
        }
    }
    return vec;
}



Matrix::Matrix(int rows_, int columns_, const std::complex<double>& init_){
    rows = rows_;
    columns = columns_;
    cplx.resize(rows_);
    for(int i=0; i < cplx.size(); i++){
        cplx[i].resize(columns_, init_);
    }

}
Matrix::Matrix(const Matrix &origin) { // konstruktor kopiujacy
    cplx = origin.cplx;
    rows = cplx.size();
    columns = cplx[0].size();
}

Matrix::Matrix(std::string str) { //
    cplx = toVector(str);
    rows = cplx.size();
    columns = cplx[0].size();
}

std::complex<double> Matrix::GetField(int x, int y) const{
    if((x > rows) || (y > columns)) return std::complex<double> (0,0);
    return cplx[x][y];
}

void Matrix::SetField(int x, int y, std::complex<double> value) {
    cplx[x][y] = value;
}

void Matrix::Print(){
    for(auto row: cplx) {
        for (auto elem: row)
            std::cout << elem << ' ';
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

Matrix Matrix::operator+(const Matrix &other) {
    Matrix sum(rows, columns, 0.0);
    if((columns == other.columns) && ( rows == other.rows)){
           for(int i=0; i<rows; i++)
                for(int j=0; j<columns; j++)
                    sum.cplx[i][j] = cplx[i][j] + other.cplx[i][j];
    }
    else
        throw std::length_error(" Niezgodny rozmiar ");
    return sum;
}

Matrix Matrix::operator-(const Matrix &other) {
    Matrix sum(rows, columns, 0.0);
    if((columns == other.columns) && ( rows == other.rows)){
        for(int i=0; i<rows; i++)
            for(int j=0; j<columns; j++)
                sum.cplx[i][j] = cplx[i][j] - other.cplx[i][j];
    }
    else
        throw std::length_error(" Niezgodny rozmiar ");
    return sum;
}

Matrix Matrix::operator*(const Matrix &other) {
    Matrix sum(rows, columns, 0.0);
    if(columns != other.rows) throw std::length_error(" Niezgodny rozmiar ");
    for(int i=0; i<rows; i++)
        for(int j=0; j<columns; j++)
            for(int k=0; k<columns; k++)
                sum.cplx[i][j] += cplx[i][k] * other.cplx[k][j];
    return sum;
}
