//////////////////////////////////////////////////////////////////////////
// FileName:    main.cpp
// Description: Creates and launches the WordFont class
// Author:      Rowboat
// Course:      CIS554 - Object Oriented C++
// Project:     Character Fonts (Homework 5 Assignment)
//////////////////////////////////////////////////////////////////////////

#include <cstdlib>
#include <string>

#include "WordFont.h"


std::string promptWord();
char promptPixelCharacter();
unsigned int promptFontSize();
bool promptYes(std::string message);
void printDrawnWord(const std::string word);


//Launches the program, prompts for the word, font, and size, instantiates the
//WordFont class, and prints the word.
int main()
{
    bool notQuit;
    do {
        std::string plainWord = promptWord();
        char pixelChar = promptPixelCharacter();
        unsigned int fontSize = promptFontSize();
        bool isBold = promptYes("Bold");

        WordFont bubbleWord(plainWord, pixelChar, fontSize, isBold);
        std::string drawnWord = bubbleWord.drawWord();

        printDrawnWord(drawnWord);

        notQuit = promptYes("Make another word");
    } while (notQuit);

    return EXIT_SUCCESS;
}


std::string promptWord() {
    std::string word;
    bool isValidLength;

    do {
        std::cout << "Enter a word (" << WordFont::MAX_LENGTH << " letters or less): ";
        std::cin >> word;

        isValidLength = (word.length() <= WordFont::MAX_LENGTH);
        if (!isValidLength) {
            std::cout << "Too long. ";
        }
    } while (!isValidLength);

    return word;
}

char promptPixelCharacter() {
    std::string input;
    std::cout << "Enter the pixel character you want to use to draw: ";
    std::cin >> input;
    return input.at(0);
}

unsigned int promptFontSize() {
    std::string input;
    int fontSize;
    bool isValidSize;

    do {
        std::cout << "Enter the font size (8-12): ";
        std::cin >> input;
        fontSize = std::stoi(input);

        isValidSize = (fontSize >= WordFont::MIN_FONT_SIZE && fontSize <= WordFont::MAX_FONT_SIZE);
        if (!isValidSize) {
            std::cout << "Invalid size. ";
        }
    } while (!isValidSize);

    return static_cast<unsigned int>(fontSize);
}

bool promptYes(std::string message) {
    std::string input;

    std::cout << message << " [y/N]? ";
    std::cin >> input;

    return (input == "y" || input == "Y");
}

void printDrawnWord(const std::string word) {
    std::cout << word;
}
