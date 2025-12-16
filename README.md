# Portable Air-Ventilated Resting Bed

## 📌 Project Overview
The **Portable Air-Ventilated Resting Bed** is a healthcare-oriented engineering project designed to enhance patient comfort by providing controlled air inflation and deflation in resting pillows or bed sections. The system helps in reducing pressure accumulation, improving blood circulation, and preventing pressure sores, making it suitable for hospitals, elderly care, home healthcare, and emergency medical environments.

This project integrates **embedded systems and automated control** to deliver a cost-effective and portable healthcare solution.

---

## 🎯 Objectives
- Design a **portable and economical** air-ventilated resting system  
- Automate **air inflation and deflation cycles** using a microcontroller  
- Improve **patient comfort and pressure distribution**  
- Develop a scalable solution for healthcare and MSME applications  

---

## 🧠 System Description
The system is controlled using an **ESP8266 microcontroller**, which drives multiple relays connected to air pumps and valves. These relays regulate the airflow into inflatable air chambers placed in the resting bed or pillows. A predefined timing logic ensures alternating pressure distribution to avoid prolonged stress on specific body parts.

The design allows future expansion with IoT and sensor-based feedback mechanisms.

---

## 🛠️ Technologies & Components Used

### Hardware
- ESP8266 Wi-Fi Microcontroller  
- 4-Channel Relay Module  
- Air Pumps  
- Solenoid Valves  
- Inflatable Air Chambers / Pillows  
- Power Supply Unit  

### Software
- Arduino IDE  
- Embedded C / Arduino Programming  
- Git & GitHub for version control  

---


---

## ⚙️ Working Principle
1. The ESP8266 initializes the relay control pins during startup.
2. Relays are activated in a programmed sequence to:
   - Inflate selected air chambers  
   - Deflate other chambers simultaneously
3. Controlled time delays ensure balanced air circulation.
4. The cycle repeats continuously to maintain comfort and pressure relief.

---

## 🚀 Applications
- Hospital patient beds  
- Elderly care and rehabilitation centers  
- Home healthcare systems  
- Emergency and temporary medical facilities  

---

## 📈 Future Enhancements
- IoT-based remote monitoring and control  
- Mobile application integration  
- Sensor-based adaptive pressure regulation  
- Battery-powered portable variant  
- Cloud-based data logging for patient analysis  

---

## 📄 Documentation
Detailed project reports, circuit diagrams, and related documents are available in the **docs/** folder.

---

## 🤝 Acknowledgements
This project was developed as part of an academic initiative focused on healthcare innovation and Industry 4.0 concepts.

---

## 📬 Contact
For queries, suggestions, or collaboration, please use **GitHub Issues** or submit a **Pull Request**.

---

⭐ If you find this project useful, consider giving it a star!
