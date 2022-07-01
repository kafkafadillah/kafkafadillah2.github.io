#include <conio.h>
#include <iostream>
#include <time.h>
#include "color.hpp"

using namespace std;

int Size = 15;
int PosX = 10;
int PosY = 10;
string Diabetes =  "\nYOU HAVE DIABETES AND OBECITY\n\n!!know that consuming too much food containing sugar can lead to diseases like obesity, diabetes, gout etc!!" ;
string Highblood = "\nYOU HAVE HIGH BLOOD PREASURE\n\n!!know that consuming too much food containing fat can lead to diseases like high blood pressure etc!!";
string Cholesterol = "\nYOU HAVE CHOLESTEROL\n\n!!know that consuming too much food containing fat can lead to diseases like cholesterol, obecity etc!!";
string Kidneys =  "\nYOUR KIDNEYS ARE DAMAGED\n\n!!know that consuming too much food containing fat can lead to diseases like damaged kidney, dehydration etc!!";
string Faint = "\nyour body is in a state of weakness and after that you faint because you force yourself to Sport with high intensity\n!!know that Sport requires the energy so the energy you can get from foods that contain calories, sugar, protein etc.";

void info(){
	
cout<<endl;
cout<<"Candy \t\t sugar = 100  \tCalory = 50   \tFat = 20  \tProtein = 0"<<endl;
cout<<"Spinach \t sugar = 20   \tCalory = 20   \tFat = 0  \tProtein = 20"<<endl;
cout<<"Beef \t\t sugar = 0  \tCalory = 50   \tFat = 50  \tProtein = 100"<<endl;
cout<<"Indomie \t sugar = 50   \tCalory = 100   \tFat = 100  \tProtein = 50"<<endl;
cout<<"Gorengan \t sugar = 50   \tCalory = 100   \tFat = 100  \tProtein = 50"<<endl;
cout<<"Potion \t\t sugar = -20  \tCalory = -30   \tFat = -30  \tProtein = -20"<<endl;

}

void title(){
	
cout<<endl;
cout<<"__________  ________   _______    _______           __________      ____       ____    __  ____________    ____        ______  _      _"<<endl;
cout<<"||          ||     ||  ||     ||  ||     \\          ||             //  \\       || \\    ||       ||        //  \\      //         \\    //"<<endl;
cout<<"||________  ||     ||  ||     ||  ||      \\         ||________    //    \\      ||  \\   ||       ||       //    \\     ||          \\  //"<<endl;
cout<<"||          ||     ||  ||     ||  ||       ||       ||           //______\\     ||   \\  ||       ||      //______\\    \\_____       \\//"<<endl;
cout<<"||          ||     ||  ||     ||  ||       ||       ||          //        \\    ||    \\ ||       ||     //        \\         \\      ||"<<endl;
cout<<"||          ||     ||  ||     ||  ||      //        ||         //          \\   ||     \\||       ||    //          \\         ||    ||"<<endl;
cout<<"||          ||_____||  ||_____||  ||____ //         ||        //            \\  ||      \\|       ||   //            \\  _____//     ||"<<endl<<endl;
}

struct tubuh
{
	int darah;
	int kadarGula;
	int kadarProtein;
	int kadarLemak;
	int kadarKalori;

	void mati(tubuh *gameover)
	{
		int darahFrom = gameover->darah;
		gameover->darah = gameover->darah - 1;
	}
};

struct properti
{
	string nfood;
	char bentuk;
	int sugar;
	int protein;
	int calory;
	int fat;
};

