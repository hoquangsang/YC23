#include "Functions.h"

// YC1
void GhiFileTamGiac(TamGiac T[], int n, const char filename[]) {
	ofstream w;
	w.open(filename);
	if (!w.is_open()) {
		cout << "[!] Khong the mo file " << filename << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		w << T[i].A.name << " " << T[i].A.x << " " << T[i].A.y << " ";
		w << T[i].B.name << " " << T[i].B.x << " " << T[i].B.y << " ";
		w << T[i].C.name << " " << T[i].C.x << " " << T[i].C.y;

		if (i != n - 1) w << "\n";
	}
	w.close();
	cout << "[!] Ghi thanh cong mang tam giac vao file: " << filename << endl;

	return;

	//cach 2:
	w.open(filename);
	if (!w.is_open()) return;

	for (int i = 0; i < n; i++) {
		T[i].xuat(w);
	}

	w.close();
}

// YC2
void DocFileTamGiac(TamGiac T[], int& n, const char filename[]) {
	ifstream r;
	n = 0;
	r.open(filename);
	if (!r.is_open()) {
		cout << "[!] Khong the mo file " << filename << endl;
		return;
	}
	while (!r.eof()) {
		r >> T[n].A.name >> T[n].A.x >> T[n].A.y;
		r >> T[n].B.name >> T[n].B.x >> T[n].B.y;
		r >> T[n].C.name >> T[n].C.x >> T[n].C.y;
		n++;
	}
	r.close();
	cout << "[!] Doc thanh cong mang tam giac tu file: " << filename << endl;

	return;

	// cach 2:
	n = 0;
	r.open(filename);
	if (!r.is_open()) return;

	while (!r.eof()) {
		T[n++].nhap(r);
	}

	r.close();
}

// YC3
void XuatMaTran(int M[][maxsize], int row, int col, ostream &os) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			os << M[i][j] << " ";
		}
		os << endl;
	}
}

void DocMaTran(int M[][maxsize], int& row, int& col, const char filename[]) {
	ifstream r;
	r.open(filename);
	if (!r.is_open()) {
		cout << "[!] Khong the mo file: " << filename << endl;
		return;
	}
	r >> row >> col;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			r >> M[i][j];
		}
	}

	r.close();

	cout << "[!] Doc thanh cong ma tran tu file: " << filename << endl;
}

int TongBienMaTran(int M[][maxsize], int row, int col) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
				sum += M[i][j];
			}
		}
	}
	return sum;
}

//YC4
void MaHoaCeasar(const char file_inp[], const char file_out[], int K) {
	//doc file
	ifstream r;
	r.open(file_inp);
	if (!r.is_open()) {
		cout << "[!] Khong the mo file: " << file_inp << endl;
		return;
	}
	char str[maxsize] = "";
	r.getline(str, maxsize + 1, '\0');
	r.close();

	//ma hoa
	K = K % 26;

	for (int i = 0; i < strlen(str); i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			int temp = int(str[i] + K);
			if (temp > int('z')) {
				str[i] = char('a' + int(temp - 'z' + 1));
			}
			else if (temp < int('a')) {
				str[i] = char('z' - int('a' - temp + 1));
			}
			else {
				str[i] += K;
			}
		}
		else if ('A' <= str[i] && str[i] <= 'Z') {
			int temp = int(str[i] + K);
			if (temp > int('Z')) {
				str[i] = char('A' + int(temp - 'Z' + 1));
			}
			else if (temp < int('A')) {
				str[i] = char('Z' - int('A'- temp + 1));
			}
			else {
				str[i] += K;
			}
		}
	}

	//ghi file
	ofstream w;
	w.open(file_out);
	if (!w.is_open()) {
		cout << "[!] Khong the mo file " << file_out << endl;
		return;
	}
	w << str;
	w.close();

	cout << "[!] Chuyen doi thanh cong!\n";

}