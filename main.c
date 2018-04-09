#include "mcc_generated_files/mcc.h"

#define LED LATAbits.LATA2
#define NeoNum 4  //Number of neopixel devices

unsigned int NeoGreen [NeoNum];
unsigned int NeoBlue [NeoNum];
unsigned int NeoRed [NeoNum];
unsigned int up [NeoNum];

void NeoPixelInit (void)
{
   NeoGreen[0] = 0; NeoBlue[0] = 0; NeoRed[0] = 1;
   NeoGreen[1] = 0; NeoBlue[1] = 0; NeoRed[1] = 64; 
   NeoGreen[2] = 0; NeoBlue[2] = 0; NeoRed[2] = 128;
   NeoGreen[3] = 0; NeoBlue[3] = 0; NeoRed[3] = 254;
}

void NeoPixelRotateColor (void)
{
   unsigned int NeoPixel;
   //  Max brightness - turn down
   for (NeoPixel = 0; NeoPixel < NeoNum; NeoPixel++)
   {
       //  Max brightness - turn down
       if(NeoRed[NeoPixel] == 255){up[NeoPixel]=0;}
       if(NeoGreen[NeoPixel] == 255){up[NeoPixel]=0;}
       if(NeoBlue[NeoPixel] == 255){up[NeoPixel]=0;}
        //  Max dimness, switch color and start to make bright
        if(NeoRed[NeoPixel] == 1){up[NeoPixel]=1;NeoRed[NeoPixel]=0;NeoGreen[NeoPixel]=1;}
        else if(NeoGreen[NeoPixel] == 1){up[NeoPixel]=1;NeoGreen[NeoPixel]=0;NeoBlue[NeoPixel]=1;}
        else if(NeoBlue[NeoPixel] == 1){up[NeoPixel]=1;NeoBlue[NeoPixel]=0;NeoRed[NeoPixel]=1;}
        //  Make brighter or dimmer
        if(NeoRed[NeoPixel] >= 1 && up[NeoPixel] == 1){NeoRed[NeoPixel]++;}
        else if(NeoRed[NeoPixel] >= 1 && up[NeoPixel] == 0){NeoRed[NeoPixel]--;}
        else if(NeoGreen[NeoPixel] >= 1 && up[NeoPixel] == 1){NeoGreen[NeoPixel]++;}
        else if(NeoGreen[NeoPixel] >= 1 && up[NeoPixel] == 0){NeoGreen[NeoPixel]--;}
        else if(NeoBlue[NeoPixel] >= 1 && up[NeoPixel] == 1){NeoBlue[NeoPixel]++;}
        else if(NeoBlue[NeoPixel] >= 1 && up[NeoPixel] == 0){NeoBlue[NeoPixel]--;}
   }
}

void NeoPixelColor (int i)
{
    //timing based on a 32 MHz internal osc setting
   if (NeoGreen[i] & 0x80)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoGreen[i] & 0x40)
   { 
   LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoGreen[i] & 0x20)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoGreen[i] & 0x10)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoGreen[i] & 0x08)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoGreen[i] & 0x04)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoGreen[i] & 0x02)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoGreen[i] & 0x01)
   { 
   LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoRed[i] & 0x80)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoRed[i] & 0x40)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoRed[i] & 0x20)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoRed[i] & 0x10)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoRed[i] & 0x08)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoRed[i] & 0x04)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoRed[i] & 0x02)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoRed[i] & 0x01)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   } 
   if (NeoBlue[i] & 0x80)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoBlue[i] & 0x40)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoBlue[i] & 0x20)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoBlue[i] & 0x10)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoBlue[i] & 0x08)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoBlue[i] & 0x04)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoBlue[i] & 0x02)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   }  
   if (NeoBlue[i] & 0x01)
   { 
    LED=1;LED=1;LED=1;LED=1;LED=1;LED=0;
   } 
   else
   {
    LED=1;LED=1;LED=0;LED=0;LED=0;LED=0;
   } 
}

void main(void)
{
    // initialize the device and LEDs
    SYSTEM_Initialize();
    NeoPixelInit();
    
    while (1)
    {
        NeoPixelColor(0);  //write the 24bit color to the 1st LED
        NeoPixelColor(1);  //write the 24bit color to the 2nd LED
        NeoPixelColor(2);  //write the 24bit color to the 3rd LED
        NeoPixelColor(3);  //write the 24bit color to the 4th LED
        NeoPixelRotateColor();
        __delay_us(2000); //Works way down to 1us
    }
}
