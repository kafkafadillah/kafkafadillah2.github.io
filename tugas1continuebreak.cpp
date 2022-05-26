#include <iostream>
using namespace std;

struct mobil_melintas
{
    int nopol;
    string merk;
    string warna;
    string kodedaerah;
};

int main()
{
    mobil_melintas mobil[] =
        {
            {1920,
             "Avanza",
             "Hitam metalik",
			 "Z"},
            {2022,
             "Terios",
             "Merah",
             "B"},
            {436,
             "Terano",
             "Hitam Metalik",
             "Z"},
            {1890,
             "camry",
             "silver",
             "R"},
            {2190,
             "xpander",
             "Merah Marun",
             "D"},
            {2127,
             "Alphard",
             "Putih",
             "F"},
			 {1780,
			 "Mobilio",
			 "Abu - Abu",
			 "B"}
			 };

    for (int i = 0; i < 7; i++)
    {
        if (mobil[i].nopol%2 == 1)
        {
            cout << "mobil dengan merk " << mobil[i].merk << " Warna " << mobil[i].warna << " dengan plat nomer " << mobil[i].kodedaerah <<" "<<mobil[i].nopol<< " Dipersilahkan Untuk memasuki Kapal Bahari 701" << endl;
            continue;
        }
        else{
        	cout << "mobil dengan merk " << mobil[i].merk << " warna " << mobil[i].warna << " dengan plat nomer " << mobil[i].kodedaerah <<" "<<mobil[i].nopol<< " Dipersilahkan untuk memasuki kapal Nangroe 21" << endl;
		}
			
    }
		
        
}

