# 🍱 Aplikasi Kasir Kantin Sekolah (C++)

Program ini adalah aplikasi kasir sederhana untuk kantin sekolah, dibuat menggunakan bahasa **C++** dan dijalankan melalui terminal. Pengguna dapat memilih menu makanan/minuman, memasukkan jumlah pesanan, dan sistem akan menampilkan total harga serta kembalian.

yayayaou

## 📋 Fitur Utama

- Menampilkan daftar menu makanan dan minuman.
- Mendukung pemesanan lebih dari satu item.
- Menghitung subtotal otomatis berdasarkan jumlah dan harga.
- Menampilkan invoice (struk) pembayaran.
- Menghitung total bayar dan kembalian.

## 🧾 Daftar Menu
### 🍽️ Makanan

```
No	Menu	             Harga
1	Nasi Geprek	    Rp12.000
2	Nasi Bungkus	    Rp10.000
3	Nasi Goreng	    Rp12.000
```
### 🍹 Minuman

```
No	Menu	            Harga
1	Es Teh / Hangat	   Rp3.000
2	Caramel Machiato   Rp12.000
3	Cappuccino	   Rp7.000
4	Jus Alpukat	   Rp11.000
```
## 💻 Cara Menjalankan
1. Clone Repositori
   ```
   git clone https://github.com/dhnnnn/kantinPOS.git
   ```
2. Compile Program
   ```
   g++ main.cpp -o kasir
   ```
3. Jalankan Program
   ```
   ./kasir

   ```

### 📸 Contoh Tampilan
```
KANTIN SEKOLAH

MENU :

1. Menu Makanan:
  1. Nasi Geprek  : Rp.12.000
  2. Nasi Bungkus : Rp.10.000
  3. Nasi Goreng  : Rp.12.000

2. Menu Minuman:
  4. Es teh/hangat       : Rp.3.000
  5. Caramel Machiato    : Rp.12.000
  6. Cappucino           : Rp.7.000
  7. Jus Alpukat         : Rp.11.000
-----------------------------------------------------
Tekan 0 jika selesai melakukan pemesanan

Pilih Menu : 1
Jumlah Porsi Nasi Geprek : 2

Pilih Menu : 4
Jumlah Porsi Es teh/hangat : 1

Pilih Menu : 0

INVOICE Pembayaran Kantin
------------------------------------------------------------
No  Nama Menu       Harga    Jumlah    Sub Total
1   Nasi Geprek     12000    2         24000
2   Es teh/hangat    3000    1          3000
------------------------------------------------------------
Total Harga = Rp.27000
Biaya = Rp.30000
Kembalian anda = Rp.3000

```


### ❗Catatan
- Tidak ada validasi input non-numerik.
- Harga makanan ditentukan statis dalam program.
- Tahun dan waktu transaksi belum dicatat.
- Menu maksimum dibatasi hingga 100 item (dapat dimodifikasi di kode).
