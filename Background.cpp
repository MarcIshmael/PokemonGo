#include <iostream>
#include "plotter.h"
using namespace std;


//10 Vertical Squares for creating Block Letters
char Plotter::_10VerticalSquares (char SQUARE)
{
    int v = 1 ;
    while (v <= 10)
    {
        cout << SQUARE<<endl;
        v++ ;
    }
}
// 6 Vertical Squares for creating block letters
 char Plotter::_6VerticalSquares (char SQUARE)
{
    int v = 1;
    while (v <= 6)
    {
        cout << SQUARE <<endl ;
        v++ ;
    }
}
// 7 horizontal Squares for creating block letters
 char Plotter::_7HorizontalSquares (char SQUARE)
{
    int h = 1 ;
    while (h<=7)
    {
        cout << SQUARE ;
    }
}
// upward staircase squares for the parts in k and m
char Plotter::upwardSquares(char SQUARE, char BLANK)
{
    int spacesLeft = 4 ;
    int horizontalRows = 4 ;

    for (int h= 1; h <= horizontalRows; h++)
    {

        for (int i = 1 ; i <= spacesLeft; i++)
            {
                cout << BLANK ;
            }
        cout << SQUARE ;
        spacesLeft -- ;
        cout << endl ;
    }
}
// downward staircase letters for the other parts of m and k
 char Plotter::downwardSquares(char BLANK, char SQUARE)
{
    int spacesLeft = 1 ;
    int horizontalRows = 4 ;

    for (int h= 1; h <= horizontalRows; h++)
    {

        for (int i = 1 ; i <= spacesLeft; i++)
            {
                cout << BLANK ;
            }
        cout << SQUARE ;
        spacesLeft ++ ;
        cout << endl ;
    }
}
// outline of map
char Plotter::outlineOfMapHorizontal (char SQUARE)
{
    int sideLenght=50 ;
    for (int i=1; i<=sideLenght; i++)
    {
        cout << SQUARE ;
    }
}
//vertical outline of map
char Plotter::outlineOfMapVertical(char SQUARE)
{
    int sideLenght = 50 ;
    for (int i =1; i<=sideLenght; i++)
    {
        cout << SQUARE << endl ;
    }
}
// fountain mall
char Plotter::fountinMall (char DOTS)
{
    int fountainMallWith = 10 ;
    int fountainMallLenght = 15 ;


    for (int h = 1 ; h <= fountainMallLenght; h++ )
    {

        for (int i = 1; i <= fountainMallWith; i++)
            {
                cout  << DOTS  ;

            }
        cout << endl ;
    }
}
// parking lot
char Plotter::parkingLot (char LINES)
{
    int parkingLotWith = 10;
    int parkingLotLenght = 5 ;


    for (int h = 1 ; h <= parkingLotLenght; h++ )
    {

        for (int i = 1; i <= parkingLotWith; i++)
            {
                cout << LINES  ;

            }
        cout << endl ;
    }

}

char Plotter::fountinMallBuilding1(char SQUARE)
{
    for(int i = 1; i <=2 ; i++)
    {
        for (int x= 1; x <= 10; x ++)
            {
                cout << SQUARE ;

            }
            cout << endl ;
    }
    cout << SQUARE << SQUARE << SQUARE << SQUARE << endl ;
    cout << SQUARE << SQUARE << SQUARE << SQUARE << endl ;

    for(int i = 1; i <=2 ; i++)
    {
        for (int x= 1; x <= 10; x ++)
            {
                cout << SQUARE ;

            }
            cout << endl ;
    }
}
//Mars McLean Building
char Plotter::fountinMallBuilding2()
{
    for(int i = 1; i <=2 ; i++)
    {
        for (int x= 1; x <= 10; x ++)
            {
                cout << SQUARE ;

            }
            cout << endl ;
    }
    cout << BLANK << BLANK << BLANK << BLANK << BLANK  << BLANK ;
    cout << SQUARE << SQUARE << SQUARE << SQUARE << endl ;
    cout << BLANK << BLANK << BLANK << BLANK << BLANK  << BLANK ;
    cout << SQUARE << SQUARE << SQUARE << SQUARE << endl ;

    for(int i = 1; i <=2 ; i++)
    {
        for (int x= 1; x <= 10; x ++)
            {
                cout << SQUARE ;

            }
            cout << endl ;
    }
}
