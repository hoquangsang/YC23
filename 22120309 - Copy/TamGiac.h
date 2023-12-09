#ifndef TamGiac_h
#define TamGiac_h

#define sizename 10

#include <iostream>

struct TamGiac {
	// data
	struct ToaDo																// kiểu dữ liệu tọa độ
	{
		char name[sizename + 1];												// tên tọa độ
		double x, y;															// vị trí trên hệ tọa độ Oxy

		void nhap(std::istream& is = std::cin)									// hàm nhập 1 tọa độ với mặc định là std::cin
		{
			is >> name >> x >> y;
		}
		
		void xuat(std::ostream& os = std::cout)									// hàm xuất 1 tọa độ với mặc định là std::cout
		{
			os << name << " " << x << " " << y;
		}
	};
	
	ToaDo A, B, C;																// dữ liệu của tam giác: gồm tọa độ 3 điểm



	//operations
	void nhap(std::istream& is = std::cin)										// hàm nhập 1 tam giác với mặc định là std::cin
	{
		A.nhap(is);
		B.nhap(is);
		C.nhap(is);
	}

	void xuat(std::ostream& os = std::cout)										// hàm xuất 1 tam giác với mặc định là std::cout
	{
		A.xuat(os);
		B.xuat(os);
		C.xuat(os);
		os << "\n";
	}

};

void NhapMangTamGiac(TamGiac T[], int& n, std::istream& is = std::cin);			// hàm nhập 1 mảng tam giác với mặc định là std::cin

void XuatMangTamGiac(TamGiac T[], int n, std::ostream& os = std::cout);			// hàm xuất 1 mảng tam giác với mặc định là std::cout

#endif // !TamGiac_h
