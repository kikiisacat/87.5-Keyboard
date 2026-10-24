---
title: "The 87.5% Keyboard"
github: "https://github.com/kikiisacat/87.5-Keyboard"
description: "A 85% Keyboard, except it has a number pad like a 90% one. The FN keys have been removed (Like a 60% keyboard)  to save space, and are replaced with holding FN + 1,2,3,4,5,6,7,8,9,0,-,= to get FN 1-12.\nI decided to build this keyboard, as it is compact for my workspace, looks cleaner than a 90% keyboard, and has all keys I need and all keys I don't need removed or remapped."
created_at: "2026-10-20"
total_time: "15h 30m"
---

# October 20, 2026: Planning and Parts Finding
<!-- fabricate:entry 773 -->

I finished the keyboard layout in keyboard layout editor, where I discovered I had an extra key for `/~ and also period on the keypad. I also added a FN key and dedicated FN lock from another extra key. The top row of numbers will need to share four modifier keys in firmware.

Parts list:
Raspberry Pi Pico
Gateron G Pro switches
1N4148 diodes
2-layer PCB
MX keycaps
Screws/heatset inserts
LEDs and resistors

https://www.keyboard-layout-editor.com/#/gists/5186175b9df5e2921d1e584f7e60c8e6

![](https://fabricate.hackclub-assets.com/abedb2a76a35715dbbfc63932f288aa27f5d4945663a3e71d6aaca096674fcd7/image-png/Screenshot%202026-10-20%20at%204.47.11%E2%80%AFPM.png)

**Total time spent: 2h**

# October 20, 2026 (entry 2): Finished Schematic
<!-- fabricate:entry 779 -->

I wired up the Raspberry Pi Nano, 78 switches, and the three status LEDs for FN lock, Caps Lock, and Macro Lock.

During the schematic creation process, I also swapped the escape key for a dial that can be used for volume control that can also be pressed down for escape.

![](https://fabricate.hackclub-assets.com/e7b1d3a1c1b26c0b87de32af17286365124901329ad9c857f5323c5aaa47be94/image-png/image.png)

**Total time spent: 3h 30m**

# October 22, 2026: Finished PCB
<!-- fabricate:entry 1101 -->

I arranged all the footprints into the keyboard's shape and wired up all the keys, LEDs, and other components to the pi. I also added keycaps, switches, and the pi to the 3D layout.
The pi will sit on headers connected to the PCB to give clearance to the back mounted resistors under it.

![](https://fabricate.hackclub-assets.com/bd6ac39612680c8f69316b76d1d43df63f8dc9a03b01d6e3352bf967afa36092/image-png/image.png)
![](https://fabricate.hackclub-assets.com/735184d692e263f59a9ec32a09b3dd0b23a82c6bbf505b144562fadbd171e7aa/image-png/image.png)
![](https://fabricate.hackclub-assets.com/d404993fd6d57075bf129c4e215d78c4f887adbe587ffecd4331ad5939f9b50e/image-png/image.png)

**Total time spent: 7h**

# October 24, 2026: Finished Keyboard Case
<!-- fabricate:entry 1186 -->

Imported 3D model into Fusion360 and finished modeling the case around the KiCAD 3D model.
It was pretty straightfowards to make. However, its 23mm tall which might cause hand fatigue while being used, and it was either increased height or increased keyboard length to accomidate for the raspberry pi pico. The RP Pico can probably be moved closer to the PCB to reduce height in real life.


![](https://fabricate.hackclub-assets.com/79b0b32347509cdd652443e38197e853ed22afcde2e032d9cd06023a662b156f/image-png/image.png)
![](https://fabricate.hackclub-assets.com/34e106deb156ca01a68ccdff9070ca395c521b8935fe67ee7d2e6d6273f6e6f2/image-png/image.png)
![](https://fabricate.hackclub-assets.com/f6955bd2dafb38647dfc9834da81eeca04d352972eb62844abec6d00ca0e3638/image-png/image.png)

**Total time spent: 1h**

# October 24, 2026 (entry 2): Finished up Firmware
<!-- fabricate:entry 1218 -->

I finished the firmware using RMK. It has all 78 keys and supports the 24 macro keys, as well as caps lock/fn lock/macro lock handling. The keyboard should be finished now.

![](https://fabricate.hackclub-assets.com/96132fdf787404166abd62ad3e350fb4bd8bd9fc832b8091838b12676d5f8387/image-png/image.png)

**Total time spent: 2h**
