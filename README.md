# Arduino Keypad Calculator

A simple Arduino-based calculator that performs basic arithmetic operations using a 4x4 keypad for input and a 16x2 I2C LCD for display.

---

## Features

* Supports basic arithmetic operations:

  * Addition
  * Subtraction
  * Multiplication
  * Division
* Multi-digit number input
* Real-time expression display
* Result calculation on demand
* Division-by-zero error handling
* Reset/Clear functionality

---

## Components Used

* Arduino Board
* 4x4 Matrix Keypad
* 16x2 I2C LCD Display

---

## Wiring

### LCD Connections

| Component | Arduino Pin |
| --------- | ----------- |
| LCD SDA   | SDA Pin     |
| LCD SCL   | SCL Pin     |
| LCD VCC   | 5V          |
| LCD GND   | GND         |

---

### Keypad Connections

| Keypad Pin | Arduino Pin |
| ---------- | ----------- |
| Row 1      |  2          |
| Row 2      |  3          |
| Row 3      |  4          |
| Row 4      |  5          |
| Column 1   |  6          |
| Column 2   |  7          |
| Column 3   |  8          |
| Column 4   |  9          |

---

## Controls

| Key   | Function         |
| ----- | ---------------- |
| 0–9 | Number Input     |
| +   | Addition         |
| -   | Subtraction      |
| x   | Multiplication   |
| /   | Division         |
| #   | Calculate Result |
| *   | Clear / Reset    |

---

## How It Works

1. User enters a number using the keypad
2. Selects an arithmetic operator
3. Enters the next number
4. Presses `#` to compute result
5. Press `*` to reset calculator

---

## Error Handling

* Prevents division by zero
* Displays **ERROR** and resets calculator state if division by zero occurs

---

## Purpose

Built for practicing:

* Matrix keypad interfacing
* LCD interfacing
* Input parsing and state management
* Arithmetic logic implementation
* Embedded user interface design
