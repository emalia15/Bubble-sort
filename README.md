## Penjelasan Kompleksitas Algoritma Bubble Sort

Bubble Sort adalah algoritma pengurutan yang bekerja dengan cara membandingkan pasangan elemen yang bersebelahan dan menukarnya jika urutannya salah. Proses ini dilakukan berulang-ulang (dalam bentuk pass) hingga seluruh data terurut.

Cara kerjanya :
- Bandingkan dua elemen yang bersebelahan
- Jika urutannya salah, tukar tempat
- Ulangi proses ini sampai semua elemen berada di posisi yang benar

### Mengapa Kompleksitasnya O(n²)?

Karena Bubble Sort menggunakan **dua lapisan perulangan** (nested loop):
- Loop luar: mengulangi proses sebanyak (n - 1) kali
- Loop dalam: melakukan (n - i - 1) perbandingan pada setiap pass ke-i (membandingkan elemen bersebelahan)

Jika kita punya n data, maka:
- Pass 1: membandingkan n - 1 kali
- Pass 2: n - 2 kali
- Pass 3: n - 3 kali
- ...

Jumlah total perbandingan yang dilakukan:
(n - 1) + (n - 2) + ... + 1 = n(n - 1)/2

Karena n(n - 1)/2 adalah fungsi kuadrat terhadap n, maka kompleksitas waktunya dikategorikan sebagai:
O(n²)

### Contoh Sederhana:
Misalnya kita ingin mengurutkan:  
[5, 3, 4, 1]

**Pass 1:**
- 5 > 3 → tukar → `[3, 5, 4, 1]`
- 5 > 4 → tukar → `[3, 4, 5, 1]`
- 5 > 1 → tukar → `[3, 4, 1, 5]` → 5 sudah di posisi benar

**Pass 2:**
- 3 < 4 → tidak tukar
- 4 > 1 → tukar → `[3, 1, 4, 5]`

**Pass 3:**
- 3 > 1 → tukar → `[1, 3, 4, 5]` → selesai

Total perbandingan: 3 + 2 + 1 = **6 perbandingan**

### Kesimpulan:
- Bubble Sort membandingkan banyak pasangan elemen, bahkan jika array sudah hampir urut.
- Karena itu, waktu yang dibutuhkan tumbuh sangat cepat saat jumlah data bertambah.
- Maka, kompleksitas waktu Bubble Sort adalah **O(n²)**

