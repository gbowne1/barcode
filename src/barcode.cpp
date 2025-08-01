#include "../include/barcode.h"
#include <iostream>
#include <map>

// UPC encoding patterns
const std::map<char, std::string> upcEncoding = {
    {'0', "0001101"}, {'1', "0011001"}, {'2', "0010011"}, {'3', "0111101"},
    {'4', "0100011"}, {'5', "0110001"}, {'6', "0101111"}, {'7', "0111011"},
    {'8', "0110111"}, {'9', "0001011"}
};

// Code 39 encoding patterns
const std::map<char, std::string> code39Encoding = {
    {'A', "100010101"}, {'B', "101001011"}, {'C', "101000101"},
    {'D', "100100101"}, {'E', "100101001"}, {'F', "101010001"},
    {'G', "101001001"}, {'H', "100101101"}, {'I', "100101011"},
    {'J', "101011001"}, {'K', "100010011"}, {'L', "101001101"},
    {'M', "100100011"}, {'N', "100101001"}, {'O', "101010101"},
    {'P', "101001010"}, {'Q', "100100101"}, {'R', "100101010"},
    {'S', "101010010"}, {'T', "101001001"}, {'U', "100010101"},
    {'V', "101001011"}, {'W', "101000101"}, {'X', "100100101"},
    {'Y', "100101001"}, {'Z', "101010001"}, {'0', "101010101"},
    {'-', "100010101"}, {' ', "100100101"}, {'$', "100101001"},
    {'/', "101001010"}, {'+', "101010001"}, {'%', "100101010"}
};

std::string generateUPC(const std::string& upc) {
    std::string barcode;
    for (char digit : upc) {
        barcode += upcEncoding.at(digit);
    }
    return barcode;
}

std::string generateCode39(const std::string& data) {
    std::string barcode;
    for (char ch : data) {
        barcode += code39Encoding.at(ch);
    }
    return barcode;
}

void drawBarcode(const std::string& barcode) {
    for (char bit : barcode) {
        if (bit == '1') {
            std::cout << "|";  // Draw a bar
        } else {
            std::cout << " ";  // Draw a space
        }
    }
    std::cout << std::endl;
}
