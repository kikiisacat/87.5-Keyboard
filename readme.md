# 87.5% Keyboard

I made a custom RP-Pico keyboard with the arrow keys integrated in the number pad and main keyboard to save space and look nice. Additionally, the FN keys are remapped and can be triggered from holding down the FN/FN lock key and using 1,2,3,4,5,6,7,8,9,0,-,= keys for F1-F12 to save more space.

![](https://fabricate.hackclub-assets.com/abedb2a76a35715dbbfc63932f288aa27f5d4945663a3e71d6aaca096674fcd7/image-png/Screenshot%202026-10-20%20at%204.47.11%E2%80%AFPM.png)

# Features
77 switches + a rotary encoder push button \
Hold FN and press 1-0, -, = for F1-F12 \
New FN lock and Macro lock keys for ease of use \
24 macro slots in firmware \
LED indicators for FN lock, Caps lock, and Macro lock. \
QMK firmware \
RP Pico mounted on headers to save space

# Schematic wiring & PCB

![](https://fabricate.hackclub-assets.com/e7b1d3a1c1b26c0b87de32af17286365124901329ad9c857f5323c5aaa47be94/image-png/image.png)

![](https://fabricate.hackclub-assets.com/bd6ac39612680c8f69316b76d1d43df63f8dc9a03b01d6e3352bf967afa36092/image-png/image.png)

# Final Assembly

All of the switches' STEP files were from this repo: \
https://github.com/anhthang/dsa-keycap \
For the custom length switches like the spacebar, I would split a 1x1 switch in half and extrude the ends together to meet the new length.

![](https://fabricate.hackclub-assets.com/79b0b32347509cdd652443e38197e853ed22afcde2e032d9cd06023a662b156f/image-png/image.png)