int main()
{
	tubuh tubuhku[] = {
		{1, 0, 0, 0, 0}};
	
	reset:;
	
	properti food[] = {
		{"candy", 'C', 100, 0, 50, 20},
		{"spinach", 'S', 20, 20, 20, 0},
		{"beef", 'B', 0, 100, 100, 50},
		{"gorengan", 'G', 50, 50, 100, 100},
		{"indomie", 'I', 50, 50, 100, 100},
		{"potion", 'P', 20, 20, 30, 30}};

	title();
	cout << "kamu ada di y:" << PosY << ", x:" << PosX << "\n";

	char map[Size][Size] = {
		{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
		{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};

	int arrowKey = 0;
	
	

	while (true)
	{
	
	info();	
	arrow_input:;
		cout << "input arrow key: ";
		arrowKey = getch();
		system("CLS");

		if (arrowKey == 72 && PosY > 0)
		{
			if (map[PosY - 1][PosX] == '.' || map[PosY - 1][PosX] == 'B' || map[PosY - 1][PosX] == 'C' || map[PosY - 1][PosX] == 'S' || map[PosY - 1][PosX] == 'G' || map[PosY - 1][PosX] == 'I' || map[PosY - 1][PosX] == 'P')
			{
				PosY--;
			}
		}

		if (arrowKey == 75 && PosX > 0)
		{
			if (map[PosY][PosX - 1] == '.' || map[PosY][PosX - 1] == 'B' || map[PosY][PosX - 1] == 'C' || map[PosY][PosX - 1] == 'S' || map[PosY][PosX - 1] == 'G' || map[PosY][PosX - 1] == 'I' || map[PosY][PosX - 1] == 'P')
			{
				PosX--;
			}
		}

		if (arrowKey == 77 && PosX < (Size - 1))
		{
			if (map[PosY][PosX + 1] == '.' || map[PosY][PosX + 1] == 'B' || map[PosY][PosX + 1] == 'C' || map[PosY][PosX + 1] == 'S' || map[PosY][PosX + 1] == 'G' || map[PosY][PosX + 1] == 'I' || map[PosY][PosX + 1] == 'P')
			{
				PosX++;
			}
		}

		if (arrowKey == 80 && PosY < (Size - 1))
		{
			if (map[PosY + 1][PosX] == '.' || map[PosY + 1][PosX] == 'B' || map[PosY + 1][PosX] == 'C' || map[PosY + 1][PosX] == 'S' || map[PosY + 1][PosX] == 'G' || map[PosY + 1][PosX] == 'I' || map[PosY + 1][PosX] == 'P')
			{
				PosY++;
			}
		}

		int PosFoodX, PosFoodY, ProbMuncul, ProbFood;
		srand(time(NULL));
		ProbMuncul = rand() % 8;

		if (ProbMuncul < 7)
		{

			do
			{
				PosFoodX = rand() % Size;
				PosFoodY = rand() % Size;
			} while (PosFoodX == 0 || PosFoodY == 0 || PosFoodX == 14 || PosFoodY == 14);

			ProbFood = rand() % 6;

			switch (ProbFood)
			{

			case 0: // candy
				map[PosFoodX][PosFoodY] = food[0].bentuk;
				break;

			case 1: // spinach
				map[PosFoodX][PosFoodY] = food[1].bentuk;
				break;

			case 2: // beef
				map[PosFoodX][PosFoodY] = food[2].bentuk;
				break;

			case 3: // gorengan
				map[PosFoodX][PosFoodY] = food[3].bentuk;
				break;

			case 4: // indomie
				map[PosFoodX][PosFoodY] = food[4].bentuk;
				break;

			case 5: // potion
				map[PosFoodX][PosFoodY] = food[5].bentuk;
				break;
			}
		}

		
		if (tubuhku[0].darah <= 0)
	{
		cout << " YOU ARE TAKEN TO THE HOSPITAL" << endl;
		exit(1);
	}
	// kadar
		if (map[PosY][PosX] == 'B' || map[PosY][PosX] == 'S' || map[PosY][PosX] == 'C' || map[PosY][PosX] == 'G' || map[PosY][PosX] == 'I' || map[PosY][PosX] == 'P')
		{

			switch (map[PosY][PosX])
			{
			case 'C':
				cout << "You ate Candy" << endl;
				tubuhku[0].kadarGula = tubuhku[0].kadarGula + food[0].sugar;
				tubuhku[0].kadarLemak = tubuhku[0].kadarLemak + food[0].fat;
				tubuhku[0].kadarKalori = tubuhku[0].kadarKalori + food[0].calory;
				tubuhku[0].kadarProtein = tubuhku[0].kadarProtein + food[0].protein;
				break;
			case 'S':
				cout << "You ate Spinach" << endl;
				tubuhku[0].kadarGula = tubuhku[0].kadarGula + food[1].sugar;
				tubuhku[0].kadarLemak = tubuhku[0].kadarLemak + food[1].fat;
				tubuhku[0].kadarKalori = tubuhku[0].kadarKalori + food[1].calory;
				tubuhku[0].kadarProtein = tubuhku[0].kadarProtein + food[1].protein;
				break;
			case 'B':
				cout << "You ate Beef" << endl;
				tubuhku[0].kadarGula = tubuhku[0].kadarGula + food[2].sugar;
				tubuhku[0].kadarLemak = tubuhku[0].kadarLemak + food[2].fat;
				tubuhku[0].kadarKalori = tubuhku[0].kadarKalori + food[2].calory;
				tubuhku[0].kadarProtein = tubuhku[0].kadarProtein + food[2].protein;
				break;
			case 'G':
				cout << "You ate Gorengan" << endl;
				tubuhku[0].kadarGula = tubuhku[0].kadarGula + food[3].sugar;
				tubuhku[0].kadarLemak = tubuhku[0].kadarLemak + food[3].fat;
				tubuhku[0].kadarKalori = tubuhku[0].kadarKalori + food[3].calory;
				tubuhku[0].kadarProtein = tubuhku[0].kadarProtein + food[3].protein;
				break;
			case 'I':
				cout << "You ate Indomie" << endl;
				tubuhku[0].kadarGula = tubuhku[0].kadarGula + food[4].sugar;
				tubuhku[0].kadarLemak = tubuhku[0].kadarLemak + food[4].fat;
				tubuhku[0].kadarKalori = tubuhku[0].kadarKalori + food[4].calory;
				tubuhku[0].kadarProtein = tubuhku[0].kadarProtein + food[4].protein;
				break;
			case 'P':
				cout << "You ate sport potion" << endl;
				tubuhku[0].kadarGula = tubuhku[0].kadarGula - food[5].sugar;
				tubuhku[0].kadarLemak = tubuhku[0].kadarLemak - food[5].fat;
				tubuhku[0].kadarKalori = tubuhku[0].kadarKalori - food[5].calory;
				tubuhku[0].kadarProtein = tubuhku[0].kadarProtein - food[5].protein;
				break;
			default:
				break;
			}
			map[PosY][PosX] = '.';
		}

		// notif

		if (tubuhku[0].kadarGula > 400)
		{
			cout <<Diabetes<< endl
				 << endl;
		
			tubuhku[0].mati(&tubuhku[0]);
			goto reset;
		}
		else if (tubuhku[0].kadarLemak > 450)
		{
			cout <<Cholesterol<< endl
				 << endl;
			
			tubuhku[0].mati(&tubuhku[0]);
			goto reset;
		}
		else if (tubuhku[0].kadarKalori > 500)
		{
			cout <<Highblood<< endl
				 << endl;
			
			tubuhku[0].mati(&tubuhku[0]);
			goto reset;
		}
		else if (tubuhku[0].kadarProtein > 600)
		{
			cout <<Kidneys<< endl
				 << endl;
			
			tubuhku[0].mati(&tubuhku[0]);
			goto reset;
		}

		// potion

		else if (tubuhku[0].kadarKalori < 0)
		{
			cout <<Faint<< endl;
			
			tubuhku[0].mati(&tubuhku[0]);
			goto reset;
		}

		else if (tubuhku[0].kadarGula < 0)
		{
			cout <<Faint<< endl;
			tubuhku[0].mati(&tubuhku[0]);
			goto reset;
		}

		else if (tubuhku[0].kadarProtein < 0)
		{
			cout <<Faint<< endl;
			tubuhku[0].mati(&tubuhku[0]);
			goto reset;
		}

		else if (tubuhku[0].kadarLemak < 0)
		{
			cout <<Faint<< endl;
			tubuhku[0].mati(&tubuhku[0]);
			goto reset;
		}

		cout << endl
			 << "Kadar Gula dalam tubuh \t\t: " << tubuhku[0].kadarGula << endl;
		cout << "Kadar Protein dalam tubuh \t: " << tubuhku[0].kadarProtein << endl;
		cout << "Kadar Lemak dalam tubuh \t: " << tubuhku[0].kadarLemak << endl;
		cout << "Kadar Kalori dalam tubuh \t: " << tubuhku[0].kadarKalori << endl
			 << endl;
			 
		
			 
		//print map

		for (int y = 0; y < Size; y++)
		{
			for (int x = 0; x < Size; x++)
			{
				if (y == PosY && x == PosX)
				{
					cout << "@"
						 << " ";
				}
				else if (map[y][x]=='#'){
					cout<<dye::yellow("#")<<" ";
				}
				else if (map[y][x]=='P'){
					cout<<dye::blue("P")<<" ";
				}
				else if (map[y][x]=='B'){
					cout<<dye::red("B")<<" ";
				}
				else if (map[y][x]=='S'){
					cout<<dye::green("S")<<" ";
				}
				else if (map[y][x]=='C'){
					cout<<dye::aqua("C")<<" ";
				}
				else if (map[y][x]=='G'){
					cout<<dye::yellow("G")<<" ";
				}
				else if (map[y][x]=='I'){
					cout<<dye::purple("I")<<" ";
				}
				else if (map[y][x]=='.'){
					cout<<dye::light_green(".")<<" ";
				}
				else
				{
					cout << map[y][x] << " ";
				}
				
			}
			cout << endl;
		}
	}
	return 0;
}

/*
Nama : Khafka Fadillah W N
NIM  : 1217050072*/
