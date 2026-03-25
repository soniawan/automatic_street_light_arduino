# Simple Automatic Street Light with Arduino Uno

## Pin di LDR ke Arduino UNO (bagian Power & Analog In)

| Pin di Modul LDR Sensor | Pin di Arduino Uno |              Keterangan               |
| :---------------------: | :----------------: | :-----------------------------------: |
|           VCC           |         5V         |                 Power                 |
|           GND           |        GND         |                Ground                 |
|     AO (Analog Out)     |         AO         | Data Analog (untuk baca angka cahaya) |

## Pin Lampu LED ke Arduno dan Resistor

1. Kaki panjang LED (Anoda) sambungkan ke Pin 9 Arduino (Digital PWM)
2. Kaki pendek LED (Katoda) sambungkan ke resistor (220 ohm), kaki resistor satunya sambungkan ke GND Arduino (Digital PWM). Resistor dibutuhkan agar LED tidak putus.

## Cara program arduino

1. Download arduino ide di laptop
2. Hubungkan Arduino: Pakai kabel USB, colok Arduino Uno ke laptop.
3. Setting Board: di Arduino IDE, buka menu Tools > Board, pilih Arduino Uno.
4. Setting Port: Buka Tools > Port, pilih port yang muncul (biasanya namanya COM3, COM4, dst).
5. Buat kode untuk arduino (Sketch)
6. Lalu Verify (icon centang) : untuk cek apakah ada kode yang salah atau tidak. 
7. Lalu Upload (icon panah ke kanan) : proses mengirim kode dari laptop ke memori arduino, tunggu sampai muncul tulisan "Done Uploading".