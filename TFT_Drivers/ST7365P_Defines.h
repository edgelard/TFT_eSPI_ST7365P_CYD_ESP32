// Change the width and height if required (defined in portrait mode)
// or use the constructor to over-ride defaults
#define TFT_WIDTH  320
#define TFT_HEIGHT 480


// Delay between some initialisation commands
#define TFT_INIT_DELAY 0x80 // Not used unless commandlist invoked // Not Found In Datasheet main command lists


// Generic commands used by TFT_eSPI.cpp
#define TFT_NOP     0x00
#define TFT_SWRST   0x01

#define TFT_SLPIN   0x10
#define TFT_SLPOUT  0x11

#define TFT_INVOFF  0x20
#define TFT_INVON   0x21

#define TFT_DISPOFF 0x28
#define TFT_DISPON  0x29

#define TFT_CASET   0x2A
#define TFT_PASET   0x2B
#define TFT_RAMWR   0x2C

#define TFT_RAMRD   0x2E

#define TFT_MADCTL  0x36
#define TFT_PIXFMT  0x3A // In datasheet its COLMOD (Interface Pixel Format) 

#define TFT_MAD_MX  0x40 // D7
#define TFT_MAD_MY  0x80 // D6
#define TFT_MAD_MV  0x20 // D5
#define TFT_MAD_ML  0x10 // D4
#define TFT_MAD_RGB 0x00 // D3 = 0
#define TFT_MAD_BGR 0x08 // D3 = 1
#define TFT_MAD_MH  0x04 // D2
// #define TFT_MAD_SS  0x02 // D1Not Found In Datasheet main command lists
// #define TFT_MAD_GS  0x01 // Not Found In Datasheet main command lists

#define TFT_IDXRD   0x00 // ILI9341 only, indexed control register read // Not Found In Datasheet main command lists
