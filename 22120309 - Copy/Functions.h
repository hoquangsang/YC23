#ifndef Functions_h
#define Functions_h

#define maxsize 100

#include <iostream>
#include <fstream>

#include "TamGiac.h"

using namespace std;

// YC1
void GhiFileTamGiac(TamGiac T[], int n, const char filename[]);

// YC2
void DocFileTamGiac(TamGiac T[], int& n, const char filename[]);

// YC3
void XuatMaTran(int M[][maxsize], int row, int col, ostream &os = cout);

void DocMaTran(int M[][maxsize], int& row, int& col, const char filename[]);

int TongBienMaTran(int M[][maxsize], int row, int col);

//YC4
void MaHoaCeasar(const char file_inp[], const char file_out[], int K);


#endif // !Functions_h