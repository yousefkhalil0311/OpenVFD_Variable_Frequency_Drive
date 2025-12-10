# Variable_Frequency_Drive (12V DC Motor Controller)

A compact and modular single-phase motor controller designed for **12 V DC motors**.  
Inspired by the control architecture of traditional industrial VFDs (such as the YKT5), this project adapts those concepts to a simple, safe, low-voltage platform using PWM modulation, real-time protection logic, and a configurable control interface.

---

To begin, use the included .ioc file to generate an STM32CUBEIDE project and generate the code template. Then, simply copy all files from Core/Src into your local Core/Src directory.

## 🌟 Features

### ⚡ Core Motor Control
- Works from any **12 V DC power source**
- High-frequency PWM output for smooth motor control
- Adjustable:
  - PWM frequency  
  - Duty cycle (effective motor voltage)  
  - Soft-start ramp times  
- Supports brushed DC motors or BLDC controllers that accept PWM input

### 🔍 Sensing & Feedback
- Motor current measurement
- Input voltage monitoring (useful for battery or unstable supplies)
- Optional temperature sensing

### 🛡 Protection System
- Overcurrent limit / fast shutdown
- Undervoltage detection
- Overvoltage / supply spike detection
- Thermal protection (MCU or external thermistor)
- Fault codes sent via UART

### 🧩 Firmware Structure
- `pwm/` – PWM generation, frequency control, ramping
- `drivers/` – ADC, GPIO, timer drivers
- `protection/` – current/voltage monitoring and fault handling
- `ui/` – UART CLI and parameter configuration
- `main.c` – main loop, scheduler, and control logic

---

## 🔌 How the System Works

1. **12 V DC Input → MOSFET Switching Stage**  
   The motor is driven through a high-current MOSFET (or half-bridge), controlled by a timer-based PWM output.

2. **PWM Frequency Control**  
   The project allows changing PWM frequency, which affects:
   - acoustic noise  
   - switching losses  
   - motor response characteristics  

3. **Duty Cycle Control**  
   Increasing duty cycle increases motor speed.  
   Lowering duty cycle decreases torque and speed.

4. **Feedback Loop**  
   ADC continuously measures:
   - motor current  
   - supply voltage  
   - optional temperature  

5. **Protection Logic**  
   If a fault occurs, the controller shuts the MOSFET off and reports:
   - OCP (overcurrent)
   - UVLO (undervoltage)
   - OVLO (overvoltage)
   - OTP (over-temperature)

6. **User Interface**  
   UART commands (USB-serial or hardware UART):