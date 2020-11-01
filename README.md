# SPM1800
This is a PCB for a southpaw mini 1800 layout keyboard with the following features:

- Big bar and split bar support
- MX or Alps style switches
- Two independent rotary encoders
- USB Type-C
- Breakout pins for RGB underglow
- Breakout pin for USB shield ground

## WARNING
This PCB has not been tested for functionality. Please review the project files prior to placing an order for manufacturing. Users should be warned that they are manufacturing this at their own risk. 

## Layout
![layout.png](.github/layout.png)

## PCB

![pcb-front.png](.github/pcb-front.png)

![pcb-back.png](.github/pcb-back.png)

## BOM

| Designator | Description | Package | LCSC Part Number |
|-----------|-----------|-------|-----------------|
|C1, C2, C3|Capacitor - 0.1uF|0805|C115962|
|C5|Capacitor - 10uF|0805|C165459|
|D1 - D58|Diode - 1N4148|SOD-123|C466653|
|D59|ESD Portection Diode - PRTR5V0U2X|SOD-143B|C12333|
|F1|Fuse 24V - 500mA|1206|C70076|
|R1, R2|Resistor - 10k|0805|C365230|
|R3, R4|Resistor - 5.2k|0805|C328405|
|U1|Atmega32u4|QFP-44_10x10mm_P0.8mm|C44854|
|USB1|HRO-TYPE-C-31-M-12|HRO-TYPE-C-31-M-12|C165948|
|Y1|Crystal 16Mhz 3.2x2.5mm, 4 pad|3225|C156247|

## QMK Firmware
Firmware has not been written at this time. This section will be updated when this task is completed.