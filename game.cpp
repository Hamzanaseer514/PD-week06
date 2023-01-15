#include <iostream>
#include <windows.h>
using namespace std;
void structure();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void erase(int x, int y);
void print(int x, int y);

main()
{
    int packmanX = 4;
    int packmanY = 2;
    bool gameRunning = true;
    int score = 0;

    system("cls");
    structure();

    gotoxy(packmanX, packmanY);
    cout << "P";
    while (gameRunning)
    {

        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(packmanX - 1, packmanY);
            if (nextLocation == ' ' || nextLocation == ',')
            {
                erase(packmanX, packmanY);
                packmanX = packmanX - 1;
                print(packmanX, packmanY);
                if(nextLocation == ',')
                {
                    gotoxy(4,26);
                    score = score + 1;
                    cout<<"Score : "<<score;
                }
                
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(packmanX + 1, packmanY);
            if (nextLocation == ' ' || nextLocation == ',')
            {
                erase(packmanX, packmanY);
                packmanX = packmanX + 1;
                print(packmanX, packmanY);
                  if(nextLocation == ',')
                {
                    gotoxy(4,26);
                    score = score + 1;
                    cout<<"Score : "<<score;
                }
                  
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(packmanX, packmanY - 1);
            if (nextLocation == ' ' || nextLocation == ',')
            {
                erase(packmanX, packmanY);
                packmanY = packmanY - 1;
                print(packmanX, packmanY);
                  if (nextLocation == ',')
                {
                    gotoxy(4,26);
                    score = score + 1;
                    cout<<"Score : "<<score;
                }
                  
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(packmanX, packmanY + 1);
            if (nextLocation == ' ' || nextLocation == ',')
            {
                erase(packmanX, packmanY);
                packmanY = packmanY + 1;
                print(packmanX, packmanY);
                  if(nextLocation == ',')
                {
                    gotoxy(4,26);
                    score = score + 1;
                    cout<<"Score : "<<score;
                }
                   
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        
        Sleep(100);
    }
}
void structure()
{

    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$                   " << endl;
    cout << "@,,  ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,       ,,,,,,  @       " << endl;
    cout << "@,,                                                                               @                    " << endl;
    cout << "@,,  &&&&&&&&&&&&&&&&       ,,,       &&&&&&&&&&&&&&&        |%|,,       &&&&&&   @                      " << endl;
    cout << "@,,       |%|   |%|      |%|          |%|         |@|        |%|,,         |%|    @               " << endl;
    cout << "@,,       |%|   |%|      |%|,,,       |%|         |@|        |%|,,         |%|    @                            " << endl;
    cout << "@,,       &&&&&&&&&  , , |%|,,,       &&&&&&&&&&&&&&&           ,,        &&&&&,  @                    " << endl;
    cout << "@,,       |%|        , , |%|,,,      ,,,,,,,,,,,,,,,,,,,  |%|   ,,             ,  @               " << endl;
    cout << "@,,       &&&&&&&&&&&, , |%|,,,      &&&&&&&&&&&&&&&      |%|   ,,        &&&&&,  @                 " << endl;
    cout << "@,,               |%|,               |%|,,,,,,,,          |%|   ,,          |%|,  @                       " << endl;
    cout << "@,,      ,,,,,,,, |%|,               |%|,,,,,,,,|%|             ,,          |%|,  @                   " << endl;
    cout << "@,,|%|   |%|&&|%|,|%|, |%|              ,,,,,,,,|%|             ,,|%|       |%|,  @                  " << endl;
    cout << "@,,|%|   |%|  |%|,,    &&&&&&&&&&&&&&&  ,,,,,,,,|%|             ,,|%|,            @                         " << endl;
    cout << "@,,|%|   |%|  |%|,,             ,,,|%|      &&&&&&&             , |%|,            @                                     " << endl;
    cout << "@,,|%|            ,             ,,,|%|                    |%|   ,,|%|,            @                        " << endl;
    cout << "@,,|%|  &&&&&&&&&&&&&&&         ,,,|%|                    |%|   ,,|%|&&&&&&&&&&&  @                      " << endl;
    cout << "@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,|%|   ,,,,,,,,,,,,,,,,  @                  " << endl;
    cout << "@  ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,         ,,,,,,,,,,,,,  @                 " << endl;
    cout << "@,,|%|     &&&&&&&&&&       &&&&&&&&&&&&        |%|,,,,,,,,           &&&&&&      @                      " << endl;
    cout << "@,,|%|     &&      &&                 &&        |%|########        ,,   ,,  |%|,, @                  " << endl;
    cout << "@,,|%|     &&      &&   G             &&        |%|,,,,,,,,           &&&&&&|%|,, @                " << endl;
    cout << "@,,|%|     &&      &&       &&&&&&&&&&&&        |%|########                 |%|,, @                      " << endl;
    cout << "@,,                                                  ,,,,,                        @ " << endl;
    cout << "@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                      ,,,,,,,,,,,,, @         " << endl;
    cout << "@,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                             ,,,,,, @         " << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    " << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}
void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void print(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}


