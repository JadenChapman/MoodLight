# RGB Mood Light 🚨

The **RGB Mood Light** is an interactive Arduino-based lighting system that changes its color based on the ambient light levels. As the environment gets darker, the RGB light dynamically shifts through colors, creating a relaxing and adaptive lighting experience.

## 📝 Description

This project uses a **Light Dependent Resistor (LDR)** to detect the brightness of the surroundings. Based on the amount of light detected, an RGB LED smoothly transitions through various colors to reflect the mood of the environment. Ideal for DIY ambient lighting, nightstands, or mood-enhancing desk accessories.

---

## 🔧 Components Used

| Component           | Quantity |
|---------------------|----------|
| Arduino (Uno/Nano)  | 1        |
| Red LED             | 1        |
| Green LED           | 1        |
| Blue LED            | 1        |
| RGB LED (Common Anode/Cathode) | 1 |
| LDR (Light Dependent Resistor) | 1 |
| 220Ω Resistors      | 6        |
| 10KΩ Resistor       | 1        |
| Jumper Cables       | 13       |
| Breadboard          | 1        |
| Paper Box (for light) | 1    |

---

## ⚙️ Installation / Setup

1. **Assemble the circuit** using a breadboard and jumper cables.
2. Connect the LDR with a 10K resistor to create a voltage divider.
3. Attach the RGB LED and/or 3 single LEDs (Red, Green, Blue) with 220Ω resistors to PWM pins.
4. Upload the Arduino sketch using the Arduino IDE.
5. Place the setup inside a paper box for diffused lighting effect.

### Arduino IDE Setup:

1. Install [Arduino IDE](https://www.arduino.cc/en/software) if you haven't already.
2. Connect your Arduino via USB.
3. Open the provided sketch (`RGBMoodLight.ino`).
4. Select your board and port from **Tools > Board / Port**.
5. Click **Upload** to flash the code.

---

## 💡 How It Works

- The **LDR** senses ambient light levels.
- As the room gets **darker**, the analog signal from the LDR increases.
- The Arduino reads the LDR value and **maps it to RGB values**.
- The RGB LED smoothly transitions through colors based on brightness.
- A **paper box** acts as a diffuser, giving a soft ambient glow.

---

## 🖼️ Images / Videos
- [Mood Light in Box](https://drive.google.com/file/d/1A68Gllmn5ULe1P5W8BhK7s7HXCpxaD2C/view)
- [Demo Video](https://drive.google.com/file/d/1IYMHzMX36PP208ozQ-X8mrm2MQmKhOj_/view?t=8)

---

## 🧪 Simulation (Optional)

If you’d like to try the project in a virtual environment:

- [Tinkercad Circuit Simulation](https://www.tinkercad.com/things/lb3lWuHPr5h-mood-light)

---

## 🙌 Credits

Project by: Jaden Chapman  
Inspired by the Arduino maker community  
Special thanks to open-source contributors and educators

---

