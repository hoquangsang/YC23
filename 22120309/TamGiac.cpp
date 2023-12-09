#include "TamGiac.h"

void NhapMangTamGiac(TamGiac T[], int& n, std::istream& is) {

	std::cout << "Nhap so phan tu cua mang tam giac: ";
	std::cin >> n;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(100, '\n');
		n = 0;
	}
	std::cout << "Nhap mang tam giac:\n";
	for (int i = 0; i < n; i++) {
		T[i].nhap(is);
	}
}

void XuatMangTamGiac(TamGiac T[], int n, std::ostream& os) {
	std::cout << "Mang tam giac " << n << " phan tu:\n";
	for (int i = 0; i < n; i++) {
		T[i].xuat(os);
	}
}