#include <iostream.h>


int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Introduceti numarul de linii (intre 1 si 100): ";
    cin >> r;

    cout << "Intoduceti numarul de coloane (intre 1 si 100): ";
    cin >> c;

    cout << endl << "Intoduceti elementele primei matricii: " << endl;

    // Initializarea primei maticii
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Intoduceti elementul a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Initializarea celei de-a 2 matrice
    cout << endl << "Introduceti elementele celei de_a 2 matricii: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Introduceti elementul b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adunarea celor doua matricii
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Afisarea rezultatului
    cout << endl << "Suma celor doua matricii: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
