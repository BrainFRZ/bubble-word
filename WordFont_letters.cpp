//////////////////////////////////////////////////////////////////////////
// FileName:    WordFont_letters.cpp
// Description: Defines the letter methods of interface WordFont.h
// Author:      Rowboat
// Course:      CIS554 - Object Oriented C++
// Project:     Character Fonts (Homework 5 Assignment)
//////////////////////////////////////////////////////////////////////////

#include "WordFont.h"


//Draws an A and places it in drawnWord at the corresponding location. It then scans
//the remaining letters in plainWord for duplicates and replaces them as defined in
//drawRemainingDuplicates in WordFont_draw.cpp. All draw<Letter> methods behave similarly.
void WordFont::drawA(const size_t location) {
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
void WordFont::drawB(const size_t location) {
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
void WordFont::drawC(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawBottomLeft(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Cc", letter, location);
}

//Draws a D
void WordFont::drawD(const size_t location) {
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
void WordFont::drawE(const size_t location) {
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
void WordFont::drawF(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopLeft(letter);
    drawLeftMiddle(letter);
    drawBottomLeft(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ff", letter, location);
}

//Draws a G
void WordFont::drawG(const size_t location) {
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
void WordFont::drawH(const size_t location) {
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
void WordFont::drawI(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopMiddle(letter);
    drawBottomMiddle(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ii", letter, location);
}

//Draws a J
void WordFont::drawJ(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopRight(letter);
    drawBottomLeft(letter);
    drawBottomRight(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Jj", letter, location);
}

//Draws a K
void WordFont::drawK(const size_t location) {
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
void WordFont::drawL(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawBottomLeft(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Ll", letter, location);
}

//Draws an M
void WordFont::drawM(const size_t location) {
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
void WordFont::drawN(const size_t location) {
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
void WordFont::drawO(const size_t location) {
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
void WordFont::drawP(const size_t location) {
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
void WordFont::drawQ(const size_t location) {
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
void WordFont::drawR(const size_t location) {
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
void WordFont::drawS(const size_t location) {
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
void WordFont::drawT(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopMiddle(letter);
    drawBottomMiddle(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Tt", letter, location);
}

//Draws a U
void WordFont::drawU(const size_t location) {
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
void WordFont::drawV(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeft(letter);
    drawTopRightDiagonal(letter);
    drawBottomLeft(letter);
    drawBottomLeftDiagonal(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Vv", letter, location);
}

//Draws a W
void WordFont::drawW(const size_t location) {
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
void WordFont::drawX(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeftDiagonal(letter);
    drawTopRightDiagonal(letter);
    drawBottomLeftDiagonal(letter);
    drawBottomRightDiagonal(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Xx", letter, location);
}

//Draws a Y
void WordFont::drawY(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTopLeftDiagonal(letter);
    drawTopRightDiagonal(letter);
    drawBottomMiddle(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Yy", letter, location);
}

//Draws a Z
void WordFont::drawZ(const size_t location) {
    std::vector<bool> letter(fontSize * fontSize, false);
    drawTop(letter);
    drawTopRightDiagonal(letter);
    drawBottomLeftDiagonal(letter);
    drawBottom(letter);

    drawnWord[location] = letter;

    drawRemainingDuplicates("Zz", letter, location);
}
