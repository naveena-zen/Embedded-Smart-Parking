# Embedded Parking Slot Detection System

## Abstract
Microcontroller-based parking automation model developed using Arduino architecture. The system performs real-time vehicle presence detection using IR sensors and provides visual and acoustic indication through LEDs and a buzzer.

## Problem Statement
Manual parking management increases vehicle search time and reduces parking efficiency due to the absence of real-time occupancy indication.

## System Overview
The system integrates IR proximity sensors with an Arduino microcontroller to detect vehicle presence in individual parking slots. The controller processes digital inputs and activates output indicators accordingly.

## Requirements
Comprehensive hardware and software requirements are provided in the `requirements.md` file.

## Working Principle
1. Each slot is equipped with an IR sensor.
2. Sensor detects vehicle presence.
3. Microcontroller processes the input signal.
4. Occupied slot → LED ON + buzzer alert.
5. Free slot → LED OFF.
6. Continuous polling ensures real-time monitoring.

## Key Features
- Sensor-based slot detection
- Real-time embedded control
- Automated visual indication
- Acoustic alert mechanism
- Reduced manual monitoring

## Conclusion
This project demonstrates an efficient embedded automation model for structured parking environments using microcontroller-based slot detection and indication logic.
