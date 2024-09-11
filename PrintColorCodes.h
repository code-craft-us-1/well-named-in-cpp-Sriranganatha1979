#pragma once
#include <iostream>
#include <iomanip>
#include "Colors.h"
#include "ColorPair.h"
#include "ColorCodes.h"
namespace TelCoColorCoder {

    int PrintAllColorCodes() {
        int totalColorCodes = 0;
        for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
            ColorPair colorPair = GetColorFromPairNumber(pairNumber);
            std::cout << std::setw(2) << std::setfill('0') << pairNumber << " " << colorPair.ToString() << std::endl;
            totalColorCodes++;
        }
        return totalColorCodes;
    }
}
