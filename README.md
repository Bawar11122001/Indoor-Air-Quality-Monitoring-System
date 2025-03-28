# 🌬️ Indoor Air Quality Monitoring System

The **Indoor Air Quality Monitoring System** is an Arduino-based project designed to monitor and display real-time air quality parameters. This system helps detect harmful pollutants and notifies users to take necessary precautions to ensure a safe indoor environment.

## 📚 Overview
This project utilizes an **Arduino UNO** microcontroller along with various sensors to measure air quality parameters such as:
- Carbon Monoxide (CO)
- Particulate Matter (PM2.5 and PM10)
- Temperature and Humidity
- Volatile Organic Compounds (VOCs)
- Air Quality Index (AQI)

The collected data is displayed on an LCD screen and can be transmitted to a connected device for further analysis.

---

## ⚙️ Features
✅ Real-time air quality monitoring  
✅ Detection of harmful gases and pollutants  
✅ Temperature and humidity measurement  
✅ Display results on an LCD or OLED screen  
✅ Visual and audible alerts for poor air quality  

---

## 🛠️ Components Required
1. Arduino UNO  
2. MQ-135 Air Quality Sensor (or MQ-7 for CO detection)  
3. DHT11 / DHT22 Temperature and Humidity Sensor  
4. PMS5003 / SDS011 Particulate Matter Sensor (optional for PM data)  
5. 16x2 LCD Display (or OLED Display)  
6. Buzzer for Alerts  
7. Resistors, Wires, and Breadboard  
8. Power Supply or USB Cable  

---

## 📡 Working Principle
1. The sensors collect data from the surrounding environment.  
2. The Arduino UNO processes the data and calculates AQI levels.  
3. The data is displayed on an LCD screen and alerts are triggered if pollutant levels exceed safe limits.  
4. Optional: Data can be transmitted to a cloud platform for remote monitoring.  

---

## 🔥 Alert System
- **Green Light/No Alert:** Air quality is safe.  
- **Yellow Light/Warning:** Moderate air pollution detected.  
- **Red Light/Alarm:** Dangerous levels of pollutants. Immediate action is required.  

---

## 📝 Code Overview
The Arduino code includes:
- Sensor initialization and calibration  
- Data acquisition from air quality sensors  
- AQI calculation based on pollutant concentration  
- LCD or OLED display integration  
- Triggering buzzer and LED for unsafe conditions  

---

## 📡 Future Enhancements
- Integration with IoT platforms for remote monitoring.  
- Smartphone notifications and alerts.  
- AI-based predictive analysis for air quality trends.  

---

## 🛠️ Installation and Setup
1. Clone the repository:
```bash
git clone https://github.com/Bawar11122001/Indoor-Air-Quality-Monitoring-System.git
```
2. Connect the components as per the circuit diagram.  
3. Upload the code to Arduino UNO using Arduino IDE.  
4. Power up the system and observe the real-time data.  

---

## 📧 Contact
For any queries or suggestions, reach out to:  
📧 Email: [bawarhusain11@gmail.com](mailto:bawarhusain11@gmail.com)

---

Happy Monitoring! 🎉
