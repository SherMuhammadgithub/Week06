#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printEnemy();
void eraseEnemy();
string changeEnemyOneDirection(string enemyOneDirection);
void moveEnemyOne(string direction);
void printEnemyTwo();
void eraseEnemyTwo();
string changeEnemyTwoDirection(string enemyTwoDirection);
void moveEnemyTwo(string direction);
void printEnemyThree();
void eraseEnemyThree();
string changeEnemyThreeDirectionX(string directionX);
string changeEnemyThreeDirectionY(string directionY);
void moveEnemyThree(string directionX, string directionY);
void printMaze();
void printPlayer();
void movePlayerLeft();
void movePlyerRight();
void movePlayerUp();
void movePlayerDown();
void erasePlayer();
// Making Pills to increse the score
void pills();
void pill2();
void pill3();
int PlayerScore = 0;
void printPlayerScore();
int eX = 2, eY = 2;
int eX1 = 102, eY1 = 8, eX2 = 78, eY2 = 2;
int pX = 10, pY = 16;
int playerScoX = 140, palyerScoY = 4;
int pillX = 56, pillY = 30, pill2X = 78, pill2Y = 30;
int pill3X = 10, pill3Y = 8;

main()
{
    string enemyOneDirection = "right", enemyTwoDirection = "down", enemyThreeDirectionX = "left", enemyThreeDirectionY = "down";
    system("cls");
    printMaze();
    printPlayerScore();
    pills();
    pill2();
    pill3();
    printEnemy();
    printEnemyTwo();
    printEnemyThree();
    printPlayer();

    while (true)
    {
        enemyOneDirection = changeEnemyOneDirection(enemyOneDirection);
        moveEnemyOne(enemyOneDirection);
        enemyTwoDirection = changeEnemyTwoDirection(enemyTwoDirection);
        moveEnemyTwo(enemyTwoDirection);
        enemyThreeDirectionX = changeEnemyThreeDirectionX(enemyThreeDirectionX);
        enemyThreeDirectionY = changeEnemyThreeDirectionY(enemyThreeDirectionY);
        moveEnemyThree(enemyThreeDirectionX, enemyThreeDirectionY);
        if (GetAsyncKeyState(VK_LEFT))

        {
            

            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {

            if (pX == (pillX - 20))
            {
                PlayerScore += 1;
                printPlayerScore();
            }
            if (pX == (pill2X - 20))
            {
                PlayerScore += 1;
                printPlayerScore();
            }

            movePlyerRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            if (pY == (pill3Y + 1))
            {
                PlayerScore += 1;
                printPlayerScore();
            }

            movePlayerUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }

        Sleep(100);
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMaze()
{
    cout << "################################################################################################################################" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "#                                                                                                                              #" << endl;
    cout << "################################################################################################################################";
}

void printEnemy()
{
    // gotoxy(eX, eY);
    // cout << " E1 ";
    gotoxy(eX, eY);
    cout << "          ***          " << endl;
    gotoxy(eX, eY + 1);
    cout << "        **   **        " << endl;
    gotoxy(eX, eY + 2);
    cout << "       *********       " << endl;
    gotoxy(eX, eY + 3);
    cout << "     **         **     " << endl;
    gotoxy(eX, eY + 4);
    cout << "*******   |  |  *******" << endl;
    gotoxy(eX, eY + 5);
    cout << "           \\/          ";
}
void eraseEnemy()
{
    gotoxy(eX, eY);
    cout << "                       ";
    gotoxy(eX, eY + 1);
    cout << "                       ";
    gotoxy(eX, eY + 2);
    cout << "                       ";
    gotoxy(eX, eY + 3);
    cout << "                       ";
    gotoxy(eX, eY + 4);
    cout << "                       ";
    gotoxy(eX, eY + 5);
    cout << "                       ";
}

string changeEnemyOneDirection(string enemyDirection)
{
    if (eX + 15 == 60 && enemyDirection == "right")
    {
        enemyDirection = "left";
    }
    else if (eX == 2 && enemyDirection == "left")
    {
        enemyDirection = "right";
    }
    return enemyDirection;
}
void moveEnemyOne(string enemyOneDirection)
{
    eraseEnemy();
    if (enemyOneDirection == "left")
    {
        eX = eX - 1;
    }
    if (enemyOneDirection == "right")
    {
        eX = eX + 1;
    }
    printEnemy();
}
void printEnemyTwo()
{
    gotoxy(eX1, eY1);
    cout << "          ***          " << endl;
    gotoxy(eX1, eY1 + 1);
    cout << "        **   **        " << endl;
    gotoxy(eX1, eY1 + 2);
    cout << "       *********       " << endl;
    gotoxy(eX1, eY1 + 3);
    cout << "     **         **     " << endl;
    gotoxy(eX1, eY1 + 4);
    cout << "*******   |  |  *******" << endl;
    gotoxy(eX1, eY1 + 5);
    cout << "           \\/          ";
}
void eraseEnemyTwo()
{
    gotoxy(eX1, eY1);
    cout << "                       ";
    gotoxy(eX1, eY1 + 1);
    cout << "                       ";
    gotoxy(eX1, eY1 + 2);
    cout << "                       ";
    gotoxy(eX1, eY1 + 3);
    cout << "                       ";
    gotoxy(eX1, eY1 + 4);
    cout << "                       ";
    gotoxy(eX1, eY1 + 5);
    cout << "                       ";
}
string changeEnemyTwoDirection(string enemyTwoDirection)
{
    if (eY1 + 5 == 26 && enemyTwoDirection == "down")
    {
        enemyTwoDirection = "up";
    }
    else if (eY1 == 2 && enemyTwoDirection == "up")
    {
        enemyTwoDirection = "down";
    }
    return enemyTwoDirection;
}
void moveEnemyTwo(string enemyTwoDirection)
{
    eraseEnemyTwo();
    if (enemyTwoDirection == "up")
    {
        eY1 = eY1 - 1;
    }
    if (enemyTwoDirection == "down")
    {
        eY1 = eY1 + 1;
    }
    printEnemyTwo();
}
// print enmy three
void printEnemyThree()
{
    gotoxy(eX2, eY2);
    cout << "          ***          " << endl;
    gotoxy(eX2, eY2 + 1);
    cout << "        **   **        " << endl;
    gotoxy(eX2, eY2 + 2);
    cout << "       *********       " << endl;
    gotoxy(eX2, eY2 + 3);
    cout << "     **         **     " << endl;
    gotoxy(eX2, eY2 + 4);
    cout << "*******   |  |  *******" << endl;
    gotoxy(eX2, eY2 + 5);
    cout << "           \\/          ";
}

// erase Enemy three
void eraseEnemyThree()
{
    gotoxy(eX2, eY2);
    cout << "                       ";
    gotoxy(eX2, eY2 + 1);
    cout << "                       ";
    gotoxy(eX2, eY2 + 2);
    cout << "                       ";
    gotoxy(eX2, eY2 + 3);
    cout << "                       ";
    gotoxy(eX2, eY2 + 4);
    cout << "                       ";
    gotoxy(eX2, eY2 + 5);
    cout << "                       ";
}
string changeEnemyThreeDirectionX(string enemyThreeDirectionX)
{
    if (eX2 == 60 && enemyThreeDirectionX == "left")
    {
        enemyThreeDirectionX = "right";
    }
    else if (eX2 == 78 && enemyThreeDirectionX == "right")
    {
        enemyThreeDirectionX = "left";
    }
    return enemyThreeDirectionX;
}
string changeEnemyThreeDirectionY(string enemyThreeDirectionY)
{

    if (eY2 == 20 && enemyThreeDirectionY == "down")
    {
        enemyThreeDirectionY = "up";
    }
    else if (eY2 == 2 && enemyThreeDirectionY == "up")
    {
        enemyThreeDirectionY = "down";
    }
    return enemyThreeDirectionY;
}
void moveEnemyThree(string directionX, string directionY)
{
    eraseEnemyThree();
    if (directionX == "left")
    {
        eX2 = eX2 - 1;
    }
    if (directionX == "right")
    {
        eX2 = eX2 + 1;
    }
    if (directionY == "down")
    {
        eY2 = eY2 + 1;
    }
    if (directionY == "up")
    {
        eY2 = eY2 - 1;
    }

    printEnemyThree();
}

void printPlayer()
{

    gotoxy(pX, pY);
    cout << "         *         " << endl;
    gotoxy(pX, pY + 1);
    cout << "       ** **       " << endl;
    gotoxy(pX, pY + 2);
    cout << "      **   **      " << endl;
    gotoxy(pX, pY + 3);
    cout << "     **     **     " << endl;
    gotoxy(pX, pY + 4);
    cout << "    **#######**    " << endl;
    gotoxy(pX, pY + 5);
    cout << "   **   ----  **   " << endl;
    gotoxy(pX, pY + 6);
    cout << "  **   |    |  **  " << endl;
    gotoxy(pX, pY + 7);
    cout << "  **    ----   **  " << endl;
    gotoxy(pX, pY + 8);
    cout << "  **###########**  " << endl;
    gotoxy(pX, pY + 9);
    cout << "   **         **   " << endl;
    gotoxy(pX, pY + 10);
    cout << " .. **       ** .. " << endl;
    gotoxy(pX, pY + 11);
    cout << "|  | **     ** |  |" << endl;
    gotoxy(pX, pY + 12);
    cout << "|  |   *****   |  |" << endl;
    gotoxy(pX, pY + 13);
    cout << "*  *    '''    *  *" << endl;
    gotoxy(pX, pY + 14);
    cout << " **     ***     ** " << endl;
}
void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "                   ";
    gotoxy(pX, pY + 1);
    cout << "                   ";
    gotoxy(pX, pY + 2);
    cout << "                   ";
    gotoxy(pX, pY + 3);
    cout << "                   ";
    gotoxy(pX, pY + 4);
    cout << "                   ";
    gotoxy(pX, pY + 5);
    cout << "                   ";
    gotoxy(pX, pY + 5);
    cout << "                   ";
    gotoxy(pX, pY + 6);
    cout << "                   ";
    gotoxy(pX, pY + 7);
    cout << "                   ";
    gotoxy(pX, pY + 8);
    cout << "                   ";
    gotoxy(pX, pY + 9);
    cout << "                   ";
    gotoxy(pX, pY + 10);
    cout << "                   ";
    gotoxy(pX, pY + 11);
    cout << "                   ";

    gotoxy(pX, pY + 12);
    cout << "                   ";

    gotoxy(pX, pY + 13);
    cout << "                   ";

    gotoxy(pX, pY + 14);
    cout << "                   ";
}
void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}
void movePlyerRight()
{
    if (getCharAtxy(pX + 20, pY) == ' ')
    {
        erasePlayer();
        pX = pX + 1;

        printPlayer();
    }
}

void movePlayerUp()
{
    if (getCharAtxy(pX, pY - 1) == ' ')
    {
        erasePlayer();
        pY = pY - 1;
        printPlayer();
    }
}
void movePlayerDown()
{
    if (getCharAtxy(pX, pY + 15) == ' ')
    {
        erasePlayer();
        pY = pY + 1;
        printPlayer();
    }
}
void printPlayerScore()
{
    gotoxy(playerScoX, palyerScoY);
    cout << "*********************" << endl;
    gotoxy(playerScoX, palyerScoY + 1);
    cout << "|                   |" << endl;
    gotoxy(playerScoX, palyerScoY + 2);
    cout << "| PLAYER S C O R E  |" << endl;
    gotoxy(playerScoX, palyerScoY + 3);
    cout << "|                   |" << endl;
    gotoxy(playerScoX, palyerScoY + 4);
    cout << "*********************" << endl;
    gotoxy(playerScoX, palyerScoY + 6);

    cout << " Player Score: " << PlayerScore;
}
void pills()
{
    gotoxy(pillX, pillY);
    cout << "+";
}
void pill2()
{
    gotoxy(pill2X, pill2Y);
    cout << "+";
}
void pill3()
{
    gotoxy(pill3X, pill3Y);
    cout << "+";
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}