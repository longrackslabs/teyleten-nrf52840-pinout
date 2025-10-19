# Teyleten Robot Pro Micro NRF52840 Pin Mappings

## Hardware

**Board:** Teyleten Robot Pro Micro NRF52840  
**Amazon Link:** https://a.co/d/785r35n  
**Price:** ~$4  
**Compatibility:** Nice!Nano v2 compatible  

## Pin Mappings

This repository contains systematically discovered pin mappings for the Teyleten Robot Pro Micro NRF52840 board through methodical testing.

### Pin Pattern Discovered

- **P0.XX = Arduino Pin X** (for X = 0-31)
- **P1.XX = Arduino Pin (32+X)** (for X = 0-15, pins 32-47)

### Special Features

- **P0.13** - Controls 3.3V power rail (set LOW = power off, HIGH = power on)
- **P0.14, P0.16** - Reserved pins that cause system issues (avoid using)

## Usage

Include the header file in your project:

```cpp
#include "nicenano_pins.h"

// Use pins with clear naming
pinMode(P0_09, OUTPUT);  // NeoPixel data pin
pinMode(P0_07, INPUT);   // PIR sensor pin
```

## Credits

This work builds upon the original [Nice!Nano](https://nicekeyboards.com/nice-nano/) design and provides practical pin mappings for compatible boards.

## Testing Methodology

Pin mappings were discovered through systematic testing using automated pin discovery tools on the actual hardware.
