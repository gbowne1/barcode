#include <iostream>
#include "../include/barcode.h"

int main() {
    std::string upc = "012345678901";  // Example UPC
    std::string code39Data = "HELLO";   // Example Code 39 data

    std::string upcBarcode = generateUPC(upc);
    std::string code39Barcode = generateCode39(code39Data);

    std::cout << "UPC Barcode: ";
    drawBarcode(upcBarcode);

    std::cout << "Code 39 Barcode: ";
    drawBarcode(code39Barcode);

    return 0;
}
