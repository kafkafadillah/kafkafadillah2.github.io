
#include <conio.h>
#include <iostream>

using namespace std;


int main (){
	
	int mapsize = 15;
	int xposition = 0;
	int yposition = 1;
	
	cout<<"karakter ada di y : "<<yposition<<", X : "<<xposition<< "\n";
	
	char map[mapsize][mapsize] = {	
		{ 'R','!','!','!','!','!','!','!','!','!','!','!','!','!','!' }, //1
		{ 'R','R','R','R','R','R','R','R','R','R','R','R','R','R','R' }, //2
		{ 'R','!','!','!','R','!','!','!','!','R','!','!','R','!','!' }, //3
		{ 'R','R','!','R','R','!','R','R','R','R','R','R','R','R','R' }, //4
		{ '!','!','!','!','R','!','!','!','!','!','!','!','!','!','R' }, //5
		{ '!','R','R','R','!','R','R','R','R','R','R','R','R','R','R' }, //6
		{ '!','R','!','!','!','!','!','!','!','!','R','!','!','!','!' }, //7
		{ 'R','R','R','R','R','R','R','R','R','R','R','!','R','R','R' }, //8
		{ 'R','!','!','!','!','!','!','R','!','!','!','!','!','R','!' }, //9
		{ 'R','!','R','R','R','R','R','R','R','R','R','R','R','R','R' }, //10
		{ 'R','R','!','!','!','!','!','!','!','!','!','!','!','!','R' }, //11
		{ '!','R','R','R','R','R','R','R','R','R','R','R','R','R','R' }, //12
		{ '!','!','!','!','!','R','!','!','!','!','!','!','!','!','!' }, //13
		{ 'R','R','R','R','R','R','R','R','R','R','R','R','R','R','R' }, //14
		{ '!','!','!','!','!','!','!','!','!','!','!','!','!','!','F' }, //15
		
	};
	
	int arrowkey = 0;
	
	while (true){
		
		arrow_input:
        cout << "Masukkan arrow key: ";
        arrowkey = getch();
        if (arrowkey == 72) {
            cout << "Up\n";
        } else if (arrowkey == 75) {
            cout << "Left\n";
        } else if (arrowkey == 77) {
            cout << "Right\n";
        } else if (arrowkey == 80) {
            cout << "Down\n";
        } else {
            goto arrow_input;
        }
	
			
		 // Aturan menggerakkan karakter ke atas
        if(arrowkey == 72 && (map[yposition-1][xposition] == 'R') && yposition >= 0) {
            // Gerakkan karakter ke atas
            yposition = yposition-1;
        }
        
        
        // Aturan menggerakkan karakter ke bawah
        if(arrowkey == 80 && (map[yposition+1][xposition] == 'R') && yposition < mapsize) {
            // Gerakkan karakter ke atas
            yposition = yposition+1;
        }
        
        // Aturan menggerakkan karakter ke kiri
        if(arrowkey == 75 && (map[yposition][xposition-1] == 'R') && xposition >= 0) {
            // Gerakkan karakter ke atas
            xposition = xposition-1;
        }
        
        // Aturan menggerakkan karakter ke kanan
        if(arrowkey == 77 && (map[yposition][xposition+1] == 'R') && xposition < mapsize) {
            // Gerakkan karakter ke atas
            xposition = xposition+1;
        }
        
        if (arrowkey == 80 && (map[yposition+1][xposition] == 'F') && yposition < mapsize){
        	yposition = yposition+1;
			cout<<"finish";
			cout<<" "<<endl;
			cout<<" "<<endl;
 bhhb			
		}
		
		for(int y=0; y<mapsize; y++) {
            for(int x=0; x<mapsize; x++) {
                
                if(xposition == x && yposition == y) {
                    cout << "O" << " ";
                } else {
                    cout << map[y][x] << " ";
                }
            }
            cout << "\n";
        }
	}

	return 0;
}
