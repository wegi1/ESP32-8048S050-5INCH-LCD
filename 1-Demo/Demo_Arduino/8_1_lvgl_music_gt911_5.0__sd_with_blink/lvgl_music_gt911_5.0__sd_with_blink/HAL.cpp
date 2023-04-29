//
// Created by root on 2022/11/13.
//

#include "HAL.h"

bool sdcard_init()
{
    bool flag = false;
    pinMode(SD_CS, OUTPUT);
    digitalWrite(SD_CS, HIGH);
    SPI.begin(SPI_SCK, SPI_MISO, SPI_MOSI);

    if (!SD.begin(SD_CS, SPI, 1000000)) {
        Serial.println("SD Card Mount Failed");
        return flag;

    }
    uint8_t cardType = SD.cardType();
    if (cardType == CARD_NONE) {
        Serial.println("No SD card attached");
        return flag;
    }
    Serial.println("SD Card initialized.");
    flag = true;
    return flag;


}
