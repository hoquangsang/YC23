#include "Functions.h"

int main() {
	int M[maxsize][maxsize];
	int row, col;

	TamGiac T[maxsize];
	int n;

	const char file_tamgiac[] = "tamgiac.txt";
	const char file_matran[] = "matran.txt";

	int K;
	const char file_ynghia[] = "ynghia.txt";
	const char file_matma[] = "matma.txt";


	while (true) {
		system("cls");
		cout << "0. Thoat chuong trinh.\n";
		cout << "1. Ghi mang tam giac ra file tam giac.\n";
		cout << "2. Doc mang tam giac tu file tam giac.\n";
		cout << "3. Doc ma tran tu file. Tinh tong cac phan tu nam tren 4 duong bien.\n";
		cout << "4. Ma hoa Ceasar: tao file mat lenh tu file van ban.\n";
		cout << "5. Ma hoa Ceasar: tao file giai ma tu file mat lenh.\n\n";

		cout << "Nhap lua chon: ";
		int option;
		cin >> option;
		cout << endl;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Nhap khong hop le.\n";
		}


		switch (option)
		{
		case 0: {
			system("pause");
			return 0;
		}
		case 1: {
			// nhap mang cac tam giac
			NhapMangTamGiac(T, n);

			// ghi mang tam giac vao file tam giac
			GhiFileTamGiac(T, n, file_tamgiac);
			break;
		}

		case 2: {
			// doc mang tam giac tu file tam giac
			DocFileTamGiac(T, n, file_tamgiac);

			// xuat ket qua
			XuatMangTamGiac(T, n);
			break;
		}
		case 3: {	
			// doc ma tran tu file
			DocMaTran(M, row, col, file_matran);

			// xuat ket qua vua doc
			cout << "\nKet qua doc duoc:\n";
			XuatMaTran(M, row, col);

			// tinh tong 4 duong bien
			cout << "Tong 4 duong bien: " << TongBienMaTran(M, row, col) << endl;

			break;
		}
		case 4: {
			cout << "Nhap Khoa: ";
			cin >> K;
			MaHoaCeasar(file_ynghia, file_matma, K);
			break;
		}

		case 5: {
			cout << "Nhap Khoa: ";
			cin >> K;
			MaHoaCeasar(file_matma, file_ynghia, -K);
			break;
		}
		default: {
			cout << "Lua chon khong hop le, moi nhap lai.\n";
			break;
		}
		}

		cout << "----------------------------------------------------\n";
		
		system("pause");
	}




	return 0;
}

/*
3
A -30 2.5 B 7 5 C 4 2.1
D1 8 6 E1 6 2 F1 6 1
M12 7 9 N12 2 1 P12 6 5


3 4
10 20 30 40
50 60 70 80
90 100 110 120

*/