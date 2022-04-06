using namespace std;

class Input {
	public :
	void cetak(){
		cout<<"Aplikasi Penjualan Lesehan \n";
		cout<<"Menu yang tersedia : \n";
		cout<<"[1]. Ayam Geprek  Rp. 21000\n";
		cout<<"[2]. Ayam Goreng  Rp. 17000\n";
		cout<<"[3]. Udang Goreng Rp. 19000\n";
		cout<<"[4]. Cumi Goreng  Rp. 20000\n";
		cout<<"[5]. Ayam Bakar   Rp. 25000\n";
		cout<<"Pesan Ayam Geprek  -> ";cin>>bnyk_ayGp;
		cout<<"Pesan Ayam Goreng  -> ";cin>>bnyk_ayGr;
		cout<<"Pesan Udang Goreng -> ";cin>>bnyk_udGr;
		cout<<"Pesan Cumi Goreng  -> ";cin>>bnyk_cmGr;
		cout<<"Pesan Ayam Bakar   -> ";cin>>bnyk_ayBk;
	}
	
	void toFile(){
		tulis_data.open("api_data.txt");
		tulis_data<<bnyk_ayGp<<endl;
		tulis_data<<bnyk_ayGr<<endl;
		tulis_data<<bnyk_udGr<<endl;
		tulis_data<<bnyk_cmGr<<endl;
		tulis_data<<bnyk_ayBk;
		tulis_data.close();
	}
	private:
		ofstream tulis_data;
		int bnyk_ayGp, bnyk_ayGr, bnyk_udGr, bnyk_cmGr, bnyk_ayBk;
};
