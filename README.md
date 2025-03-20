**Dummy Traffic Light Project**🚦

**Overview**
This project simulates a simple traffic light system using an Arduino. It includes traffic lights for vehicles and pedestrians, controlled by a push button. This is purely a simulation and can be tested using the Wokwi online simulator.

**Components :**
- Microcontroller: Arduino (e.g., Uno)
- LEDs:
  1. Traffic Light (Vehicles): Red, Yellow, Green
  2. Pedestrian Light: Red, Yellow, Green
- Push Button: Used to trigger pedestrian crossing
- Resistors: As required for LEDs and button
- Wiring: Jumper wires for connections

**Pin Configuration**
- Vehicle Red LED : 13
- Vehicle Yellow LED : 12
- Vehicle Green LED : 8
- Pedestrian Red LED : 7
- Pedestrian Yellow LED : 4
- Pedestrian Green LED : 2
- Push Button : 11

**How It Works**
- By default, the vehicle green light and pedestrian red light are ON.
- When the button is pressed, a timer starts.
- After 11 seconds:
  1. The vehicle green light turns off.
  2. The pedestrian red light turns off.
  3. The vehicle and pedestrian yellow lights turn on for 1 second.
  4. The vehicle red light and pedestrian green light turn on for 5 seconds (allowing pedestrians to cross).
  5. The pedestrian green light turns off.
  6. The vehicle and pedestrian yellow lights blink again for 1 second.\
  7. The system resets back to default state.

**Code Explanation**
- The setup() function initializes all LED pins as outputs and sets the button as an input.
- The loop() function checks if the button is pressed and starts a timer.
- Once the timer reaches 11 seconds, it executes the traffic light sequence.
- The sequence ensures safe pedestrian crossing while maintaining vehicle flow.

**Installation & Usage**
- Connect the components according to the pin configuration.
- Upload the provided Arduino code to the board.
- Press the button to activate the pedestrian crossing system.
- If you do not have physical hardware, you can run this simulation using Wokwi.

**Future Improvements**
- Add buzzer for pedestrian crossing signal.
- Implement an LCD display to show countdown timers.
- Use an RTC module for time-based traffic control.

**License**
This project is open-source and free to use for educational purposes.
