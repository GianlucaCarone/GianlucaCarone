#include <iostream>
#include<conio.h>
using namespace std;

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }

}

void reverso(int vec[], int dim)
{
	for (int i = dim-1; i >= 0; i--)
		cout << vec[i] << '\t';
    cout << endl;
}

void transpuesta(int m[][5], int dfil)
{
        const int dcol = 5; 

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[j][i] << '\t';
                cout << endl;
        }

}

int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};

    cout<<"Vector de 5 elementos"<<endl;
    mostrarvec(vec5,dim5);
    cout<<"Reverso"<<endl;
    reverso(vec5,dim5);
    cout<<"-----------------------------------------"<<endl;
    cout<<"Vector de 10 elementos"<<endl;
    mostrarvec(vec10,dim10);
    cout<<"Reverso"<<endl;
    reverso(vec10,dim10);
    cout<<"-----------------------------------------"<<endl;
    cout<<"Matriz"<<endl;
    mostrarmat(matriz,dim5);
    cout<<"Transpuesta"<<endl;
    transpuesta(matriz,dim5);

    getch();
    return 0;
}