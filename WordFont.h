#pragma once
#ifndef WORD_FONT_H
#define WORD_FONT_H

//////////////////////////////////////////////////////////////////////////
// FileName:    WordFont.h
// Description: Declares all the member functions and attributes of the WordFont class
// Author:      Rowboat
// Course:      CIS554 - Object Oriented C++
// Project:     Character Fonts (Homework 5 Assignment)
//////////////////////////////////////////////////////////////////////////

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <bitset>


class WordFont
{
private:
    //Current plain-text word
    std::string plainWord;

    //Character to draw with
    char pixelChar;

    //Font size (should always be between MIN_FONT_SIZE and MAX_FONT_SIZE)
    unsigned int fontSize;

    //Whether the word should be bold
    bool isBold;

    //Current word in raw vector form. The outer vector is a list of letters and each inner
    //vector is the list of pixels turned either "on" or "off".
    std::vector< std::vector<bool> > drawnWord;


    //Draws an A and places it in drawnWord at the corresponding location. It then scans
    //the remaining letters in plainWord for duplicates and replaces them as defined in
    //drawRemainingDuplicates. All draw<Letter> methods behave accordingly.
    void drawA(const size_t location);

    //Draws a B
    void drawB(const size_t location);

    //Draws a C
    void drawC(const size_t location);

    //Draws a D
    void drawD(const size_t location);

    //Draws an E
    void drawE(const size_t location);

    //Draws an F
    void drawF(const size_t location);

    //Draws a G
    void drawG(const size_t location);

    //Draws an H
    void drawH(const size_t location);

    //Draws an I
    void drawI(const size_t location);

    //Draws a J
    void drawJ(const size_t location);

    //Draws a K
    void drawK(const size_t location);

    //Draws an L
    void drawL(const size_t location);

    //Draws an M
    void drawM(const size_t location);

    //Draws an N
    void drawN(const size_t location);

    //Draws an O
    void drawO(const size_t location);

    //Draws a P
    void drawP(const size_t location);

    //Draws a Q
    void drawQ(const size_t location);

    //Draws an R
    void drawR(const size_t location);

    //Draws an S
    void drawS(const size_t location);

    //Draws a T
    void drawT(const size_t location);

    //Draws a U
    void drawU(const size_t location);

    //Draws a V
    void drawV(const size_t location);

    //Draws a W
    void drawW(const size_t location);

    //Draws an X
    void drawX(const size_t location);

    //Draws a Y
    void drawY(const size_t location);

    //Draws a Z
    void drawZ(const size_t location);

    //Draws the top segment on a given letter
    void drawTop(std::vector<bool> &letter);

    //Draws the top left segment on a given letter
    void drawTopLeft(std::vector<bool> &letter);

    //Draws the top left diagonal segment on a given letter
    void drawTopLeftDiagonal(std::vector<bool> &letter);

    //Draws the top middle vertical segment on a given letter
    void drawTopMiddle(std::vector<bool> &letter);

    //Draws the top right diagonal segment on a given letter
    void drawTopRightDiagonal(std::vector<bool> &letter);

    //Draws the top right segment on a given letter
    void drawTopRight(std::vector<bool> &letter);

    //Draws the left middle horizontal segment on a given letter
    void drawLeftMiddle(std::vector<bool> &letter);

    //Draws the right middle horizontal segment on a given letter
    void drawRightMiddle(std::vector<bool> &letter);

    //Draws the bottom left segment on a given letter
    void drawBottomLeft(std::vector<bool> &letter);

    //Draws the bottom left diagonal segment on a given letter
    void drawBottomLeftDiagonal(std::vector<bool> &letter);

    //Draws the bottom middle vertical segment on a given letter
    void drawBottomMiddle(std::vector<bool> &letter);

    //Draws the bottom right diagonal segment on a given letter
    void drawBottomRightDiagonal(std::vector<bool> &letter);

    //Draws the bottom right segment on a given letter
    void drawBottomRight(std::vector<bool> &letter);

    //Draws the bottom segment on a given letter
    void drawBottom(std::vector<bool> &letter);

    //Looks for any duplicates of the given letter in the plain word and copies
    //the drawn letter into the corresponding locations of the drawn word vector buffer.
    void drawRemainingDuplicates(const std::string plainLetter,
                                 const std::vector<bool> &drawnLetter, const size_t location);

    //Draws each letter of the word and adds it to drawnWord. If the required character isn't
    //supported, an error message is given and the program ends immediately. Currently all letters
    //are supported. This should be called the first time a word is being drawn after changes have
    //been made.
    void renderWord();

public:
    //Maximum length of a word
    static const size_t MAX_LENGTH = 8;

    //Minimum characters tall and wide per letter
    static const unsigned int MIN_FONT_SIZE = 8;

    //Maximum characters tall and wide per letter
    static const unsigned int MAX_FONT_SIZE = 12;

    //Constructs the WordFont class and renders the first word
    WordFont(const std::string plainWord, const char pixelChar,
             const size_t fontSize = MIN_FONT_SIZE, const bool isBold = true);

    //Renders a new word and converts it into a printable string
    std::string drawWord(const std::string plainWord, const char pixelChar,
                         const size_t fontSize = MIN_FONT_SIZE, const bool isBold = true);

    //Draws the last word rendered. This allows for words to be drawn without having to re-enter
    //the parameters immediately after the constructor, or if no changes have been made.
    std::string drawWord();
};


#endif //WORD_FONT_H
