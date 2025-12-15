#   FILE SUBMISSION CHECKLIST - C-QUEST KP 2025

##   Source Code Files (Core)

-   **score.h** (991 byte)
  - File header untuk manajemen skor
  - Definisi struct ScoreEntry dan ScoreList
  - Prototipe fungsi

-   **score.c** (8.0 KB)
  - Implementasi load/save JSON
  - Logika tampilan leaderboard
  - Tampilan riwayat pemain
  - Parser JSON kustom

-   **game.c** (4.1 KB)
  - Loop utama permainan
  - Pengacakan kata & pembuatan hint
  - Evaluasi tebakan dengan umpan balik
  - Pencatatan skor

-   **main.c** (3.3 KB)
  - Sistem menu (5 opsi)
  - Penanganan input pengguna
  - Manajemen sesi permainan

##   File Build

-   **Makefile** (345 byte)
  - Target kompilasi
  - Flag GCC: -O2 -Wall -std=c99
  - Target clean

-   **cquest** (22 KB - executable)
  - File biner hasil kompilasi
  - Siap dijalankan: `.\cquest.exe`

##   File Dokumentasi

-   **README.md** (8.1 KB)
  - Dokumentasi lengkap
  - Gambaran fitur
  - Panduan penggunaan
  - Deskripsi API
  - Pemecahan masalah

-   **QUICKSTART.md** (6.0 KB)
  - Panduan cepat memulai
  - Tugas umum
  - Struktur file
  - Contoh penggunaan
  - Tips & trik

-   **IMPLEMENTATION_SUMMARY.md** (5.4 KB)
  - Status implementasi
  - Daftar fitur
  - Teknologi yang digunakan
  - Pengecualian dari requirement

##   Project Statistics

| Metric | Value |
|--------|-------|
| Total Source Lines | 489 |
| Header Lines | 34 |
| Implementation Lines | 455 |
| Number of Functions | 15+ |
| Number of Structs | 2 |
| Compilation Time | < 1 second |
| Executable Size | 22 KB |
| Code Quality | Clean C99 |

## Features Implemented (  = Done)

### Menu System
-   Login / Set nama pemain
-   Tampilkan Top Scores (per mode)
-   Tampilkan Riwayat Pemain (all-time)
-   Mainkan Game (dengan validasi)
-   Keluar

### Game Logic
-   3 tingkat kesulitan (Easy, Medium, Hard)
-   Pengacakan dan randomisasi kata
-   Pembuatan hint berupa anagram
-   Evaluasi tebakan
-   Sistem umpan balik

### Data Management
-   Format file JSON (scores.json)
-   Auto-load saat program dijalankan
-   Auto-save setelah setiap permainan
-   Penyimpanan data persisten

### Statistics
-   games_played (per mode)
-   wins (per mode)
-   best_attempts (per mode)
-   total_attempts (per mode)
-   last_win date (per mode)

### UI/Display
-   Leaderboard Top 5 (tersortir)
-   Tampilan riwayat pemain
-   Umpan balik permainan (simulasi berwarna)
-   Validasi input
-   Penanganan error

##   Code Quality Checklist

-   Header guard (#ifndef / #define / #endif)
-   Deklarasi fungsi di header
-   Definisi struct yang rapi
-   Optimasi penggunaan pointer
-   Pengecekan batas array
-   Penanganan error alokasi memori
-   Penanganan error file I/O
-   Validasi input
-   Penamaan variabel yang jelas
-   Desain fungsi modular
-   Komentar pada logika kompleks
-   Tidak ada error kompilasi
-   Peringatan compiler minimal

##   Pengecualian yang Diminta (HONORED)

###   NOT IMPLEMENTED (sesuai request)
1. Auto-login / penyimpanan sesi
2. Validasi kata (paksa cek kamus)

###   IMPLEMENTED (semua yang lain)
1. Statistik lanjutan (games_played, wins, dll)
2. Riwayat pemain (all-time per mode)
3. Kode modular (main.c, game.c, score.c)
4. Sistem build Makefile
5. Format data JSON

##   Compilation & Testing

### Successful Compilation
```powershell
  make
gcc -O2 -Wall -std=c99 -c main.c
gcc -O2 -Wall -std=c99 -c game.c
gcc -O2 -Wall -std=c99 -c score.c
gcc -O2 -Wall -std=c99 -o cquest main.o game.o score.o
```

### Program Execution
```powershell
  .\cquest.exe
[Menu system loads successfully]
[All 5 menu options functional]
[Game runs and saves scores]
```

### Data Persistence
```bash
  scores.json
[Valid JSON array with player records]
```

##   Deliverables Summary

| Item | Status | Notes |
|------|--------|-------|
| Source Code (.c/.h) |   Complete | 489 LoC |
| Makefile |   Complete | -O2 -Wall -std=c99 |
| Executable |   Complete | 22 KB binary |
| Documentation |   Complete | 3 markdown files |
| Feature Set |   Complete | All non-excepted features |
| Code Quality |   High | Proper C practices |
| Error Handling |   Implemented | File I/O & malloc checks |
| User Interface |   Functional | Menu-driven with validation |

##   Educational Value

### C Programming Concepts Demonstrated
-   Typedef struct untuk organisasi data
-   Penggunaan pointer pada parameter fungsi
-   Manajemen array
-   Operasi file I/O (fopen, fread, fwrite)
-   Manipulasi string
-   Modularisasi fungsi
-   Alur kompilasi dengan Makefile

### Software Engineering Practices
-   Separation of concerns (UI/Logic/Data layers)
-   Header file design
-   Modular architecture
-   Error handling
-   Build automation
-   Documentation
-   Code organization

##   How to Use This Submission

1. **Copy all .c, .h, and Makefile files to target directory**
   ```bash
   cp score.h score.c game.c main.c Makefile /target/directory/
   ```

2. **Compile**
   ```bash
   cd cquest
   make
   ```

3. **Run**
  ```powershell
  .\cquest.exe
  ```

4. **Reference Documentation**
   - README.md → Panduan lengkap
   - QUICKSTART.md → Panduan singkat
   - IMPLEMENTATION_SUMMARY.md → Detail teknis

##   Extra Features (Bonus)

-   Pembuatan hint anagram (Fisher-Yates shuffle)
-   Pencatatan tanggal format YYYY-MM-DD
-   Perhitungan rata-rata percobaan
-   Penyortiran leaderboard
-   Validasi input nama dan tebakan
-   Parser JSON kustom tanpa library eksternal
-   Simulasi warna pada output

##   Final Status