//
// Created by root on 2022/11/13.
//


#include <Arduino.h>
#include "SPI.h"
#include "SD.h"
#include "FS.h"

#define SD_CS         10
#define SPI_MOSI      11
#define SPI_MISO      13
#define SPI_SCK       12




bool sdcard_init();
