#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    const int SATIR = 3, SUTUN = 4;
    int matris[SATIR][SUTUN];

    // Matrisi doldur
    for (int i = 0; i < SATIR; i++)
        for (int j = 0; j < SUTUN; j++)
            matris[i][j] = (i + 1) * (j + 1);

    // Dosyaya yaz
    ofstream dosya("metin.txt");
    dosya << "3x4 carpim matrisi" << endl;
    for (int i = 0; i < SATIR; i++)
    {
        for (int j = 0; j < SUTUN; j++)
            dosya << matris[i][j] << "\t";
        dosya << endl;
    }
    dosya.close();
    cout << "metin.txt kaydedildi." << endl;

    // Aynı dosyayı geri okuyup ekrana yaz
    ifstream oku("metin.txt");
    string satir;
    cout << "Dosyanin icerigi:" << endl;
    while (getline(oku, satir))
        cout << satir << endl;
    oku.close();

    return 0;
}