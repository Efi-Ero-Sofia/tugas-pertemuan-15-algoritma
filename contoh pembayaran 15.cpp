#include<iostream>
#include <string>
using namespace std;

int main(){
	

	
	int pilih[100],jumlah[100],sub_total[100],harga[100],total_bayar;
	string menu[100];
	int i=0;
	bool selesai=false;
cout << "##  Tugas 15 ##" << endl;
cout << "=========================================" << endl;
cout << endl;
cout << "nama          : Efi ero sofia"<< endl;
cout << "nim           : 5520122014"<< endl;
cout << endl;
cout << "=========================================" << endl;
cout << endl;
	
	cout << "*** DAFTAR MENU MAKANAN & MINUMAN ***" << endl;
    cout << "===============================================" << endl;
    cout << "1. Seblak Ceker                     Rp. 15.000" << endl;
    cout << "2. Bakso Mercon                     Rp. 50.000" << endl; 
    cout << "3. Bakso Keju.                      Rp. 25.000" << endl;
    cout << "4. Mie Ayam Bakso.                  Rp. 25.000" << endl;
    cout << "===============================================" << endl;
    cout << "5. Es Teh                           Rp. 10.000" << endl;
    cout << "6. Air Mineral                      Rp. 5.000" << endl;
    cout << "7. Nutri Sari                       Rp. 10.000" << endl;
    cout << "8. Susu Dancow                      Rp. 10.000" << endl;  
    cout << "===============================================\n" << endl; 
    cout << "Jika Sudah Selesai Memilih, Silakan Masukan 0" << endl;
    while (selesai == false) { 
        cout << "Masukan Nomor Pesanan anda : " << endl<<endl;
        cin >> pilih[i];
        if (pilih[i]<=8) {

        if (pilih[i]==0) { 
            selesai = true; 
        }
        else {
            switch (pilih[i]) {
                case 1 : menu[i] = "Seblak Ceker";harga[i] = 15000;
                break;
                case 2 : menu[i] = "Bakso Mercon";harga[i] = 50000;
                break;
                case 3 : menu[i] = "Bakso Keju";harga[i] =25000;
                break;
                case 4 : menu[i] = "Mie Ayam Bakso";harga[i] =25000;
                break;
                case 5 : menu[i] = "Es Teh";harga[i] =10000;
                break;
                case 6 : menu[i] = "Air Mineral";harga[i] =5000;
                break;
                case 7 : menu[i] = "Nutri Sari";harga[i] =50000;
                break;
                case 8 : menu[i] = "Susu Dancow";harga[i] =10000;
                break;
                default : menu[i] = " "; harga[i] = 0;

            }
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;
	

}
