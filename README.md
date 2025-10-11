# Tic-Tac-Toe Sederhana Pake C++

Yo, jadi ini tuh game Tic-Tac-Toe klasik yang dibikin pake C++. Simpel aja, buat main di terminal. Mayan lah buat ngisi waktu gabut atau adu pinter sama temen.

## Cara Jalanin Gamenya

Gampang banget, serius. Gak perlu install yang aneh-aneh, yang penting di komputermu udah ada compiler C++ (misalnya g++).

1.  **Simpen Kodenya**
    Simpen kode di atas jadi satu file, kasih nama aja `tictactoe.cpp` atau apa pun bebas.

2.  **Buka Terminal**
    Buka terminal atau Command Prompt, terus arahin ke folder tempat kamu simpen file tadi.

3.  **Compile Kodenya**
    Ketik command ini terus enter:

    ```bash
    g++ tictactoe.cpp -o tictactoe
    ```

    Ini bakal ngebuat file baru namanya `tictactoe` yang bisa dieksekusi.

4.  **Jalanin Gamenya**
    Kalo udah, tinggal ketik ini buat main:

    ```bash
    ./tictactoe
    ```

Selesai. Langsung deh muncul papan permainannya.

## Cara Main

Gak ada bedanya sama Tic-Tac-Toe di kertas.

  * Game ini buat **dua pemain**, X dan O.
  * Pemain `X` dapet giliran pertama.
  * Nanti kamu bakal disuruh masukin **nomor kotak** (dari 1 sampe 9) buat naruh bidak kamu.
  * Gantian aja terus sampe salah satu dari kalian ada yang bikin garis (horizontal, vertikal, atau diagonal), atau sampe papannya penuh (seri).
  * Kalo milih kotak yang udah keisi, ntar disuruh ngulang kok, sans.

## Fitur

Fiturnya standar aja sih, tapi fungsional:

  * **Gameplay Dua Pemain**: Adu mekanik langsung sama temen.
  * **Deteksi Menang & Seri**: Gamenya otomatis bakal ngasih tau kalo ada yang menang atau kalo hasilnya seri.
  * **Validasi Input**: Gak bakal bisa nimpa kotak yang udah diisi sama pemain lain. Kalo nekat, bakal disuruh input ulang.

Gitu aja sih. Kalo mau dioprek atau dikembangin lagi, gas aja. *Have fun\!*
