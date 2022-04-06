using namespace std;

class Proses {
	public :
		void cetak(){
	}
	void getData(){
		ambil_data.open("api_data.txt");
		bool ayam_geprek=true;
		while(!ambil_data.eof()){
			if (ayam_geprek){
				ambil_data>>bnyk_ayGp;
				ayam_geprek=false;
			}
			else{
				ambil_data>>bnyk_ayGr;
				ambil_data>>bnyk_udGr;
				ambil_data>>bnyk_cmGr;
				ambil_data>>bnyk_ayBk;
				ambil_data>>tot_jrk;
			}
		}
		ambil_data.close();

	}
	void toFile(){
		int total = (hrg_ayGp * bnyk_ayGp)+(hrg_ayGr * bnyk_ayGr)+(hrg_udGr * bnyk_udGr)+(hrg_cmGr * bnyk_cmGr)+(hrg_ayBk * bnyk_ayBk);
		float t2 = float(total);
		int ongkos=7000;
		float diskon=t2*0.35;
		
		if(total>=180000)
			t2=t2-diskon;
		tulis_data.open("api_data.txt");
		tulis_data<<total<<endl;
		tulis_data<<ongkos<<endl;
		tulis_data<<diskon<<endl;
		tulis_data<<t2<<endl;
		tulis_data<<bnyk_ayGp<<endl;
		tulis_data<<bnyk_ayGr<<endl;
		tulis_data<<bnyk_udGr<<endl;
		tulis_data<<bnyk_cmGr<<endl;
		tulis_data<<bnyk_ayBk;
		
		tulis_data.close();
	}
	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_ayGp;
		int bnyk_ayGr;
		int bnyk_udGr;
		int bnyk_cmGr;
		int bnyk_ayBk;
		int tot_jrk;
		int hrg_ayGp=21000;
		int hrg_ayGr=17000;
		int hrg_udGr=19000;
		int hrg_cmGr=20000;
		int hrg_ayBk=25000;
};
