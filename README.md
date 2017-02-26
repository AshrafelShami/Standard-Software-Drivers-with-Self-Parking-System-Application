# Standard Software Drivers with Self-Parking System Application.
Building standard drivers for TivaC TM4C123GH6PM peripheral (GPIO - Timers - PWM - ADC - UART - I2C) and provides a slightly high-level programming interface to it, to allow application software to attach to, read and write data from, and change the behavior of the peripheral device.

Applying the standard drivers on a self-parking system application.
We have used GPIO, Timers and PWM to create an RC Car that can identify a parking space and parallel park by itself. The RC Car drives down a street searching for a parking space. When the car has identified a space, the car checks to see whether that space is large enough to park in. If it determines that there is sufficient space, the car will begin parallel parking into that space. 

The application is provided with Real Time Operating System (FreeRTOS), and has three main modules (Tasks).

Ultrasonic Module: interfacing with four ultrasonic sensors for distance measurements.
Self-Parking algorithm: to calculate the required moving distance for the parking motion purposes.
Motion Control module: interfacing with two DC motors for motion control.
