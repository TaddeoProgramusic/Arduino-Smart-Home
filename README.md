# Arduino-Smart-Home

## Description
This smart home system is controlled using an AppInventor app.  
It includes a light, a passcode‑protected door, and a fan system.  
The default door code is **0000**, but you can change it directly in AppInventor.

---

## Features
- Light control  
- Passcode‑protected door  
- Fan system  
- Incorrect‑code buzzer alert  
- Bluetooth communication (HC‑05)  
- Smooth fan shutdown (PWM fade‑out)

---

## Required Components
- **Arduino UNO**  
- **HC‑05 Bluetooth module** (38400 baud, **ROLE 0 or ROLE 2**)  
- **LED + 220 Ω resistor**  
- **Servo motor** (for the door)  
- **DC motor or fan** (controlled via a PWM pin)  
- **Buzzer** (used to play a sound when the wrong passcode is entered)  
- **Breadboard**  
- **Jumper wires**  
- **5V power supply (optional)**

---

## Required Libraries
This project uses the following Arduino libraries:

- **SoftwareSerial**  
- **Servo**

Make sure to install them before uploading the code.

---

## Mobile Requirements
This project requires a smartphone with Bluetooth support.

Compatible operating systems:
- **Android 5.0 or higher**

**iOS is not supported**, because the HC‑05 module uses classic Bluetooth (SPP), which is not allowed on iPhones.

---

## Passcode
- **Default passcode:** `0000`  
- You can change it directly in the AppInventor project (Blocks section).  
- If the passcode is incorrect, the buzzer will play an alert sound.

---

## Fan Behavior
The fan turns off gradually using a PWM fade‑out.  
This prevents sudden tension changes and avoids cable movement or tangling.

---

## How to Use
1. Upload the Arduino code to your board.  
2. Install the AppInventor app on your Android device.  
3. Pair your phone with the HC‑05 module.  
4. Open the app and connect via Bluetooth.  
5. Control the light, door, and fan from the interface.  
6. If the wrong passcode is entered, the buzzer will activate.
