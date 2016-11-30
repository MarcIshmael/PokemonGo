#ifndef PLOTTER_H_INCLUDED
#define PLOTTER_H_INCLUDED
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>

const char SQUARE = 219;
const char LEFT   = 221;
const char RIGHT  = 222;
const char TOP    = 223;
const char BOTTOM = 220;
const char BLANK  = ' ';
const char DOTS = 176 ;
const char LINES = 240 ;
const char T = 209 ;
const char ROADBITA = 209 ;
const char ROADBITB= 207 ;

// Characters-------------
const char ASH = 64 ;
const char TEAMROCKET = 82 ;
const char Rayquaza = 158 ;
const char Charzard = 128 ;
const char Squirtil = 235 ;



enum ink
{
    black   = 0x00, darkblue = 0x01, darkgreen  = 0x02, darkcyan  = 0x03,
    darkred = 0x04, purple   = 0x05, darkyellow = 0x06, lightgrey = 0x07,
    grey    = 0x08, blue     = 0x09, green      = 0x0A, cyan      = 0x0B,
    red     = 0x0C, magenta  = 0x0D, yellow     = 0x0E, white     = 0x0F
};

class Plotter
{
    protected:
       COORD  coordScreen;
       HANDLE hConsoleOutput;
       char   dummy;
       void cls( HANDLE hConsole );
    public:
       Plotter();
       void clear();
       void move(int, int);
       void plot(int,int,char);
       void setColor(ink);
       char _10VerticalSquares (char SQUARE);
       char _6VerticalSquares (char SQUARE);
       char _7HorizontalSquares (char SQUARE);
       char upwardSquares(char SQUARE, char BLANK);
       char downwardSquares(char BLANK, char SQUARE);
       char outlineOfMapHorizontal (char SQUARE);
       char outlineOfMapVertical(char SQUARE);
       char fountinMall (char DOTS);
       char parkingLot (char LINES);
       char fountinMallBuilding1(char SQUARE);
       char fountinMallBuilding2();
};




#endif // PLOTTER_H_INCLUDED
