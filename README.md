TFT_eSPI ST7365P-G5 Support for CYD ESP32-3248S035C

An unofficial modification of Bodmer's TFT_eSPI adding ST7365P-G5 display-controller support for the 3.5-inch 320×480 TFT used on the GMT035-03 CYD ESP32-3248S035C board.

Features

ST7365P-G5 display-controller support.

320×480 portrait/landscape display operation, subject to verified rotation support.

ESP32-based CYD board compatibility.

Integration with the TFT_eSPI graphics library.

Existing TFT_eSPI functionality retained where compatible.

Target Hardware

Property

Specification

Board

ESP32-3248S035C CYD

PCB marking

GMT035-03

Display size

3.5 inches

Resolution

320×480

Display controller

ST7365P-G5

Graphics library

TFT_eSPI

Why This Repository Exists

Some CYD displays require controller initialization and configuration that differ from the drivers enabled in a standard TFT_eSPI installation.

This project provides an alternative implementation for the specified hardware.

Installation

Download or clone this repository.

Back up and remove any conflicting TFT_eSPI library installation from your Arduino libraries directory.

Install this modified library using the directory structure provided in this repository.

Select the appropriate ST7365P driver in the library configuration.

Verify the SPI pin assignments for your board.

Open the included display test example and compile it for the ESP32.

Upload the sketch and verify initialization, colors, text, rotation, and screen orientation.

Refer to the included configuration and example files for the exact driver-selection macro and pin definitions.

Tested Hardware and Software

Board: ESP32-3248S035C CYD

Display marking: GMT035-03

Controller: ST7365P-G5

Resolution: 320×480

Arduino IDE version: [Add tested version]

TFT_eSPI base version/commit: [Add exact version or commit]

Test status: [Describe tests actually completed]

Compatibility with other CYD variants has not been established unless explicitly listed here.

Troubleshooting

White or blank display

Verify the selected driver.

Check the display pin configuration.

Confirm that the library version being compiled is this modified version.

Incorrect colors or orientation

Check the initialization sequence and rotation settings.

Verify the display configuration against the tested hardware.

Compilation errors

Check for duplicate TFT_eSPI installations.

Verify the driver-selection macro and any required custom driver files.

Credits

Based on TFT_eSPI by Bodmer.

This repository contains independent modifications for ST7365P-G5 display support. Original copyright notices, license terms, and applicable third-party notices are retained.

This is an unofficial project and is not affiliated with or endorsed by the original maintainer.

Contributing

Bug reports and tested compatibility reports are welcome. When reporting an issue, include the board marking, display controller, configuration, library version, and a description of the observed behavior.

License

See the included license files and source-code notices for applicable licensing and redistribution conditions.
