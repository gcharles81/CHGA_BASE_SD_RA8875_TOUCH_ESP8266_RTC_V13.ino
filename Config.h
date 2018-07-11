#pragma once

#if defined(__SAM3X8E__)//DUE
// Uno pin assignments
#include "Temporary_timers.h" ////only temporary here this actually will be replaced with Timers & RGB channels handlers .h 
#include <RA8875.h>
//#include <FT5206.h>


////////////ONBOARD SD CARD//////CHGA
int Temporary_SD = 0;
const int chipSelect = 10;
//////////////////////////////////////////////////////////////////////////////////
//#include <TimeLib.h>

////////////LEDS//////CHGA

#define LEDT 13   //Teensy-LED
#define LED1 45   //red
#define LED2 46   //orange
#define LED3 47   //green

//////////////////////////////////////////////////////////////////////////////////
////////////RA8875//////CHGA
#define BUFFPIXEL 30
#define RA8875_MISO 12
#define RA8875_MOSI 7
#define RA8875_SCK 14
#define RA8875_INT 22
#define RA8875_CS 15
#define RA8875_RESET 23//any pin or nothing!
#define MAXTOUCHLIMIT 1//1...5
#define CTP_INT           22    // touch data ready for read from FT5206 touch controller

uint8_t registers[FT5206_REGISTERS];
uint16_t new_coordinates[5][2];
uint16_t old_coordinates[5][2];
uint8_t current_touches = 0;
uint8_t old_touches = 0;

RA8875 tft = RA8875(RA8875_CS, RA8875_RESET, RA8875_MOSI, RA8875_SCK, RA8875_MISO);
FT5206 cts = FT5206(CTP_INT);
long Flash_image_Start_address = 0;
short Flash_image_width = 0;
short Flash_image_height = 0;
File     bmpFile;
Sd2Card card;
SdVolume volume;
SdFile root;
File commandFile;
//File     bmpFile;
boolean btn_continous_press = false;


#elif defined(__MK66FX1M0__)//teensy 3.6
// Pro Mini assignments
#include "Temporary_timers.h" ////only temporary here this actually will be replaced with Timers & RGB channels handlers .h 
#include <RA8875.h>
#include <FT5206.h>


////////////ONBOARD SD CARD//////CHGA
int Temporary_SD = 0;
const int chipSelect = BUILTIN_SDCARD;
//////////////////////////////////////////////////////////////////////////////////
#include <TimeLib.h>

////////////LEDS//////CHGA

#define LEDT 13   //Teensy-LED
#define LED1 45   //red
#define LED2 46   //orange
#define LED3 47   //green

//////////////////////////////////////////////////////////////////////////////////
////////////RA8875//////CHGA
#define BUFFPIXEL 30
#define RA8875_MISO 12
#define RA8875_MOSI 7
#define RA8875_SCK 14
#define RA8875_INT 22
#define RA8875_CS 15
#define RA8875_RESET 23//any pin or nothing!
#define MAXTOUCHLIMIT 1//1...5
#define CTP_INT           22    // touch data ready for read from FT5206 touch controller

uint8_t registers[FT5206_REGISTERS];
uint16_t new_coordinates[5][2];
uint16_t old_coordinates[5][2];
uint8_t current_touches = 0;
uint8_t old_touches = 0;

RA8875 tft = RA8875(RA8875_CS, RA8875_RESET, RA8875_MOSI, RA8875_SCK, RA8875_MISO);
FT5206 cts = FT5206(CTP_INT);
long Flash_image_Start_address = 0;
short Flash_image_width = 0;
short Flash_image_height = 0;
File     bmpFile;
Sd2Card card;
SdVolume volume;
SdFile root;
File commandFile;
//File     bmpFile;
boolean btn_continous_press = false;
#endif
