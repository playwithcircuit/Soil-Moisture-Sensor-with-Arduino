# 🌱 Soil Moisture Sensor with Arduino (Analog + Digital Modes)

> Build a smart soil monitoring system and understand when your plants actually need water.

---

## 🚀 Project Overview

Watering plants efficiently requires real-time insight into soil conditions. In this project, we interface a **Soil Moisture Sensor (FC-28)** with an Arduino Uno and explore **both Analog and Digital output modes**.

- **Analog Mode** → Provides continuous moisture values (ideal for monitoring & visualization)  
- **Digital Mode** → Provides ON/OFF output (ideal for automation)

This flexibility makes the project suitable for:

- Smart irrigation systems  
- Precision agriculture  
- Home gardening automation  
- IoT-based environmental monitoring  

The sensor module uses an onboard **LM393 comparator** to convert moisture levels into digital signals when required.

---

## 🧰 Components Required

| # | Component | Quantity | Description |
|--|----------|----------|-------------|
| 1 | Arduino Uno | 1 | Microcontroller board |
| 2 | Soil Moisture Sensor (FC-28) | 1 | Resistive type sensor |
| 3 | Jumper Wires | 6–8 | Connections |
| 4 | Breadboard (Optional) | 1 | Prototyping |
| 5 | USB Cable / Power Supply | 1 | Power |

---

## 🔍 Sensor Overview

The FC-28 soil moisture sensor works by measuring **electrical resistance in the soil**.

- Wet soil → Conductivity increases → Resistance decreases  
- Dry soil → Conductivity decreases → Resistance increases  

This resistance variation is converted into:

- **Analog voltage (AO)** → proportional to moisture  
- **Digital signal (DO)** → based on threshold  

---

## 🔌 Pinout

| Pin | Description |
|-----|------------|
| VCC | Power supply (3.3V–5V) |
| GND | Ground |
| AO  | Analog Output |
| DO  | Digital Output |

---

## 🧠 Working Principle

### 🔹 Analog Mode

- Sensor outputs a **variable voltage (0–~4.2V)**  
- Arduino reads it using analog pin (e.g., A0)  
- Value changes continuously with moisture  

👉 Best for:
- Monitoring soil moisture percentage  
- Display systems (LCD/OLED)  
- IoT dashboards  

---

### 🔹 Digital Mode

- Comparator compares sensor voltage with threshold  
- Output is:

  - **HIGH → Soil Dry**  
  - **LOW → Soil Wet**  

👉 Best for:
- Automatic irrigation  
- Trigger-based systems  
- Low-complexity projects  

---

## 🔧 Hardware Setup & Connections

---

### 📷 Analog Mode Wiring

![Analog Wiring](https://playwithcircuit.com/wp-content/uploads/2024/07/Wiring-Soil-Moisture-Sensor-in-Analog-Mode.webp)

#### Connection Table (Analog Mode)

| Sensor Pin | Arduino Pin |
|------------|------------|
| VCC        | 5V         |
| GND        | GND        |
| AO         | A0         |

#### Explanation

Connect the sensor’s VCC to Arduino 5V and GND to GND. The **AO pin** is connected to analog pin **A0**, allowing the Arduino to read varying voltage levels corresponding to soil moisture.

---

### 📷 Digital Mode Wiring

![Digital Wiring]((https://playwithcircuit.com/wp-content/uploads/2024/07/Wiring-Soil-Moisture-Sensor-in-Digital-Mode.webp))

#### Connection Table (Digital Mode)

| Sensor Pin | Arduino Pin |
|------------|------------|
| VCC        | 5V         |
| GND        | GND        |
| DO         | D2         |

#### Explanation

In digital mode, connect the **DO pin** to digital pin. The sensor outputs a HIGH or LOW signal based on moisture threshold set via the potentiometer.

---

## ⚡ Sensor Calibration (Very Important)

Calibration ensures accurate detection and avoids false readings.

### Step-by-Step Calibration

1. Insert the sensor probe into **dry soil**
2. Observe the **output LED on the module**

   - If LED is ON → rotate potentiometer **anti-clockwise** until it turns OFF  

3. Now insert the probe into **wet soil**
4. Check LED again:

   - If LED is OFF → rotate potentiometer **clockwise slowly** until it turns ON  

5. Repeat steps if needed to fine-tune sensitivity

---

### 🔧 Why Calibration Matters

- Soil types vary (sand, clay, etc.)  
- Moisture conductivity differs across environments  
- Ensures reliable switching in digital mode  
- Improves accuracy in analog readings  

---

## 🛠️ Extensions & Improvements

You can enhance this project further:

- Add relay module → automatic watering system  
- Use ESP8266/ESP32 → IoT-based monitoring  
- Display data on LCD/OLED  
- Integrate with Blynk / ThingSpeak  
- Use sleep mode → battery-powered system  

---

## ⚠️ Limitations

- Resistive sensors corrode over time  
- Accuracy depends on soil composition  
- Not ideal for long-term outdoor deployment  

👉 For long-term projects, consider **capacitive soil moisture sensors**

---

## 📈 Applications

- Smart irrigation  
- Precision farming  
- Greenhouse automation  
- Indoor plant monitoring  

---

## 🔗 Full Tutorial & Code

For complete implementation, including:

- Arduino code  
- LCD integration  
- Troubleshooting  
- Advanced setups  

👉 Visit **Play at Circuit**

---

## 🤝 Contributing

Feel free to fork this repository and contribute improvements.

---

## ⭐ Support

If you found this helpful:

- Star ⭐ this repository  
- Share with others  
- Explore more projects  

---

## 📜 License

This project is open-source under the MIT License.
