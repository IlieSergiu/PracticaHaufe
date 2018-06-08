#include <iostream.h>


int main()
{
    int a[10][10], trans[10][10], r, c, i, j;

    cout << "introduceti numarul de linii si de coloane: ";
    cin >> r >> c;

    // Initializarea matricii a[][].
    cout << endl << "Introduceti elementele matricii : " << endl;
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        cout << "Introduceti elemntul a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
    }

    // Afisarea matricii a[][]
    cout << endl << "Matricea introdusa: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << " " << a[i][j];
            if(j == c - 1)
                cout << endl << endl;
        }

    // Construirea transpusei
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            trans[j][i]=a[i][j];
        }

    // Afisare transpusei
    cout << endl << "Transpusa matricii : " << endl;
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j)
        {
            cout << " " << trans[i][j];
            if(j == r - 1)
                cout << endl << endl;
        }

    return 0;
}
