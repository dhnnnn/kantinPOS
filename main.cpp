#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//deklarasi variabel
	
	int pilih[100],jumlah[100],sub_total[100],harga[100];
	string menu[100];
	int total_bayar;
	int i=0;
	bool selesai=false;

	
	cout<<"KANTIN SEKOLAH\n\nMENU : \n "<<endl;
    cout<<"1. Menu Makanan:"<<endl;
    cout<<"  1. Nasi Geprek  : Rp.12.000"<< endl;
    cout<<"  2. Nasi Bungkus  : Rp.10.000"<< endl;
    cout<<"  3. Nasi Goreng : Rp.12.000\n"<< endl;
    cout<<"2. Menu Minuman:"<<endl;
    cout<<"  4. Es teh/hangat  : Rp.3.000 "<<endl;
    cout<<"  5. Caramel Machiato : Rp.12.000"<<endl;
    cout<<"  6. Cappucino : Rp.7.000"<<endl;
    cout<<"  7. Jus Alpukat : Rp.11.000"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    
	cout<<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
    
    while(selesai==false){
    	
    	cout<<"Pilih Menu : ";
    	cin>>pilih[i];
    	
    	if (pilih[i]<=4){
    		
    		if (pilih[i]==0){
    			selesai=true;
			}else {
				switch (pilih[i]){
		    		case 1 : menu[i]="1 Nasi Geprek  "; harga[i]=12000; break;
		    		case 2 : menu[i]="Nasi Bungkus  "; harga[i]=10000; break;
		    		case 3 : menu[i]="Nasi Goreng "; harga[i]=12000; break;
		    		case 4 : menu[i]="Es teh/hangat    "; harga[i]=3000; break;
		    		case 5 : menu[i]="Caramel Machiato  "; harga[i]=12000; break;
                    case 6 : menu[i]="Cappucino    "; harga[i]=7000; break;
                    case 7 : menu[i]="Jus Alpukat   "; harga[i]=11000; break;
                    default : menu[i]="";harga[i]=0;
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
	cout<<"                 INVOICE Pembayaran Kantin"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	"<<menu[a]<<"	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Harga= Rp."<<total_bayar<<endl;
    float a,b;
    cout<<"Biaya = Rp.";
    cin>>a;
    b=a-total_bayar;
    cout<<"Kembalian anda = Rp."<<b<<endl;
       
return 0;
}


//inii akhir
