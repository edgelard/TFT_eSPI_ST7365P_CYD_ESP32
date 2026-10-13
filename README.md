<h1 align="center">TFT_eSPI ST7365P-G5 Support for CYD ESP32-3248x</h1>

<p align="center">
  An unofficial modification of Bodmer's TFT_eSPI ver 2.5.43 adding ST7365P-G5 display-controller support for the 3.5-inch 320×480 TFT used on the GMT035-03 CYD ESP32-3248x board.
</p>

---

## Tested on Hardware

| Property | Specification |
| :--- | :--- |
| **Board** | CYD ESP32-3248x |
| **PCB marking** | GMT035-03 |
| **Display size** | 3.5 inches |
| **Resolution** | 320×480 |

https://goldenmorninglcd.com/tft-display/3.5-inch-320x480-st7365p-g5-gmt035-03-t350c9-c40-03-v2/
<p align="left"> tested using arduino IDE 2.3.10 with TFT_eSPI 2.5.43 </p>

---

## Why This Repository Exists

Some CYD displays require controller initialization and configuration that differ from the drivers enabled in a standard TFT_eSPI installation. This project provides an alternative implementation for the specified hardware.

---

## Credits

* Based on [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI) by Bodmer.
* This repository contains independent modifications for ST7365P-G5 display support. Original copyright notices, license terms, and applicable third-party notices are retained.
* This is an unofficial project and is not affiliated with or endorsed by the original maintainer.

---

## Contributing

Bug reports and tested compatibility reports are welcome. When reporting an issue, include the board marking, display controller, configuration, library version, and a description of the observed behavior.

---

## License

See the included license files and source-code notices for applicable licensing and redistribution conditions.
