//////////////////////////////////////////////////////////////////////////
// FileName:    WordFont.cpp
// Description: Defines all methods of the interface WordFont.h
// Author:      Terry Weiss 466751950
// Project:     Character Fonts (Homework 5 Assignment)
//////////////////////////////////////////////////////////////////////////

#include "WordFont.h"


WordFont::WordFont()
{
    plainWord = "";
    pixelChar = '*';
    fontSize  = MIN_FONT_SIZE;
    isBold    = false;
}

void WordFont::go()
{
    promptWord();
    promptPixelCharacter();
    promptFontSize();
    promptBold();

    drawWord();

    printDrawnWord();
}


void WordFont::promptWord()
{
    std::cout << "Enter a word (8 letters or less): ";
    std::cin >> plainWord;
}

void WordFont::promptPixelCharacter()
{
    std::cout << "Enter the pixel character you want to use to draw: ";
    std::cin >> pixelChar;

    //Using switch because how am I supposed to use a switch for two selections?
    switch (pixelChar)
    {
    case '\0':
        pixelChar = '*';
    }
}

void WordFont::promptFontSize()
{
    std::cout << "Enter the font size (8-12): ";
    std::cin >> fontSize;
}

void WordFont::promptBold()
{
    char input = '\0';

    std::cout << "Bold [y/N]? ";
    std::cin >> input;

    //isBold = (input == "y");
    //Using switch to try to satisfy switch requirement
    switch (input)
    {
    case "y":
    case "Y":
        isBold = true;
    default:
        isBold = false;
    }
}


