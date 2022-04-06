using namespace std;

class Output {
	public :
	void cetak(){
		cout<<"STRUK PEMBELIAN KELOMPOK LESEHAN\n";
		cout<<"Yang dibeli : \n";
		cout<<"  1. Ayam Geprek  -> "<<data_file[4]<<endl;
		cout<<"  2. Ayam Goreng  -> "<<data_file[5]<<endl;
		cout<<"  3. Udang Goreng -> "<<data_file[6]<<endl;
		cout<<"  4. Cumi Goreng  -> "<<data_file[7]<<endl;
		cout<<"  5. Ayam Bakar   -> "<<data_file[8]<<endl;
		cout<<"------------------------------------------\n";
		cout<<"Harga Total   Rp. "<<data_file[0]<<endl;
		cout<<"Ongkir diskon Rp. "<<data_file[1]<<endl;
		cout<<"Diskon total  Rp. "<<data_file[2]<<endl;
		cout<<"Harga Akhir   Rp. "<<data_file[3]<<endl;
	}
	
	void getData(){
		ambil_data.open("api_data.txt");
		while(!ambil_data.eof()){
			ambil_data>>data_file[index];
			index +=1;
		}
		ambil_data.close();
	}
	
	private :
		ifstream ambil_data;
		string data_file[30];
		int index=0;
};
