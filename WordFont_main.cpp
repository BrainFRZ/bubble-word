//////////////////////////////////////////////////////////////////////////
// FileName:    WordFont_main.cpp
// Description: Defines the constructor and IO methods of interface WordFont.h
// Author:      Terry Weiss 466751950
// Project:     Character Fonts (Homework 5 Assignment)
//////////////////////////////////////////////////////////////////////////

#include "WordFont.h"


WordFont::WordFont() {
    plainWord = "";
    pixelChar = '*';
    fontSize  = MIN_FONT_SIZE;
    isBold    = false;
}

void WordFont::go() {
    promptWord();
    promptPixelCharacter();
    promptFontSize();
    promptBold();

    drawWord();

    printDrawnWord();
}


void WordFont::promptWord() {
    std::cout << "Enter a word (8 letters or less): ";
    std::cin >> plainWord;
}

void WordFont::promptPixelCharacter() {
    std::cout << "Enter the pixel character you want to use to draw: ";
    std::cin >> pixelChar;

    // Default pixel character is *
    if (pixelChar == '\0') {
        pixelChar = '*';
    }
}

void WordFont::promptFontSize() {
    std::cout << "Enter the font size (8-12): ";
    std::cin >> fontSize;
}

void WordFont::promptBold() {
    char input;

    std::cout << "Bold [y/N]? ";
    std::cin >> input;

    isBold = (input == 'y' || input == 'Y');
}


void WordFont::printDrawnWord() {
    for (size_t row = 0; row < fontSize; row++) {
        for (size_t letter = 0; letter < plainWord.size(); letter++) {
            std::cout << "  ";
            for (size_t pixel = 0; pixel < fontSize; pixel++) {
                if (drawnWord[letter][row * fontSize + pixel]) {
                    std::cout << pixelChar;
                }
                else {
                    std::cout << ' ';
                }
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}
