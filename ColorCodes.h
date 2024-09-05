#pragma once
#include <iostream>
#include <iomanip>
#include "Colors.h"
#include "ColorPair.h"
namespace TelCoColorCoder {

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    int PrintAllColorCodes() {
        int totalColorCodes = 0;
        for(int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
            ColorPair colorPair = GetColorFromPairNumber(pairNumber);
            std::cout << std::setw(2) << std::setfill('0') << pairNumber << " " << colorPair.ToString() << std::endl;
            totalColorCodes++;
        }
        return totalColorCodes;
    }
}