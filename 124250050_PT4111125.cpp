#include <iostream>
using namespace std;

struct Alamat {
	string kota;
	string jalan;
	string provinsi;
	int kode_pos;
}; 

struct mahasiswa {
	string nama;
	int nim;
	string kelas;
	bool mahasiswa_aktif;
	Alamat al;
	float ipk;
};
mahasiswa mhs[10];
int banyakMHS;

    int main () {
		int jml_data;
		jml_data = 3;
		
	for (int i = 0; i< jml_data; i++) {
		cout << "\n Masukkan data pribadi ke : " << i+1 << endl;
		cout << "Nama : ";
		cin>>mhs[i].nama;
		cout<< "NIM  : ";
		cin>>mhs[i].nim;
		cout<< "Kelas : ";
		cin>>mhs[i].kelas;
		cout << "status aktif (1 untuk aktif dan 0 untuk tidak aktif): ";
		int status;
		cin>> status;
		mhs[i].mahasiswa_aktif = (status == 1);
		cout << "IPK : ";
		cin>>mhs[i].ipk;
		cout<< "Alamat Jalan : ";
		cin>>mhs[i].al.jalan;
		cout<< "Kota : ";
		cin>>mhs[i].al.kota;
		cout<< "Provinsi : ";
		getline(cin, mhs[i].al.provinsi);
		cout<< "Kode pos : ";
		cin>>mhs[i].al.kode_pos;
		cin.ignore();
}
    	for (int i = 0; i< jml_data; i++) {
			cout << "\n ============= \n";
			cout << "\n DATA PRIBADI \n";
			cout << "\n =============\n";
			cout << "Nama : " << mhs[i].nama<<endl;
			cout<< "NIM  : " << mhs[i].nim<<endl;
			cout<< "Kelas : " << mhs[i].kelas<<endl;
			cout << "status aktif (1 untuk aktif dan 0 untuk tidak aktif): " << mhs[i].mahasiswa_aktif<<endl;
			cout << "IPK : " << mhs[i].ipk<<endl;
            cout<< "Alamat Jalan : " << mhs[i].al.jalan<<endl;
            cout<< "Kota : " << mhs[i].al.kota<<endl;
            cout<< "Provinsi : " << mhs[i].al.provinsi<<endl;
            cout<< "Kode pos : " << mhs[i].al.kode_pos<<endl;
            cout << "----------------------------";
            
}
}
            
            
            
            
		
	
	
