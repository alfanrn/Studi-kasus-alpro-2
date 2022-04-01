#include <iostream>
using namespace std;
class lw{
	public:
		void jenis();
		void hitung();
		void jenis_pekerjaan();
		void jenis_pekerjaan2();
	private:
	int i,x,peng_kerja,pekerjaan,bulan,posisi;
	float gaji,hasil,total,bonus,total_gaji;
};
void lw::jenis(){
	cout<<"\n"<<endl;
	cout<<"   |================================================|"<<endl;
    cout<<"   ||     Lowongan          |     Gaji             ||"<<endl;
    cout<<"   |========================|=======================|"<<endl;
    cout<<"   ||   1. Express JS       |  Rp. 15 Juta/bulan   ||"<<endl;
    cout<<"   ||   2. Django Pyhton    |  Rp. 13 Juta/bulan   ||"<<endl;
    cout<<"   ||   3. Rails Ruby       |  Rp. 8 Juta/bulan    ||"<<endl;
    cout<<"   ||   4. Lavarel PHP      |  Rp. 18 Juta/bulan   ||"<<endl;
    cout<<"   ||   5. Spring Java      |  Rp. 8 Juta/bulan    ||"<<endl;
    cout<<"   ||   6. Angular JS       |  Rp. 15 Juta/bulan   ||"<<endl;
    cout<<"   |================================================|"<<endl;
    cout<<"   |Anda diperbolehkan mengambil 2 pekerjaan dengan |"<<endl;
    cout<<"   |syarat pengalaman kerja 2,5 tahun pada masing-  |"<<endl;
    cout<<"   |masing pekerjaanya.                             |"<<endl;
    cout<<"   |================================================|"<<endl;
    cout<<"   ||  1. Team Leader                              ||"<<endl;
    cout<<"   ||  2. Anggota                                  ||"<<endl;
    cout<<"   ||==============================================||"<<endl;
}
void lw::hitung(){
	cout<<"\n   Jumlah pekerjaan yang akan diambil : ";cin>>x;
	if(x==1){
		jenis_pekerjaan();
	}else if(x==2){
    for(i=0;i<x;i++){
    	jenis_pekerjaan2();
		}
		
	}
}
void lw::jenis_pekerjaan(){
	cout<<"\n Nomor pekerjaan          : ";cin>>pekerjaan;
	switch(pekerjaan){
		case 1:
			cout<<"\n Pengalaman kerja (tahun) : ";cin>>peng_kerja;
			if(peng_kerja>4){
				gaji=15*0.04;
				total=15+gaji;
				cout<<" Anda mendapatkan tambahan gaji Rp. "<<total<<" Juta"<<endl;
			}else{
				cout<<" Anda mendapatkan gaji 15 juta/bulan"<<endl;
			}
				cout<<" Berapa bulan anda mengerjakan program tersebut : ";cin>>bulan;
				cout<<" Posisi dalam tim : ";cin>>posisi;
				if(posisi==1){
				bonus=15*0.06*bulan;
				total_gaji=total+bonus;
				cout<<" Total Gaji Anda adalah Rp. "<<total_gaji<<endl;
			}else{
				cout<<" Total Gaji Anda adalah Rp. "<<total<<endl;
			}
			break;
		case 2:
			cout<<"\n Pengalaman kerja (tahun) : ";cin>>peng_kerja;
			if(peng_kerja>4){
				gaji=13*0.04;
				total=13+gaji;
				cout<<" Anda mendapatkan tambahan gaji Rp. "<<total<<" Juta"<<endl;
			}else{
				cout<<" Anda mendapatkan gaji 13 juta/bulan"<<endl;
			}			cout<<" Berapa bulan anda mengerjakan program tersebut : ";cin>>bulan;
				cout<<" Posisi dalam tim : ";cin>>posisi;
				if(posisi==1){
				bonus=13*0.06*bulan;
				total_gaji=total+bonus;
				cout<<" Total Gaji Anda adalah Rp. "<<total_gaji<<endl;
			}else{
				cout<<" Total Gaji Anda adalah Rp. "<<total<<endl;
		}
			break;
		case 3:
			cout<<"\n Pengalaman kerja (tahun) : ";cin>>peng_kerja;
			if(peng_kerja>4){
				gaji=8*0.04;
				total=15+gaji;
				cout<<" Anda mendapatkan tambahan gaji Rp. "<<total<<" Juta"<<endl;;
			}else{
				cout<<" Anda mendapatkan gaji 8 juta/bulan"<<endl;
			} 
				cout<<" Berapa bulan anda mengerjakan program tersebut : ";cin>>bulan;
				cout<<" Posisi dalam tim : ";cin>>posisi;
				if(posisi==1){
				bonus=8*0.06*bulan;
				total_gaji=total+bonus;
				cout<<" Total Gaji Anda adalah Rp. "<<total_gaji<<endl;
			}else{
				cout<<" Total Gaji Anda adalah Rp. "<<total<<endl;
			}
			break;
		case 4:
			cout<<"\n Pengalaman kerja (tahun) : ";cin>>peng_kerja;
			if(peng_kerja>4){
				gaji=18*0.04;
				total=18+gaji;
				cout<<" Anda mendapatkan tambahan gaji Rp. "<<total<<" Juta"<<endl;
			}else{
				cout<<" Anda mendapatkan gaji 18 juta/bulan"<<endl;
			}
				cout<<" Berapa bulan anda mengerjakan program tersebut : ";cin>>bulan;
				cout<<" Posisi dalam tim : ";cin>>posisi;
				if(posisi==1){
				bonus=18*0.06*bulan;
				total_gaji=total+bonus;
				cout<<" Total Gaji Anda adalah Rp. "<<total_gaji<<endl;
			}else{
				cout<<" Total Gaji Anda adalah Rp. "<<total<<endl;
			}
			break;
		case 5:
			cout<<"\n Pengalaman kerja (tahun) : ";cin>>peng_kerja;
			if(peng_kerja>4){
				gaji=8*0.04;
				total=8+gaji;
				cout<<" Anda mendapatkan tambahan gaji Rp. "<<total<<" Juta"<<endl;
			}else{
				cout<<" Anda mendapatkan gaji 8 juta/bulan"<<endl;
			}
						cout<<" Berapa bulan anda mengerjakan program tersebut : ";cin>>bulan;
				cout<<" Posisi dalam tim : ";cin>>posisi;
				if(posisi==1){
				bonus=8*0.06*bulan;
				total_gaji=total+bonus;
				cout<<" Total Gaji Anda adalah Rp. "<<total_gaji<<endl;
			}else{
				cout<<" Total Gaji Anda adalah Rp. "<<total<<endl;
			}
			break;
		case 6:
			cout<<"\n Pengalaman kerja (tahun) : ";cin>>peng_kerja;
			if(peng_kerja>4){
				gaji=15*0.04;
				total=15+gaji;
				cout<<" Anda mendapatkan tambahan gaji Rp. "<<total<<" Juta"<<endl;
			}else{
				cout<<" Anda mendapatkan gaji 18 juta/bulan"<<endl;
			}
				cout<<" Berapa bulan anda mengerjakan program tersebut : ";cin>>bulan;
				cout<<" Posisi dalam tim : ";cin>>posisi;
				if(posisi==1){
				bonus=15*0.06*bulan;
				total_gaji=total+bonus;
				cout<<" Total Gaji Anda adalah Rp. "<<total_gaji<<endl;
			}else{
				cout<<" Total Gaji Anda adalah Rp. "<<total<<endl;
			}
			break;
		default:
			cout<<" Lowongan tidak tersedia"<<endl;
			break;
	}
}
