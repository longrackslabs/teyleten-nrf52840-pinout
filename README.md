# Teyleten Robot Pro Micro NRF52840 Pin Mappings

## Hardware

**Board:** Teyleten Robot Pro Micro NRF52840  
**Amazon Link:** https://a.co/d/785r35n  
**Price:** ~$4  
**Compatibility:** Nice!Nano v2 compatible  

## Prerequisites

**IMPORTANT:** This board requires the Nice!Nano board definition in PlatformIO.

### Setup Process

1. **Install Nice!Nano PlatformIO Support**
   - Follow instructions at: https://github.com/ICantMakeThings/Nicenano-NRF52-Supermini-PlatformIO-Support
   - This adds the `nicenano` board definition to PlatformIO

2. **Configure your platformio.ini**
   ```ini
   [env:nrf52840_uf2]
   platform = nordicnrf52
   board = nicenano
   framework = arduino
   ```

3. **Include our pin header in your project**
   ```cpp
   #include "nicenano_pins.h"
   ```

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

// Power control example
pinMode(P0_13, OUTPUT);
digitalWrite(P0_13, HIGH);  // Turn on 3.3V rail
digitalWrite(P0_13, LOW);   // Turn off 3.3V rail (saves power!)
```

## Dependencies

This work depends on:
1. **[Nice!Nano PlatformIO Support](https://github.com/ICantMakeThings/Nicenano-NRF52-Supermini-PlatformIO-Support)** - Provides the board definition
2. **[Nice!Nano Hardware Design](https://nicekeyboards.com/nice-nano/)** - Original hardware specification

## Testing Methodology

Pin mappings were discovered through systematic testing using automated pin discovery tools on the actual hardware.
