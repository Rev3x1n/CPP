# Project C++
This repository contains a collection of C++ practical assignments from the Programming Practicum course. I created it as an archive and a resource for my learning journey.


# 📘 Syntax C++ yang Baru Dipelajari

Berikut adalah beberapa syntax penting dalam C++ yang dipelajari pada week 2 digunakan untuk **manipulasi input/output** agar program lebih interaktif dan rapi.

---

## 1. `<iomanip>`
Header/library yang menyediakan **fungsi manipulasi format tampilan angka**.  
Biasa dipakai bersama `cout` untuk mengatur **presisi, lebar kolom, perataan, dan gaya tampilan angka**.

---

## 2. `getline(cin, ...)`
Digunakan untuk **mengambil input string yang mengandung spasi**.  
Berbeda dengan `cin` biasa yang hanya membaca sampai spasi pertama.  
> Contoh: `getline(cin, nama);` bisa membaca input seperti:  
> `Budi Santoso` → masuk ke variabel `nama` sebagai satu kesatuan string.

---

## 3. `cin.ignore()`
Digunakan untuk **membersihkan buffer input** agar tidak bentrok antara input bertipe berbeda.  
Biasanya dipakai setelah `cin >>` ketika dilanjutkan dengan `getline`.  
Tanpa ini, sering terjadi bug di mana `getline` hanya membaca **enter kosong**.

---

## 4. `setw(15)`
Berfungsi untuk mengatur **lebar kolom output** (dalam contoh: 15 karakter).  
Jika data lebih pendek, maka otomatis diberi **spasi tambahan**.  
> Cocok untuk membuat tabel rapi dalam tampilan console.

---

## 5. `left`
Modifier untuk mengatur **perataan teks ke kiri**.  
Biasanya dipakai bersamaan dengan `setw(...)` agar teks tidak default ke kanan.  
> Contoh: `cout << left << setw(15) << "Nama";`

---

## 6. `fixed + setprecision(2)`
- `fixed` → memaksa angka desimal ditampilkan dengan format **fixed-point** (bukan notasi ilmiah).  
- `setprecision(2)` → membatasi jumlah angka **di belakang koma** menjadi 2 digit.  
> Contoh: `3.14159` → tampil sebagai `3.14`

---

#include <iostream> - Mengimpor fungsi input/output
setw(5) - lebar kolom output
left - teks rata kiri
getline() - Untuk membaca string dengan spasi
cin.ignore() - Untuk membersihkan buffer input
fixed - Format angka desimal tetap
setprecision(n) - Mengatur jumlah digit desimal

✦ Dengan syntax ini, bisa membuat **output program lebih profesional, terstruktur, dan mudah dibaca**.