//Draws an A and places it in drawnWord at the corresponding location. It then scans
//the remaining letters in plainWord for duplicates and replaces them as defined in
//drawRemainingDuplicates. All draw<Letter> methods behave accordingly.
void WordFont::drawA(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawTopRight(letter);
    drawLeftMiddle(letter);
    drawRightMiddle(letter);
    drawBottomLeft(letter);
    drawBottomRight(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Aa", letter, location);
}

//Draws a B
void WordFont::drawB(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopMiddle(letter);
    drawTopRight(letter);
    drawRightMiddle(letter);
    drawBottomMiddle(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Bb", letter, location);
}

//Draws a C
void WordFont::drawC(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawBottomLeft(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Cc", letter, location);
}

//Draws a D
void WordFont::drawD(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopMiddle(letter);
    drawTopRight(letter);
    drawBottomMiddle(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Dd", letter, location);
}

//Draws an E
void WordFont::drawE(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawLeftMiddle(letter);
    drawBottomLeft(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ee", letter, location);
}

//Draws an F
void WordFont::drawF(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawLeftMiddle(letter);
    drawBottomLeft(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ff", letter, location);
}

//Draws a G
void WordFont::drawG(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawRightMiddle(letter);
    drawBottomLeft(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Gg", letter, location);
}

//Draws an H
void WordFont::drawH(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawTopRight(letter);
    drawRightMiddle(letter);
    drawLeftMiddle(letter);
    drawBottomLeft(letter);
    drawBottomRight(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Hh", letter, location);
}

//Draws an I
void WordFont::drawI(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopMiddle(letter);
    drawBottomMiddle(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ii", letter, location);
}

//Draws a J
void WordFont::drawJ(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopRight(letter);
    drawBottomLeft(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Jj", letter, location);
}

//Draws a K
void WordFont::drawK(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawTopRightDiagonal(letter);
    drawLeftMiddle(letter);
    drawBottomLeft(letter);
    drawBottomRightDiagonal(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Kk", letter, location);
}

//Draws an L
void WordFont::drawL(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawBottomLeft(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ll", letter, location);
}

//Draws an M
void WordFont::drawM(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawTopLeftDiagonal(letter);
    drawTopRightDiagonal(letter);
    drawTopRight(letter);
    drawBottomLeft(letter);
    drawBottomRight(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Mm", letter, location);
}

//Draws an N
void WordFont::drawN(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawTopLeftDiagonal(letter);
    drawTopRight(letter);
    drawBottomLeft(letter);
    drawBottomRightDiagonal(letter);
    drawBottomRight(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Nn", letter, location);
}

//Draws an O
void WordFont::drawO(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawTopRight(letter);
    drawBottomLeft(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Oo", letter, location);
}

//Draws a P
void WordFont::drawP(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawTopRight(letter);
    drawLeftMiddle(letter);
    drawRightMiddle(letter);
    drawBottomLeft(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Pp", letter, location);
}

//Draws a Q
void WordFont::drawQ(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawTopRight(letter);
    drawBottomLeft(letter);
    drawBottomRightDiagonal(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Qq", letter, location);
}

//Draws an R
void WordFont::drawR(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawTopRight(letter);
    drawLeftMiddle(letter);
    drawRightMiddle(letter);
    drawBottomLeft(letter);
    drawBottomRightDiagonal(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Rr", letter, location);
}

//Draws an S
void WordFont::drawS(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawLeftMiddle(letter);
    drawRightMiddle(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ss", letter, location);
}

//Draws a T
void WordFont::drawT(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopMiddle(letter);
    drawBottomMiddle(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Tt", letter, location);
}

//Draws a U
void WordFont::drawU(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawTopRight(letter);
    drawBottomLeft(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Uu", letter, location);
}

//Draws a V
void WordFont::drawV(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawTopRightDiagonal(letter);
    drawBottomLeft(letter);
    drawBottomLeftDiagonal(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Vv", letter, location);
}

//Draws a W
void WordFont::drawW(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawTopRight(letter);
    drawBottomLeft(letter);
    drawBottomLeftDiagonal(letter);
    drawBottomRightDiagonal(letter);
    drawBottomRight(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ww", letter, location);
}

//Draws an X
void WordFont::drawX(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeftDiagonal(letter);
    drawTopRightDiagonal(letter);
    drawBottomLeftDiagonal(letter);
    drawBottomRightDiagonal(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Xx", letter, location);
}

//Draws a Y
void WordFont::drawY(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeftDiagonal(letter);
    drawTopRightDiagonal(letter);
    drawBottomMiddle(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Yy", letter, location);
}

//Draws a Z
void WordFont::drawZ(const size_t location)
{
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopRightDiagonal(letter);
    drawBottomLeftDiagonal(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Zz", letter, location);
}

void WordFont::drawTop(std::vector<bool> &letter)
{
    for (size_t column = 0; column < fontSize; column++)
    {
        letter[column] = true;
        if (isBold)
        {
            letter[column + fontSize] = true;
        }
    }
}

void WordFont::drawTopLeft(std::vector<bool> &letter)
{
    for (size_t row = 0; row < (fontSize + 1) / 2; row++)
    {
        letter[row * fontSize] = true;
        if (isBold)
        {
            letter[row * fontSize + 1] = true;
        }
    }
}


void WordFont::drawTopLeftDiagonal(std::vector<bool> &letter)
{
    for (size_t row = 0; row < (fontSize + 1) / 2; row++)
    {
        letter[row * fontSize + row] = true;
    }
    if (isBold)
    {
        for (size_t row = 1; row <= fontSize / 2; row++)
        {
            letter[row * fontSize + row - 1] = true;
        }
    }
}

void WordFont::drawTopMiddle(std::vector<bool> &letter)
{
    for (size_t row = 0; row < (fontSize + 1) / 2; row++)
    {
        letter[(fontSize - 1) / 2 + fontSize * row] = true;
        if (isBold)
        {
            letter[(fontSize - 1) / 2 + fontSize * row + 1] = true;
        }
    }
}

void WordFont::drawTopRightDiagonal(std::vector<bool> &letter)
{
    for (size_t row = 1; row <= (fontSize + 1) / 2; row++)
    {
        letter[(fontSize - 1) * row] = true;
    }
    if (isBold)
    {
        for (size_t row = 1; row <= fontSize / 2; row++)
        {
            letter[(row + 1) * fontSize - (row)] = true;
        }
    }
}

void WordFont::drawTopRight(std::vector<bool> &letter)
{
    for (size_t row = 1; row <= (fontSize + 1) / 2; row++)
    {
        letter[fontSize * row - 1] = true;
        if (isBold)
        {
            letter[fontSize * row - 2] = true;
        }
    }
}

void WordFont::drawLeftMiddle(std::vector<bool> &letter)
{
    int row = fontSize / 2 - 1;
    for (size_t column = 0; column < (fontSize + 1) / 2; column++)
    {
        letter[fontSize * row + column] = true;
        if (isBold)
        {
            letter[fontSize * (row + 1) + column] = true;
        }
    }
}

void WordFont::drawRightMiddle(std::vector<bool> &letter)
{
    int row = fontSize / 2 - 1;
    for (size_t column = fontSize / 2; column < fontSize; column++)
    {
        letter[fontSize * row + column] = true;
        if (isBold)
        {
            letter[fontSize * (row + 1) + column] = true;
        }
    }
}

void WordFont::drawBottomLeft(std::vector<bool> &letter)
{
    for (size_t row = (fontSize + 1) / 2; row < fontSize; row++)
    {
        letter[row * fontSize] = true;
        if (isBold)
        {
            letter[row * fontSize + 1] = true;
        }
    }
}

void WordFont::drawBottomLeftDiagonal(std::vector<bool> &letter)
{
    for (size_t row = fontSize; row > fontSize / 2; row--)
    {
        letter[row * fontSize - row] = true;
    }
    if (isBold)
    {
        for (size_t row = fontSize - 1; row > fontSize / 2; row--)
        {
            letter[row * fontSize - row - 1] = true;
        }
    }
}

void WordFont::drawBottomMiddle(std::vector<bool> &letter)
{
    for (size_t row = fontSize / 2; row < fontSize; row++)
    {
        letter[(fontSize - 1) / 2 + fontSize * row] = true;
        if (isBold)
        {
            letter[(fontSize - 1) / 2 + fontSize * row + 1] = true;
        }
    }
}

void WordFont::drawBottomRightDiagonal(std::vector<bool> &letter)
{
    for (size_t row = fontSize / 2; row < fontSize; row++)
    {
        letter[row * fontSize + row] = true;
    }
    if (isBold)
    {
        for (size_t row = fontSize / 2 + 1; row < fontSize; row++)
        {
            letter[(row - 1) * fontSize + row] = true;
        }
    }
}

void WordFont::drawBottomRight(std::vector<bool> &letter)
{
    for (size_t row = fontSize / 2; row <= fontSize; row++)
    {
        letter[fontSize * row - 1] = true;
        if (isBold)
        {
            letter[fontSize * row - 2] = true;
        }
    }
}

void WordFont::drawBottom(std::vector<bool> &letter)
{
    int rowEnd = fontSize * fontSize - 1;
    for (size_t column = 0; column < fontSize; column++)
    {
        letter[rowEnd - column] = true;
        if (isBold)
        {
            letter[rowEnd - fontSize - column] = true;
        }
    }
}

void WordFont::drawWord()
{
    drawnWord.clear();
    drawnWord.resize(plainWord.size());

    for (size_t letterIndex = 0; letterIndex < plainWord.size(); letterIndex++)
    {
        if (drawnWord[letterIndex].empty())
        {
            switch (plainWord[letterIndex])
            {
            case 'a':
            case 'A':
                drawA(letterIndex);
                break;
            case 'b':
            case 'B':
                drawB(letterIndex);
                break;
            case 'c':
            case 'C':
                drawC(letterIndex);
                break;
            case 'd':
            case 'D':
                drawD(letterIndex);
                break;
            case 'e':
            case 'E':
                drawE(letterIndex);
                break;
            case 'f':
            case 'F':
                drawF(letterIndex);
                break;
            case 'g':
            case 'G':
                drawG(letterIndex);
                break;
            case 'h':
            case 'H':
                drawH(letterIndex);
                break;
            case 'i':
            case 'I':
                drawI(letterIndex);
                break;
            case 'j':
            case 'J':
                drawJ(letterIndex);
                break;
            case 'k':
            case 'K':
                drawK(letterIndex);
                break;
            case 'l':
            case 'L':
                drawL(letterIndex);
                break;
            case 'm':
            case 'M':
                drawM(letterIndex);
                break;
            case 'n':
            case 'N':
                drawN(letterIndex);
                break;
            case 'o':
            case 'O':
                drawO(letterIndex);
                break;
            case 'p':
            case 'P':
                drawP(letterIndex);
                break;
            case 'q':
            case 'Q':
                drawQ(letterIndex);
                break;
            case 'r':
            case 'R':
                drawR(letterIndex);
                break;
            case 's':
            case 'S':
                drawS(letterIndex);
                break;
            case 't':
            case 'T':
                drawT(letterIndex);
                break;
            case 'u':
            case 'U':
                drawU(letterIndex);
                break;
            case 'v':
            case 'V':
                drawV(letterIndex);
                break;
            case 'w':
            case 'W':
                drawW(letterIndex);
                break;
            case 'x':
            case 'X':
                drawX(letterIndex);
                break;
            case 'y':
            case 'Y':
                drawY(letterIndex);
                break;
            case 'z':
            case 'Z':
                drawZ(letterIndex);
                break;
            default:
                std::cerr << "Error: Letter '" << plainWord[letterIndex] << "' isn't supported." << std::endl;
                std::exit(EXIT_FAILURE);
            }
        }
    }
}

void WordFont::drawRemainingDuplicates(const std::string letter, const std::vector<bool> &drawnLetter,
    const size_t location)
{
    size_t next = plainWord.find_first_of(letter, location + 1);
    while (next != std::string::npos)
    {
        drawnWord[next] = drawnLetter;
        next = plainWord.find_first_of(letter, next + 1);
    }
}

void WordFont::printDrawnWord()
{
    for (size_t row = 0; row < fontSize; row++)
    {
        for (size_t letter = 0; letter < plainWord.size(); letter++)
        {
            std::cout << "  ";
            for (size_t pixel = 0; pixel < fontSize; pixel++)
            {
                if (drawnWord[letter][row * fontSize + pixel])
                {
                    std::cout << pixelChar;
                }
                else
                {
                    std::cout << ' ';
                }
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}
