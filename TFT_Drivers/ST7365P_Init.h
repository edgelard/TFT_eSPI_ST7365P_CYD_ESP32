
// This is the command sequence that initialises the ST7365P driver
//
// This setup information uses simple 8-bit SPI writecommand() and writedata() functions
//
// See ST7735_Setup.h file for an alternative format


// Configure ST7365P display
// ST7365P initialization

writecommand(TFT_SWRST);       // Software reset
delay(120);

// writecommand(TFT_SLPOUT);      // Exit sleep
// delay(120);

writecommand(0xE0);            // Positive Gamma Control
writedata(0xF0);
writedata(0x03);
writedata(0x05);
writedata(0x09);
writedata(0x0C);
writedata(0x0F);
writedata(0x3E);
writedata(0x77);
writedata(0x4F);
writedata(0x0F);
writedata(0x17);
writedata(0x17);
writedata(0x21);
writedata(0x23);
// writecommand(0xE0);            // Positive Gamma Control
// writedata(0x00);
// writedata(0x03);
// writedata(0x09);
// writedata(0x08);
// writedata(0x16);
// writedata(0x0A);
// writedata(0x3F);
// writedata(0x78);
// writedata(0x4C);
// writedata(0x09);
// writedata(0x0A);
// writedata(0x08);
// writedata(0x16);
// writedata(0x1A);
// writedata(0x0F);

writecommand(0xE1);            // Negative Gamma Control
writedata(0xF0);
writedata(0x03);
writedata(0x05);
writedata(0x09);
writedata(0x0C);
writedata(0x0F);
writedata(0x3E);
writedata(0x77);
writedata(0x4F);
writedata(0x0F);
writedata(0x17);
writedata(0x17);
writedata(0x21);
writedata(0x23);
// writecommand(0xE1);            // Negative Gamma Control
// writedata(0x00);
// writedata(0x16);
// writedata(0x19);
// writedata(0x03);
// writedata(0x0F);
// writedata(0x05);
// writedata(0x32);
// writedata(0x45);
// writedata(0x46);
// writedata(0x04);
// writedata(0x0E);
// writedata(0x0D);
// writedata(0x35);
// writedata(0x37);
// writedata(0x0F);

writecommand(0xC0);            // Power Control 1
writedata(0x80);
writedata(0x25);
// writecommand(0xC0);            // Power Control 1
// writedata(0x17);
// writedata(0x15);

writecommand(0xC1);            // Power Control 2
writedata(0x13);
// writecommand(0xC1);            // Power Control 2
// writedata(0x41);

writecommand(0xC5);            // VCOM Control
writedata(0x1C);
// writecommand(0xC5);            // VCOM Control
// writedata(0x00);
// writedata(0x12);
// writedata(0x80);

writecommand(TFT_MADCTL);      // Memory Access Control
writedata(0x48);

writecommand(TFT_PIXFMT);
writedata(0x55);             // 16-bit

writecommand(0xB0);            // Interface Mode Control
writedata(0x00);

writecommand(0xB1);            // Frame Rate Control
writedata(0xA0);
writedata(0x10);
// writecommand(0xB1);            // Frame Rate Control
// writedata(0xA0);

writecommand(0xB3);
writedata(0x00);
writedata(0x10);

writecommand(0xB4);            // Display Inversion Control
writedata(0x01);
// writecommand(0xB4);            // Display Inversion Control
// writedata(0x02);

writecommand(0xB5);
writedata(0x02);
writedata(0x02);
writedata(0x00);
writedata(0x04);

writecommand(0xB6);            // Display Function Control
writedata(0x80);
writedata(0x02);
writedata(0x3B);
// writecommand(0xB6);            // Display Function Control
// writedata(0x02);
// writedata(0x02);
// writedata(0x3B);

writecommand(0xB7);            // Entry Mode Set
writedata(0x06);
// writecommand(0xB7);            // Entry Mode Set
// writedata(0xC6);

writecommand(0xE8);            // Display Output Ctrl Adjust
writedata(0x40);
writedata(0x8A);
writedata(0x00);
writedata(0x00);
writedata(0x25);
writedata(0x0A);
writedata(0x38);
writedata(0x33);
// writecommand(0xF7);            // Adjust Control 3
// writedata(0xA9);
// writedata(0x51);
// writedata(0x2C);
// writedata(0x82);

writecommand(TFT_SLPOUT);      // Exit sleep
delay(120);

writecommand(TFT_DISPON);      // Display ON
delay(25);
// End of ST7365P display configuration



