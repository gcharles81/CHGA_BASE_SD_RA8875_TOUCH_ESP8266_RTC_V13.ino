#pragma once
#include <RGBHandler.h>

//RGB Channel1 ={0,0,0  };//use the TimerHandler library structure
RGB Channel1_Updater = RGB();



RGB_Channel Channel1 = { 0,0,0 };
RGB_Channel Channel2 = { 0,0,0 };
RGB_Channel Channel3 = { 0,0,0 };
RGB_Channel Channel4 = { 0,0,0 };


///Below just for small test 

int gbv = Channel1.Red;
int gbv2 = Channel1.Green;
int gbv3 = Channel1.Blue;

Channel1.Red = 2;

