/* MODUL TABEL INTEGER */
/* Berisi definisi dan semua primitif pemrosesan tabel integer */
/* Penempatan elemen selalu rapat kiri */
/* Versi I : dengan banyaknya elemen didefinisikan secara eksplisit, 
   memori tabel statik */

#include <stdio.h>
#include "array.h"
   
/* ********** KONSTRUKTOR ********** */
/* Konstruktor : create tabel kosong  */
void MakeEmpty (Array * T)
/* I.S. T sembarang */
/* F.S. Terbentuk tabel T kosong dengan kapasitas IdxMax-IdxMin+1 */
{
	Neff(*T) = 0;
}

/* ********** SELEKTOR (TAMBAHAN) ********** */
/* *** Banyaknya elemen *** */
int NbElmt (Array T)
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
/* *** Daya tampung container *** */
{
	return Neff(T);
}

int MaxNbEl (Array T)
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
/* *** Selektor INDEKS *** */
{
	return IdxMax;
}

IdxType GetFirstIdx (Array T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen T pertama */
{
	return IdxMin;
}

IdxType GetLastIdx (Array T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen T terakhir */
{
	return Neff(T);
}

/* ********** Test Indeks yang valid ********** */
boolean IsIdxValid (Array T, IdxType i)
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
{
	return (i>=GetFirstIdx(T)) && (i<=GetLastIdx(T));
}

boolean IsIdxEff (Array T, IdxType i)
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */
{
	return (i>=GetFirstIdx(T)) && (i<=GetLastIdx(T));
}

/* ********** TEST KOSONG/PENUH ********** */
/* *** Test tabel kosong *** */
boolean IsEmpty (Array T)
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
/* *** Test tabel penuh *** */
{
	return (Neff(T)==0);
}

boolean IsFull (Array T)
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */
{
	return (Neff(T)==IdxMax);
}

/* ********** BACA dan TULIS dengan INPUT/OUTPUT device ********** */
/* *** Mendefinisikan isi tabel dari pembacaan *** */
void BacaIsi (Array * T)
/* I.S. T sembarang */
/* F.S. Tabel T terdefinisi */
/* Proses : membaca banyaknya elemen T dan mengisi nilainya */
/* 1. Baca banyaknya elemen diakhiri enter, misalnya N */
/*    Pembacaan diulangi sampai didapat N yang benar yaitu 0 <= N <= MaxNbEl(T) */
/*    Jika N tidak valid, tidak diberikan pesan kesalahan */
/* 2. Jika 0 < N <= MaxNbEl(T) Lakukan N kali: Baca elemen mulai dari indeks 
      IdxMin satu per satu diakhiri enter */
/*    Jika N = 0 hanya terbentuk T kosong */
{

}

void BacaIsiTab (Array * T)
/* I.S. T sembarang */
/* F.S. Tabel T terdefinisi */
/* Proses : membaca elemen T sampai dimasukkan nilai -9999 */
/* Dibaca elemen satu per satu dan disimpan mulai dari IdxMin */
/* Pembacaan dihentikan jika pengguna memasukkan nilai -9999 */
/* Jika dari pertama dimasukkan nilai -9999 maka terbentuk T kosong */
{

}

void TulisIsi (Array T)
/* Proses : Menuliskan isi tabel dengan traversal */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong : indeks dan elemen tabel ditulis berderet ke bawah */
/*      Jika T kosong : Hanya menulis "Tabel kosong" */
/* Contoh: Jika isi Tabel: [1, 20, 30, 50]
   Maka tercetak di layar:
   [1]1
   [2]20
   [3]30
   [4]50
*/
{

}

void TulisIsiTab (Array T)
/* Proses : Menuliskan isi tabel dengan traversal, tabel ditulis di antara kurung siku 
   antara dua elemen dipisahkan dengan separator "koma", tanpa tambahan karakter di depan,
   di tengah, atau di belakang, termasuk spasi dan enter */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong: [e1,e2,...,en] */
/* Contoh : jika ada tiga elemen bernilai 1, 20, 30 akan dicetak: [1,20,30] */
/* Jika tabel kosong : menulis [] */
{

}

/* ********** OPERATOR ARITMATIKA ********** */
/* *** Aritmatika tabel : Penjumlahan, pengurangan, perkalian, ... *** */
Array PlusTab (Array T1, Array T2)
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan  T1+T2, yaitu setiap elemen T1 dan T2 pada indeks yang sama dijumlahkan */
{

}

Array MinusTab (Array T1, Array T2)
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1-T2, yaitu setiap elemen T1 dikurangi elemen T2 pada indeks yang sama */
{

}

Array KaliTab (Array T1, Array T2)
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1 * T2 dengan definisi setiap elemen dengan indeks yang sama dikalikan */
{

}

Array KaliKons (Array Tin, ElType c)
/* Prekondisi : Tin tidak kosong */
/* Mengirimkan tabel dengan setiap elemen Tin dikalikan c */
{

}

/* ********** OPERATOR RELASIONAL ********** */
/* *** Operasi pembandingan tabel : < =, > *** */
boolean IsEQ (Array T1, Array T2)
/* Mengirimkan true jika T1 sama dengan T2 yaitu jika ukuran T1 = T2 dan semua elemennya sama */
{
	//KAMUS LOKAL
	int i;
	
	//ALGORITMA
	if(GetLastIdx(T1)!=GetLastIdx(T2))
	{
		return false;
	}
	else
	{
		
	}
}

boolean IsLess (Array T1, Array T2)
/* Mengirimkan true jika T1 < T2, */
/* yaitu : sesuai dg analogi 'Ali' < Badu' maka [0, 1] < [2, 3] */
{
	
}

/* ********** SEARCHING ********** */
/* ***  Perhatian : Tabel boleh kosong!! *** */
IdxType Search1 (Array T, ElType X)
/* Search apakah ada elemen tabel T yang bernilai X */
/* Jika ada, menghasilkan indeks i terkecil, dengan elemen ke-i = X */
/* Jika tidak ada, mengirimkan IdxUndef */
/* Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel T kosong */
/* Memakai skema search TANPA boolean */
{
	
}

IdxType Search2 (Array T, ElType X)
/* Search apakah ada elemen tabel T yang bernilai X */
/* Jika ada, menghasilkan indeks i terkecil, dengan elemen ke-i = X */
/* Jika tidak ada, mengirimkan IdxUndef */
/* Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel T kosong */
/* Memakai skema search DENGAN boolean Found */
{
	
}

boolean SearchB (Array T, ElType X)
/* Search apakah ada elemen tabel T yang bernilai X */
/* Jika ada, menghasilkan true, jika tidak ada menghasilkan false */
/* Memakai Skema search DENGAN boolean */
{
	
}

boolean SearchSentinel (Array T, ElType X)
/* Search apakah ada elemen tabel T yang bernilai X */
/* Jika ada, menghasilkan true, jika tidak ada menghasilkan false */
/* dengan metoda sequential search dengan sentinel */
/* Untuk sentinel, manfaatkan indeks ke-0 dalam definisi array dalam Bahasa C 
   yang tidak dipakai dalam definisi tabel */
{
	
}

/* ********** NILAI EKSTREM ********** */
ElType ValMax (Array T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai maksimum tabel */
{
	
}

ElType ValMin (Array T) 
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai minimum tabel */
/* *** Mengirimkan indeks elemen bernilai ekstrem *** */
{
	
}

IdxType IdxMaxTab (Array T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks i terkecil dengan nilai elemen merupakan nilai maksimum pada tabel */
{
	
}

IdxType IdxMinTab (Array T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks i terkecil dengan nilai elemen merupakan nilai minimum pada tabel */
{
	
}

/* ********** OPERASI LAIN ********** */
void CopyTab (Array Tin, Array * Tout)
/* I.S. Tin terdefinisi, Tout sembarang */
/* F.S. Tout berisi salinan dari Tin (elemen dan ukuran identik) */
/* Proses : Menyalin isi Tin ke Tout */
{
	
}

Array InverseTab (Array T)
/* Menghasilkan tabel dengan urutan tempat yang terbalik, yaitu : */
/* elemen pertama menjadi terakhir, */
/* elemen kedua menjadi elemen sebelum terakhir, dst.. */
/* Tabel kosong menghasilkan tabel kosong */
{
	
}

boolean IsSimetris (Array T)
/* Menghasilkan true jika tabel simetrik */
/* Tabel disebut simetrik jika: */
/*      elemen pertama = elemen terakhir, */
/*      elemen kedua = elemen sebelum terakhir, dan seterusnya */
/* Tabel kosong adalah tabel simetris */
{
	
}

/* ********** SORTING ********** */
void MaxSortDesc (Array * T)
/* I.S. T boleh kosong */
/* F.S. T elemennya terurut menurun dengan Maximum Sort */
/* Proses : mengurutkan T sehingga elemennya menurun/mengecil */
/*          tanpa menggunakan tabel kerja */
{
	
}

void InsSortAsc (Array * T)
/* I.S. T boleh kosong */
/* F.S. T elemennya terurut menaik dengan Insertion Sort */
/* Proses : mengurutkan T sehingga elemennya menaik/membesar */
/*          tanpa menggunakan tabel kerja */
{
	
}

/* ********** MENAMBAH ELEMEN ********** */
/* *** Menambahkan elemen terakhir *** */
void AddAsLastEl (Array * T, ElType X)
/* Proses: Menambahkan X sebagai elemen terakhir tabel */
/* I.S. Tabel T boleh kosong, tetapi tidak penuh */
/* F.S. X adalah elemen terakhir T yang baru */
{
	++T->Neff;
	T->TI[T->Neff] = X;
}

void AddEli (Array * T, ElType X, IdxType i)
/* Menambahkan X sebagai elemen ke-i tabel tanpa mengganggu kontiguitas 
   terhadap elemen yang sudah ada */
/* I.S. Tabel tidak kosong dan tidak penuh */
/*      i adalah indeks yang valid. */
/* F.S. X adalah elemen ke-i T yang baru */
/* Proses : Geser elemen ke-i+1 s.d. terakhir */
/*          Isi elemen ke-i dengan X */
{
	
}

/* ********** MENGHAPUS ELEMEN ********** */
void DelLastEl (Array * T, ElType * X)
/* Proses : Menghapus elemen terakhir tabel */
/* I.S. Tabel tidak kosong */
/* F.S. X adalah nilai elemen terakhir T sebelum penghapusan, */
/*      Banyaknya elemen tabel berkurang satu */
/*      Tabel T mungkin menjadi kosong */
{
	
}

void DelEli (Array * T, IdxType i, ElType * X)
/* Menghapus elemen ke-i tabel tanpa mengganggu kontiguitas */
/* I.S. Tabel tidak kosong, i adalah indeks efektif yang valid */
/* F.S. X adalah nilai elemen ke-i T sebelum penghapusan */
/*      Banyaknya elemen tabel berkurang satu */
/*      Tabel T mungkin menjadi kosong */
/* Proses : Geser elemen ke-i+1 s.d. elemen terakhir */
/*          Kurangi elemen efektif tabel */
{
	int j;
	*X = T->TI[i];
	--T->Neff;
	for (; i <= T->Neff; ++i) {
		T->TI[i] = T->TI[i + 1];
	}
}

/* ********** TABEL DGN ELEMEN UNIK (SETIAP ELEMEN HANYA MUNCUL 1 KALI) ********** */
void AddElUnik (Array * T, ElType X)
/* Menambahkan X sebagai elemen terakhir tabel, pada tabel dengan elemen unik */
/* I.S. Tabel T boleh kosong, tetapi tidak penuh */
/*      dan semua elemennya bernilai unik, tidak terurut */
/* F.S. Jika tabel belum penuh, menambahkan X sbg elemen terakhir T, 
        jika belum ada elemen yang bernilai X. 
		Jika sudah ada elemen tabel yang bernilai X maka I.S. = F.S. 
		dan dituliskan pesan "nilai sudah ada" */
/* Proses : Cek keunikan dengan sequential search dengan sentinel */
/*          Kemudian tambahkan elemen jika belum ada */
{
	
}

/* ********** TABEL DGN ELEMEN TERURUT MEMBESAR ********** */
IdxType SearchUrut (Array T, ElType X)
/* Prekondisi: Tabel T boleh kosong. Jika tidak kosong, elemen terurut membesar. */
/* Mengirimkan indeks di mana harga X dengan indeks terkecil diketemukan */
/* Mengirimkan IdxUndef jika tidak ada elemen tabel bernilai X */
/* Menghasilkan indeks tak terdefinisi (IdxUndef) jika tabel kosong */
{
	
}

ElType MaxUrut (Array T)
/* Prekondisi : Tabel tidak kosong, elemen terurut membesar */
/* Mengirimkan nilai maksimum pada tabel */
{
	
}

ElType MinUrut (Array T)
/* Prekondisi : Tabel tidak kosong, elemen terurut membesar */
/* Mengirimkan nilai minimum pada tabel*/
{
	
}

void MaxMinUrut (Array T, ElType * Max, ElType * Min)
/* I.S. Tabel T tidak kosong, elemen terurut membesar */
/* F.S. Max berisi nilai maksimum T
        Min berisi nilai minimum T */
{
	
}		
			
void Add1Urut (Array * T, ElType X)
/* Menambahkan X tanpa mengganggu keterurutan nilai dalam tabel */
/* Nilai dalam tabel tidak harus unik. */
/* I.S. Tabel T boleh kosong, boleh penuh. */
/*      Jika tabel isi, elemennya terurut membesar. */
/* F.S. Jika tabel belum penuh, menambahkan X. */
/*      Jika tabel penuh, maka tabel tetap. */
/* Proses : Search tempat yang tepat sambil geser */
/*          Insert X pada tempat yang tepat tersebut tanpa mengganggu keterurutan */
{
	
}

void Del1Urut (Array * T, ElType X)
/* Menghapus X yang pertama kali (pada indeks terkecil) yang ditemukan */
/* I.S. Tabel tidak kosong */
/* F.S. Jika ada elemen tabel bernilai X , */
/*      maka banyaknya elemen tabel berkurang satu. */
/*      Jika tidak ada yang bernilai X, tabel tetap. */
/*      Setelah penghapusan, elemen tabel tetap kontigu! */
/* Proses : Search indeks ke-i dengan elemen ke-i = X. */
/*          Delete jika ada. */
{
	
}