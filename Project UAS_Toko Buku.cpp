#include<iostream>
using namespace std;

struct data_buku{
    string buku[8] =
    {
        "Teori Multiverse",
        "Algoritma dan Pemrograman",
        "Atomi Habits",
        "Lusi Lindri",
        "Home Sweet Loan",
        "Spy x Famiily",
        "Where The Crawdads Sing",
        "Laut Bercerita"
    };
    int harga[8] =
    {79000,120000,81000,98800,71250,33750,87500,75000};
};

void list_buku(){
    cout<<"============================================\n";
    cout<<"|              Toko Buku Baru              |\n";
    cout<<"--------------------------------------------\n";
    cout<<"|                 List Buku                |\n";
    cout<<"--------------------------------------------\n";
    cout<<"|           Judul            |    Harga    |\n";
    cout<<"--------------------------------------------\n";
    cout<<"|1. Teori Multiverse         |    79.000   |\n";
    cout<<"|2. Algoritma dan Pemrograman|   120.000   |\n";
    cout<<"|3. Atomi Habits             |    81.000   |\n";
    cout<<"|4. Lusi Lindri              |    98.800   |\n";
    cout<<"|5. Home Sweet Loan          |    71.250   |\n";
    cout<<"|6. Spy x Famiily            |    33.750   |\n";
    cout<<"|7. Where The Crawdads Sing  |    87.500   |\n";
    cout<<"|8. Laut Bercerita           |    75.000   |\n";
    cout<<"============================================\n";
}

void akhir1(){
    cout<<"============================================\n";
    cout<<"|              Toko Buku Baru              |\n";
    cout<<"--------------------------------------------\n";
    cout<<"|             Buku yang dibeli             |\n";
    cout<<"--------------------------------------------\n";
    cout<<"|           Judul            |    Harga    |\n";
    cout<<"--------------------------------------------\n";
}

void akhir2(string judul="0", int harga=0){
    cout<<"|"<<judul<<"|    "<<harga<<"  |\n";

}

void akhir3(int totalnya){
    cout<<"--------------------------------------------\n";
    cout<<"|                          Total harga     |\n";
    cout<<"--------------------------------------------\n";
    cout<<"|                          Rp."<<totalnya<<",-     |\n";
    cout<<"--------------------------------------------\n";
    cout<<"|                 Terima Kasih             |\n";
    cout<<"============================================\n";
}


int main(){
    int jumlah,total;
    int* inter;
    char ganti;
    data_buku datanya_buku;
    list_buku();
    cout<<"Masukan jumlah buku yang ingin di beli: ";
    cin>>jumlah;
    int pilihan[jumlah];
    for(int i=0;i<jumlah;i++){
        cout<<"Pilih buku yang ingin dibeli (1-8): ";
        cin>>pilihan[i];
         inter = &pilihan[i];
         cout<<"Apakah buku yang anda masukan benar(Y/N): ";
         cin>>ganti;
         if(ganti=='n'||ganti=='N'){
             cout<<"Pilih buku pengganti (1-8): ";
             cin>>pilihan[i];
             *inter=pilihan[i];
             pilihan[i]=pilihan[i];
         } else if(ganti=='y'||ganti=='Y'){
             pilihan[i]=pilihan[i];
         }
        total = total + datanya_buku.harga[pilihan[i]-1];
    }
    akhir1();
     for(int j=0;j<jumlah;j++){
         string judul=datanya_buku.buku[pilihan[j]-1];
         int harga=datanya_buku.harga[pilihan[j]-1];
         akhir2(judul, harga);
     }
     int totalnya=total;
     akhir3(totalnya);

    return 0;
}
