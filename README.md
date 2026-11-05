# Advanced_ET_scanner
Lightweight project for getting back into C programming and learning ESP32 development

Made to run on ESP32 with ESP-IDF 5.5:
check device manager and find used port for connected ESP32

enter download mode:
idf.py build
hold BOOT on ESP32
press RESET on ESP32
run idf.py -p COM1 flash
wait until flash is initialized
release BOOT on ESP32
