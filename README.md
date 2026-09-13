<img width="1000" height="488" alt="WhatsApp Image 2026-09-13 at 8 54 18 AM" src="https://github.com/user-attachments/assets/1277919e-74c0-47d4-8f40-2f12e724a97d" />

# Pappadam Crispiness Monitor 🎯

## Basic Details

### Team Name: Crispiness Control Division

### Team Members
* **Team Lead:** Sethuparvathy K J - Saintgits College of Engineering
* **Member 2:** Shaheem - Saintgits College of Engineering

---

## Project Description
The Pappadam Crispiness Monitor is a completely unnecessary over-engineered acoustic surveillance system built to solve a problem that literally nobody asked us to fix: determining if a pappadam is crispy enough using microcontrollers instead of just eating it. By capturing the violent acoustic sound spikes of a pappadam getting snapped in half, our Arduino judges the crispiness level so you don't have to trust your own human ears.

---

## The Problem (that doesn't exist)
For thousands of years, humans have suffered from the tragic ambiguity of soggy pappadams. You bite into one expecting a satisfying *CRUNCH*, but instead, you get a rubbery, sad bend that ruins your entire mood and your lunch. Relying on human sensory evaluation is flawed, biased, and scientifically unacceptable. We urgently needed a cold, unfeeling machine to tell us if our food is good or if the cook should be disqualified.

---

## The Solution (that nobody asked for)
Instead of just taking a bite like a normal person, we built a digital courtroom. You place the pappadam near a tiny sound sensor, hit a button, break the pappadam with your own hands, and let an algorithm analyze the decibel spikes. The system then publicly shames or celebrates your pappadam on a 16x2 LCD screen with binary verdicts like **"GRADE A: CRISPY!"** or **"DEFECT: SOGGY!!!"**.

---

## Technical Details

### Technologies/Components Used

#### For Software:
* **Languages:** C / Arduino C++
* **Libraries:** Wire.h, LiquidCrystal_I2C.h
* **IDE/Tools:** Arduino IDE

#### For Hardware:
* **Microcontroller:** Arduino Nano V3.0 (The brain taking this way too seriously)
* **Acoustic Sensor:** KY-038 Sound Sensor Module (Eavesdropping on food destruction)
* **Display Interface:** 16x2 LCD with I2C Adapter (The scoreboard of crispiness)
* **User Input:** Tactile Push Button (The trigger of doom)
* **Breadboard & Wires:** 400-tie-point breadboard & Jumper wires (A chaotic web of wires)
* **Power Source:** 5V USB Cable (Powering pure absurdity)

---

## Implementation

### For Software:
The system runs a non-blocking state machine loop (IDLE -> TESTING -> RESULT) managed via low-level GPIO triggers and analog sampling routines. When activated, it opens a high-frequency polling window on Analog Pin 0 to continuously calculate maximum peak deviation from baseline ambient noise.

### For Hardware:

| Sub-system Component | Hardware Pin Interface | Microcontroller Node | Signal Type / Function |
| :--- | :--- | :--- | :--- |
| **Central Processor** | Mini-USB | USB Input | 5V Power & Logic Upload |
| **KY-038 Sound Sensor** | Analog Output (AO) | Analog Pin 0 (A0) | Capturing high-frequency crunch soundwaves |
| **16x2 LCD Display** | SDA (Serial Data) | Analog Pin 4 (A4) | I2C Data Line |
| **I2C Daughterboard** | SCL (Serial Clock) | Analog Pin 5 (A5) | I2C Clock Line |
| **Tactile Push Switch** | Terminal Pin 1 | Digital Pin 2 (D2) | Initiating the 2-second judgment window |

---

## Installation

```bash
git clone [https://github.com/](https://github.com/)[your-username]/Pappadam-Crispiness-Monitor.git
cd Pappadam-Crispiness-Monitor

# Select Port and Board in IDE:
Tools > Board > Arduino Nano
Tools > Processor > ATmega328P (Old Bootloader)
Tools > Port > [Select COM Port]
# Press Ctrl + U to Upload
```

# Project Demo
## Screenshots

## Video
Link to Demo Video

Watch us scientifically break a perfectly good pappadam just to make an Arduino LCD print out text.

## Team Contributions
Sethuparvathy K J: Came up with this ridiculous idea, programmed the acoustic state machine in C++, and made sure no soggy pappadam goes unpunished.

Shaheem: Handled hardware breadboard wiring, component positioning, and executed the ritualistic pappadam snapping tests under the microphone.

Made with ❤️ at TinkerHub Useless Projects
