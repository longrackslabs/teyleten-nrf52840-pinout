#ifndef NICENANO_PINS_H
#define NICENANO_PINS_H

/*
 * Nice!Nano Pin Mapping for nRF52840 SuperMini Compatible Board
 * Systematically discovered through automated testing
 * 
 * Hardware: "Teyleten Robot Pro Micro NRF52840" ($4 Nice!Nano v2 replacement)
 * PlatformIO Board: "nicenano"
 * Framework: Arduino
 * 
 * Pin Mapping Pattern Discovered:
 * - P0.XX = Arduino Pin X (for X = 0-31)
 * - P1.XX = Arduino Pin (32+X) (for X = 0-15, pins 32-47)
 * 
 * Usage: Use P0_XX and P1_XX directly in your code
 * Example: pinMode(P0_21, OUTPUT); // NeoPixel data pin
 */

// =============================================================================
// P0.XX GPIO PINS (nRF52840 Port 0)
// =============================================================================

#define P0_00   0    // P0.00 = Arduino Pin 0
#define P0_01   1    // P0.01 = Arduino Pin 1  
#define P0_02   2    // P0.02 = Arduino Pin 2  ✓ TESTED
#define P0_03   3    // P0.03 = Arduino Pin 3
#define P0_04   4    // P0.04 = Arduino Pin 4
#define P0_05   5    // P0.05 = Arduino Pin 5
#define P0_06   6    // P0.06 = Arduino Pin 6  ✓ TESTED
#define P0_07   7    // P0.07 = Arduino Pin 7
#define P0_08   8    // P0.08 = Arduino Pin 8  ✓ TESTED
#define P0_09   9    // P0.09 = Arduino Pin 9  ✓ TESTED
#define P0_10  10    // P0.10 = Arduino Pin 10 ✓ TESTED
#define P0_11  11    // P0.11 = Arduino Pin 11 ✓ TESTED
#define P0_12  12    // P0.12 = Arduino Pin 12
#define P0_13  13    // P0.13 = Arduino Pin 13
// P0_14 RESERVED - CAUSES SYSTEM ISSUES
#define P0_15  15    // P0.15 = Arduino Pin 15
// P0_16 RESERVED - CAUSES SYSTEM ISSUES  
#define P0_17  17    // P0.17 = Arduino Pin 17 ✓ TESTED
#define P0_18  18    // P0.18 = Arduino Pin 18
#define P0_19  19    // P0.19 = Arduino Pin 19
#define P0_20  20    // P0.20 = Arduino Pin 20 ✓ TESTED
#define P0_21  21    // P0.21 = Arduino Pin 21
#define P0_22  22    // P0.22 = Arduino Pin 22 ✓ TESTED
#define P0_23  23    // P0.23 = Arduino Pin 23
#define P0_24  24    // P0.24 = Arduino Pin 24 ✓ TESTED
#define P0_25  25    // P0.25 = Arduino Pin 25
#define P0_26  26    // P0.26 = Arduino Pin 26
#define P0_27  27    // P0.27 = Arduino Pin 27
#define P0_28  28    // P0.28 = Arduino Pin 28
#define P0_29  29    // P0.29 = Arduino Pin 29 ✓ TESTED
#define P0_30  30    // P0.30 = Arduino Pin 30
#define P0_31  31    // P0.31 = Arduino Pin 31 ✓ TESTED

// =============================================================================
// P1.XX GPIO PINS (nRF52840 Port 1)
// =============================================================================

#define P1_00  32    // P1.00 = Arduino Pin 32 ✓ TESTED
#define P1_01  33    // P1.01 = Arduino Pin 33
#define P1_02  34    // P1.02 = Arduino Pin 34
#define P1_03  35    // P1.03 = Arduino Pin 35
#define P1_04  36    // P1.04 = Arduino Pin 36 ✓ TESTED
#define P1_05  37    // P1.05 = Arduino Pin 37
#define P1_06  38    // P1.06 = Arduino Pin 38
#define P1_07  39    // P1.07 = Arduino Pin 39
#define P1_08  40    // P1.08 = Arduino Pin 40
#define P1_09  41    // P1.09 = Arduino Pin 41
#define P1_10  42    // P1.10 = Arduino Pin 42
#define P1_11  43    // P1.11 = Arduino Pin 43
#define P1_12  44    // P1.12 = Arduino Pin 44
#define P1_13  45    // P1.13 = Arduino Pin 45
#define P1_14  46    // P1.14 = Arduino Pin 46
#define P1_15  47    // P1.15 = Arduino Pin 47

// =============================================================================
// RESERVED PINS - DO NOT USE
// =============================================================================

/*
 * WARNING: These pins cause system disconnects/resets:
 * - P0.14 (Arduino Pin 14) - System/Boot pin
 * - P0.16 (Arduino Pin 16) - System/Boot pin
 * 
 * Avoid these pins in your projects!
 */

#endif // NICENANO_PINS_H
