# PUSH-BUTTON-COUNTER
*COMPANY*:CODTECH IT SOLUTION
*NAME*: KRISHNANSH GUPTA 
*INTERN ID*:CT06DF1918
*DOMAIN*:EMBEDDED SYSTEM
*DURATION*:6 WEEKS 
*MENTOR*: NEELA SANTOSH 
Push Button Counter - Description
A push button counter is a simple electronic device or embedded system that counts the number of times a push button is pressed. It is widely used in basic digital electronics projects, educational demonstrations, and various applications where input counting is needed, such as event tallying, user interaction tracking, or mechanical switch monitoring.
The core functionality of a push button counter involves detecting button presses and incrementing a numerical value stored in a variable or memory register. This count can then be displayed using LEDs, an LCD screen, a 7-segment display, or sent to a serial monitor in systems like Arduino.
Working Principle
When a push button is pressed, it completes an electrical circuit, allowing a digital input pin on a microcontroller to detect a change in voltage. Typically, the button connects the input pin to ground (logic LOW), and the pin is internally pulled up to a HIGH state using a pull-up resistor. Thus, the microcontroller continuously monitors the pin state and detects a press when the pin changes from HIGH to LOW.
To ensure accurate counting, the system includes a method called debouncing. Mechanical buttons often produce noisy signals when pressed or released, resulting in multiple false triggers. A software-based debounce technique involves waiting for a short period (usually 10–50 milliseconds) after detecting a button press, and then re-checking the button state to confirm the press. Alternatively, hardware debouncing can be done using capacitors and resistors.
Every valid button press increments a counter variable. The updated value can be used for various purposes, such as turning on an LED after a certain count, triggering an alarm, or simply showing the count to the user.
Applications
Push button counters are commonly used in a variety of applications:
Digital electronics learning kits for students to understand microcontroller basics.
Industrial equipment to count mechanical operations or production items.
User input systems, such as voting machines or entry gates.
Fitness equipment, like step counters.
Customer interaction monitoring, e.g., "How was your experience?" kiosks.Hardware and Software Requirements
A typical push button counter consists of:
A push button switch.
A microcontroller (e.g., Arduino, ATmega, PIC, STM32, etc.).
A display unit (optional) like an LED, LCD, or 7-segment.
Pull-up or pull-down resistors to maintain stable logic levels.
In software, the main components include:
Configuring the button pin as an input.
Detecting state changes using digital reads.
Implementing debouncing logic.
Incrementing the counter variable.
Displaying or using the counter value.
Conclusion
In conclusion, a push button counter is a fundamental yet powerful tool in digital electronics and embedded systems. It introduces learners to important concepts such as input polling, state change detection, debouncing, and variable manipulation. With real-world uses in automation, monitoring, and user interfaces, push button counters are not only educational but also practical components of modern embedded applications.
*OUTPUT 
![Image](https://github.com/user-attachments/assets/2a0a94ed-6434-40a5-8404-12221694a529)
![Image](https://github.com/user-attachments/assets/d69a2715-d081-46c9-8b34-7515ee7076dd)
