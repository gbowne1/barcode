#ifndef BARCODE_H
#define BARCODE_H

#include <string>

// Function to generate UPC barcode
std::string generateUPC(const std::string& upc);

// Function to generate Code 39 barcode
std::string generateCode39(const std::string& data);

// Function to draw the barcode in the console
void drawBarcode(const std::string& barcode);

#endif // BARCODE_H
