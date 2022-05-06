#include <iostream>
#include <vector>

#include "include/persegipanjang.hpp"

using namespace std;

vector<persegiPanjang> recShape;

int main()
{
    int k;
    cout << "\033[1mNAMA   : WILDAN JAROD TYAS SASONGKO" <<endl;
    cout << "NRP    : 5024211026\033[0m" <<endl <<endl;

    cout << "\033[1mOperator Overload Persegi Panjang\033[0m" <<endl <<endl;
        
    float panjang, lebar, tengahx, tengahy;
    cout << "\033[1m[Persegi Panjang 1]\033[0m" <<endl; //input persegi ke-1
    cout << "Panjang        : ";
    cin >> panjang;
    cout << "Lebar          : ";
    cin >> lebar;
    cout << "Luas           : " << panjang*lebar <<endl;
    cout << "Titik Tengah X : ";
    cin >> tengahx;
    cout << "Titik Tengah Y : ";
    cin >> tengahy;
    recShape.push_back(persegiPanjang(panjang, lebar, tengahx, tengahy));
    k=0;

    cout << "X min : " << recShape[k].getXmin() <<endl;
    cout << "X max : " << recShape[k].getXmax() <<endl;
    cout << "Y min : " << recShape[k].getYmin() <<endl;
    cout << "Y max : " << recShape[k].getYmax() <<endl;
    cout <<endl;
    persegiPanjang pos1 = recShape[k];

    cout << "\033[1m[Persegi Panjang 2]\033[0m" <<endl; //input persegi ke-2
    cout << "Panjang        : ";
    cin >> panjang;
    cout << "Lebar          : ";
    cin >> lebar;
    cout << "Luas           : " << panjang*lebar <<endl;
    cout << "Titik Tengah X : ";
    cin >> tengahx;
    cout << "Titik Tengah Y : ";
    cin >> tengahy;
    recShape.push_back(persegiPanjang(panjang, lebar, tengahx, tengahy));
    k++;

    cout << "X min : " << recShape[k].getXmin() <<endl;
    cout << "X max : " << recShape[k].getXmax() <<endl;
    cout << "Y min : " << recShape[k].getYmin() <<endl;
    cout << "Y max : " << recShape[k].getYmax() <<endl;
    cout <<endl;
    persegiPanjang pos2 = recShape[k];

    if(pos1 == pos2) //Beririsan
    {
        cout << "\033[1mKedua persegi panjang tersebut saling beririsan\033[0m" <<endl;
        cout << "Maka didapatkan hasil operasi kedua persegi panjang sebagai berikut: " <<endl <<endl;
    
        persegiPanjang pos3 = pos1 + pos2; //Persegi Panjang Gabungan
        recShape.push_back(persegiPanjang(pos3));
        k++;
        cout << "\033[1m[Persegi Panjang " << k + 1 << "] \033[0mOperasi + (Persegi Panjang 1 + Persegi Panjang 2)" <<endl;
        cout << "Panjang        : " << recShape[k].getPanjang() <<endl;
        cout << "Lebar          : " << recShape[k].getLebar() <<endl;
        cout << "Luas           : " << recShape[k].getPanjang() * recShape[k].getLebar() <<endl;
        cout << "Titik Tengah X : " << recShape[k].getTengahx() <<endl;
        cout << "Titik Tengah Y : " << recShape[k].getTengahy() <<endl;
        cout << "X min : " << recShape[k].getXmin() <<endl;
        cout << "X max : " << recShape[k].getXmax() <<endl;
        cout << "y min : " << recShape[k].getYmin() <<endl;
        cout << "y max : " << recShape[k].getYmax() <<endl;
        cout <<endl;

        persegiPanjang pos4 = pos1 - pos2; //Persegi Panjang Irisan
        recShape.push_back(persegiPanjang(pos4));
        k++;
        cout << "\033[1m[Persegi Panjang " << k + 1 << "] \033[0mOperasi - (Persegi Panjang 1 - Persegi Panjang 2)" <<endl;
        cout << "Panjang        : " << recShape[k].getPanjang() <<endl;
        cout << "Lebar          : " << recShape[k].getLebar() <<endl;
        cout << "Luas           : " << recShape[k].getPanjang() * recShape[k].getLebar() <<endl;
        cout << "Titik Tengah X : " << recShape[k].getTengahx() <<endl;
        cout << "Titik Tengah Y : " << recShape[k].getTengahy() <<endl;
        cout << "X min : " << recShape[k].getXmin() <<endl;
        cout << "X max : " << recShape[k].getXmax() <<endl;
        cout << "y min : " << recShape[k].getYmin() <<endl;
        cout << "y max : " << recShape[k].getYmax() <<endl;
        cout <<endl;

    }

    else //Tidak Beririsan
    {
        cout << "\033[1mKedua persegi panjang tersebut tidak beririsan satu sama lain\033[0m" <<endl;
        cout << "Maka tidak dapat dilakukan operasi + dan - pada kedua persegi panjang tersebut" <<endl <<endl;
    }

    cout << "Hasil operasi increment dan decrement pada Persegi Panjang 1 dan 2: " <<endl <<endl;

    persegiPanjang pos5 = ++pos1; //Persegi panjang 1 diperbesar
    recShape.push_back(persegiPanjang(pos5));
    k++;    
    cout << "\033[1m[Persegi Panjang " << k + 1 << "] \033[0mLuas Persegi Panjang 1 diperbesar 2x lipat" <<endl;
    cout << "Panjang        : " << recShape[k].getPanjang() <<endl;
    cout << "Lebar          : " << recShape[k].getLebar() <<endl;
    cout << "Luas           : " << recShape[k].getPanjang() * recShape[k].getLebar() <<endl;
    cout << "Titik Tengah X : " << recShape[k].getTengahx() <<endl;
    cout << "Titik Tengah Y : " << recShape[k].getTengahy() <<endl;
    cout << "X min : " << recShape[k].getXmin() <<endl;
    cout << "X max : " << recShape[k].getXmax() <<endl;
    cout << "y min : " << recShape[k].getYmin() <<endl;
    cout << "y max : " << recShape[k].getYmax() <<endl;
    cout <<endl;

    persegiPanjang pos6 = ++pos2; //Persegi panjang 2 diperbesar
    recShape.push_back(persegiPanjang(pos6));
    k++;
    cout << "\033[1m[Persegi Panjang " << k + 1 << "] \033[0mLuas Persegi Panjang 2 diperbesar 2x lipat" <<endl;
    cout << "Panjang        : " << recShape[k].getPanjang() <<endl;
    cout << "Lebar          : " << recShape[k].getLebar() <<endl;
    cout << "Luas           : " << recShape[k].getPanjang() * recShape[k].getLebar() <<endl;
    cout << "Titik Tengah X : " << recShape[k].getTengahx() <<endl;
    cout << "Titik Tengah Y : " << recShape[k].getTengahy() <<endl;
    cout << "X min : " << recShape[k].getXmin() <<endl;
    cout << "X max : " << recShape[k].getXmax() <<endl;
    cout << "y min : " << recShape[k].getYmin() <<endl;
    cout << "y max : " << recShape[k].getYmax() <<endl;
    cout <<endl;

    persegiPanjang pos7 = --pos1; //Persegi panjang 1 diperkecil
    recShape.push_back(persegiPanjang(pos7));
    k++;
    cout << "\033[1m[Persegi Panjang " << k + 1 << "] \033[0mLuas Persegi Panjang 1 diperkecil 2x lipat" <<endl;
    cout << "Panjang        : " << recShape[k].getPanjang() <<endl;
    cout << "Lebar          : " << recShape[k].getLebar() <<endl;
    cout << "Luas           : " << recShape[k].getPanjang() * recShape[k].getLebar() <<endl;
    cout << "Titik Tengah X : " << recShape[k].getTengahx() <<endl;
    cout << "Titik Tengah Y : " << recShape[k].getTengahy() <<endl;
    cout << "X min : " << recShape[k].getXmin() <<endl;
    cout << "X max : " << recShape[k].getXmax() <<endl;
    cout << "y min : " << recShape[k].getYmin() <<endl;
    cout << "y max : " << recShape[k].getYmax() <<endl;
    cout <<endl;

    persegiPanjang pos8 = --pos2; //Persegi panjang 2 diperkecil
    recShape.push_back(persegiPanjang(pos8));
    k++;
    cout << "\033[1m[Persegi Panjang " << k + 1 << "] \033[0mLuas Persegi Panjang 2 diperkecil 2x lipat" <<endl;
    cout << "Panjang        : " << recShape[k].getPanjang() <<endl;
    cout << "Lebar          : " << recShape[k].getLebar() <<endl;
    cout << "Luas           : " << recShape[k].getPanjang() * recShape[k].getLebar() <<endl;
    cout << "Titik Tengah X : " << recShape[k].getTengahx() <<endl;
    cout << "Titik Tengah Y : " << recShape[k].getTengahy() <<endl;
    cout << "X min : " << recShape[k].getXmin() <<endl;
    cout << "X max : " << recShape[k].getXmax() <<endl;
    cout << "y min : " << recShape[k].getYmin() <<endl;
    cout << "y max : " << recShape[k].getYmax() <<endl;
    cout <<endl;    

    return 0;
}