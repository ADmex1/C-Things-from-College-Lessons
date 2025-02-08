#include <iostream>
#include <cstring>
#include <cstdio>
#include <stdlib.h>
using namespace std;

int main() {
    FILE *fp, *ft;
    char choice, another;
    
    struct Mahasiswa {
        char nama[50], nim[50], prodi[100], semester[100], username[100], password[50];
    };

    struct Mahasiswa a;

    char xnama[50], xnim[50];
    long int recsize;

    fp = fopen("user.txt", "rb+");

    if (fp == NULL) {
        fp = fopen("user.txt", "wb+");
        if (fp == NULL) {
            puts("Cannot open file");
            return 0;
        }
    }

    recsize = sizeof(a);

    while (1) {
        system("cls");
        cout << "**************Data Mahasiswa**************";
        cout << "\n\n";
        cout << "\t\t 1. Registrasi";
        cout << "\t\t 2. Daftar Data";
        cout << "\t\t 3. Ubah Data";
        cout << "\t\t 4. Hapus Data";
        cout << "\t\t 5. KELUAR";
        cout << "\n\n";
        cout << "*******************************************";
        fflush(stdin);
        choice = getchar();

        switch (choice) {
            case '1':
                fseek(fp, 0, SEEK_END);
                another = 'Y';
                while (another == 'y' || another == 'Y') {
                    cout << "\n Nama: ";
                    cin >> a.nama;
                    cout << "\n NIM: ";
                    cin >> a.nim;
                    cout << "\n Program Studi: ";
                    cin >> a.prodi;
                    fwrite(&a, recsize, 1, fp);
                    cout << "\n Daftar Lagi? (Y/N): ";
                    fflush(stdin);
                    another = getchar();
                }
                break;

            case '2':
                system("cls");
                rewind(fp);
                cout << "\t Melihat Data Mahasiswa";
                cout << "\n";
                while (fread(&a, recsize, 1, fp) == 1) {
                    cout << "Nama: " << a.nama << "\n";
                    cout << "NIM: " << a.nim << "\n";
                    cout << "Program Studi: " << a.prodi << "\n\n";
                }
                system("pause");
                break;

            case '3':
                system("cls");
                another = 'y';
                while (another == 'y' || another == 'Y') {
                    cout << "\nKetik Nama: ";
                    cin >> xnama;
                    rewind(fp);
                    int found = 0;
                    while (fread(&a, recsize, 1, fp) == 1) {
                        if (strcmp(a.nama, xnama) == 0) {
                            found = 1;
                            cout << "\n Nama Baru: ";
                            cin >> a.nama;
                            cout << "\n NIM Baru: ";
                            cin >> a.nim;
                            cout << "\n Program Studi Baru: ";
                            cin >> a.prodi;
                            fseek(fp, -recsize, SEEK_CUR);
                            fwrite(&a, recsize, 1, fp);
                            break;
                        }
                    }
                    if (!found)
                        cout << "\n Data Tidak ditemukan";
                    cout << "\n Mengubah data? (Y/N): ";
                    fflush(stdin);
                    another = getchar();
                }
                break;

            case '4':
                system("cls");
                another = 'y';
                while (another == 'y' || another == 'Y') {
                    cout << "\n Ketik Nama Mahasiswa yang mau dihapus: ";
                    cin >> xnama;
                    ft = fopen("temp.dat", "wb");
                    rewind(fp);
                    while (fread(&a, recsize, 1, fp) == 1) {
                        if (strcmp(a.nama, xnama) != 0)
                            fwrite(&a, recsize, 1, ft);
                    }
                    fclose(fp);
                    fclose(ft);
                    remove("user.txt");
                    rename("temp.dat", "user.txt");
                    fp = fopen("user.txt", "rb+");
                    cout << "Hapus yang lainnya? (Y/N): ";
                    fflush(stdin);
                    another = getchar();
                }
                break;

            case '5':
                fclose(fp);
                cout << "Closing....";
                exit(0);
        }
        system("pause");
    }
    return 0;
}
