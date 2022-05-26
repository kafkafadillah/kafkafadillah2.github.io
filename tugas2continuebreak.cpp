#include <iostream>

using namespace std;

struct rincian_tes{
	string nama;
	int psikotes;
	int skd;
	int jasmani;
	int pantukhir;
};

int main ()
{
	
rincian_tes rincian[]={
	{
		"Juned",
		180,
		170,
		200,
		180,
	},
	
	{
		"Maisaroh",
		160,
		190,
		150,
		170,
	},
	
	{
		"Asep",
		170,
		180,
		175,
		190,
	},
	{
		"Markonah",
		180,
		180,
		165,
		170,
	},
	{
		"Dadang",
		170,
		190,
		185,
		165,	
	},
	{
		"Dodi",
		180,
		170,
		175,
		150,
	}
};
	
	int casissizeof = sizeof(rincian)/sizeof(rincian[0]);
	int nilaiambang = 170;
	
	for (int i=0; i<casissizeof; i++){
		
		if (rincian[i].pantukhir<nilaiambang){
			cout<<"========================================"<<endl;
			
			cout<<"Maaf Saudara "<<rincian[i].nama<<" dengan nilai pantukhir "<<rincian[i].pantukhir<<" dinyatakan TIDAK LULUS"<<endl;
			cout<<"Berikut Rincian Nilai Yang diraih :"<<endl;
			cout<<"Nama     : "<<rincian[i].nama<<endl;
			cout<<"Psikotes : "<<rincian[i].psikotes<<endl;
			cout<<"SKD      : "<<rincian[i].skd<<endl;
			cout<<"Jasmani  : "<<rincian[i].jasmani<<endl;
			cout<<"Pantukhir: "<<rincian[i].pantukhir<<endl;
			
			break;
		}
		    cout<<"========================================"<<endl;
			
			cout<<"Selamat Saudara "<<rincian[i].nama<<" dengan nilai pantukhir "<<rincian[i].pantukhir<<" dinyatakan LULUS"<<endl;
			cout<<"Berikut Rincian Nilai Yang diraih :"<<endl;
			cout<<"Nama     : "<<rincian[i].nama<<endl;
			cout<<"Psikotes : "<<rincian[i].psikotes<<endl;
			cout<<"SKD      : "<<rincian[i].skd<<endl;
			cout<<"Jasmani  : "<<rincian[i].jasmani<<endl;
			cout<<"Pantukhir: "<<rincian[i].pantukhir<<endl;
		
	}
	
	
}
