#include <stdio.h>

int gebeGroessereZahl(int a, int b);

int main()
{
    int zahl1, zahl2;

    // Eingabe Zahl 1

    printf("\nGeben Sie eine Zahl ein: ");
    scanf("%d", &zahl1);

    // Eingabe Zahl 2

    printf("\nGeben Sie eine Zahl ein: ");
    scanf("%d", &zahl2);


    printf("\n\nDie größere Zahl lautet %d\n\n", gebeGroessereZahl(zahl1, zahl2));

    return 0;
}

int gebeGroessereZahl(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}