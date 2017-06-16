//////////////////////////////////////////////////////////////////////////
// FileName:    WordFont_draw.cpp
// Description: Defines the constructor and drawing logic methods of WordFont
// Author:      Rowboat
// Course:      CIS554 - Object Oriented C++
// Project:     Character Fonts (Homework 5 Assignment)
//////////////////////////////////////////////////////////////////////////

#include <cstdlib>

#include "WordFont.h"


WordFont::WordFont(const std::string word, const char ch, const size_t size, const bool bold) {
    plainWord = word;
    pixelChar = ch;
    fontSize  = size;
    isBold    = bold;

    renderWord();
}

std::string WordFont::drawWord() {
    std::string wordStr;

    for (size_t row = 0; row < fontSize; row++) {
        for (size_t letter = 0; letter < plainWord.size(); letter++) {
            wordStr.append("  ");
            for (size_t pixel = 0; pixel < fontSize; pixel++) {
                if (drawnWord[letter][row * fontSize + pixel]) {
                    wordStr.push_back(pixelChar);
                }
                else {
                    wordStr.push_back(' ');
                }
            }
        }
        wordStr.push_back('\n');
    }

    wordStr.push_back('\n');
    return wordStr;
}

//Renders a new word and converts it into a printable string
std::string WordFont::drawWord(const std::string word, const char ch,
                               const size_t size, const bool bold)
{
    if (word != plainWord || ch != pixelChar || size != fontSize || bold != isBold) {
        renderWord();
    }

    return drawWord();
}


void WordFont::drawTop(std::vector<bool> &letter) {
    for (size_t column = 0; column < fontSize; column++) {
        letter[column] = true;
        if (isBold) {
            letter[column + fontSize] = true;
        }
    }
}

void WordFont::drawTopLeft(std::vector<bool> &letter) {
    for (size_t row = 0; row < (fontSize + 1) / 2; row++) {
        letter[row * fontSize] = true;
        if (isBold) {
            letter[row * fontSize + 1] = true;
        }
    }
}

void WordFont::drawTopLeftDiagonal(std::vector<bool> &letter) {
    for (size_t row = 0; row < (fontSize + 1) / 2; row++) {
        letter[row * fontSize + row] = true;
    }
    if (isBold) {
        for (size_t row = 1; row <= fontSize / 2; row++) {
            letter[row * fontSize + row - 1] = true;
        }
    }
}

void WordFont::drawTopMiddle(std::vector<bool> &letter) {
    for (size_t row = 0; row < (fontSize + 1) / 2; row++) {
        letter[(fontSize - 1) / 2 + fontSize * row] = true;
        if (isBold) {
            letter[(fontSize - 1) / 2 + fontSize * row + 1] = true;
        }
    }
}

void WordFont::drawTopRightDiagonal(std::vector<bool> &letter) {
    for (size_t row = 1; row <= (fontSize + 1) / 2; row++) {
        letter[(fontSize - 1) * row] = true;
    }
    if (isBold) {
        for (size_t row = 1; row <= fontSize / 2; row++) {
            letter[(row + 1) * fontSize - (row)] = true;
        }
    }
}

void WordFont::drawTopRight(std::vector<bool> &letter) {
    for (size_t row = 1; row <= (fontSize + 1) / 2; row++) {
        letter[fontSize * row - 1] = true;
        if (isBold) {
            letter[fontSize * row - 2] = true;
        }
    }
}

void WordFont::drawLeftMiddle(std::vector<bool> &letter) {
    int row = fontSize / 2 - 1;
    for (size_t column = 0; column < (fontSize + 1) / 2; column++) {
        letter[fontSize * row + column] = true;
        if (isBold) {
            letter[fontSize * (row + 1) + column] = true;
        }
    }
}

void WordFont::drawRightMiddle(std::vector<bool> &letter) {
    int row = fontSize / 2 - 1;
    for (size_t column = fontSize / 2; column < fontSize; column++) {
        letter[fontSize * row + column] = true;
        if (isBold) {
            letter[fontSize * (row + 1) + column] = true;
        }
    }
}

void WordFont::drawBottomLeft(std::vector<bool> &letter) {
    for (size_t row = (fontSize + 1) / 2; row < fontSize; row++) {
        letter[row * fontSize] = true;
        if (isBold) {
            letter[row * fontSize + 1] = true;
        }
    }
}

void WordFont::drawBottomLeftDiagonal(std::vector<bool> &letter) {
    for (size_t row = fontSize; row > fontSize / 2; row--) {
        letter[row * fontSize - row] = true;
    }
    if (isBold) {
        for (size_t row = fontSize - 1; row > fontSize / 2; row--) {
            letter[row * fontSize - row - 1] = true;
        }
    }
}

void WordFont::drawBottomMiddle(std::vector<bool> &letter) {
    for (size_t row = fontSize / 2; row < fontSize; row++) {
        letter[(fontSize - 1) / 2 + fontSize * row] = true;
        if (isBold) {
            letter[(fontSize - 1) / 2 + fontSize * row + 1] = true;
        }
    }
}

void WordFont::drawBottomRightDiagonal(std::vector<bool> &letter) {
    for (size_t row = fontSize / 2; row < fontSize; row++) {
        letter[row * fontSize + row] = true;
    }
    if (isBold) {
        for (size_t row = fontSize / 2 + 1; row < fontSize; row++) {
            letter[(row - 1) * fontSize + row] = true;
        }
    }
}

void WordFont::drawBottomRight(std::vector<bool> &letter) {
    for (size_t row = fontSize / 2; row <= fontSize; row++) {
        letter[fontSize * row - 1] = true;
        if (isBold) {
            letter[fontSize * row - 2] = true;
        }
    }
}

void WordFont::drawBottom(std::vector<bool> &letter) {
    int rowEnd = fontSize * fontSize - 1;
    for (size_t column = 0; column < fontSize; column++) {
        letter[rowEnd - column] = true;
        if (isBold) {
            letter[rowEnd - fontSize - column] = true;
        }
    }
}


void WordFont::renderWord() {
    drawnWord.clear();
    drawnWord.resize(plainWord.size());

    for (size_t letterIndex = 0; letterIndex < plainWord.size(); letterIndex++) {
        if (drawnWord[letterIndex].empty()) {
            switch (plainWord[letterIndex]) {
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
                std::cerr << "Error: Letter '" << plainWord[letterIndex] << "' isn't supported."
                          << std::endl;
                exit(EXIT_FAILURE);
            }
        }
    }
}

void WordFont::drawRemainingDuplicates(const std::string letter,
                                       const std::vector<bool> &drawnLetter, const size_t location)
{
    size_t next = plainWord.find_first_of(letter, location+1);
    while (next != std::string::npos) {
        drawnWord[next] = drawnLetter;
        next = plainWord.find_first_of(letter, next + 1);
    }
}
