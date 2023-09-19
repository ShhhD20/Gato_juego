#include <iostream>
#include <string>

int main() {
	std::string text = "1\t  |  |  \n\t--------\n2\t  |  |  \n\t--------\n3\t  |  |   \n\ta  b  c";
	int juego = 0;
	char resX;
	int numX = 0;
	int resY;
	int permiso = 1;
	
	int hist = 0;
	int reg1, reg2, reg3, reg4, reg5, reg6, reg7, reg8;
	int alp1, alp2, alp3, alp4, alp5, alp6, alp7, alp8;
	char let1, let2, let3, let4, let5, let6, let7, let8;
    
	int cont;
    /*
    int startIndex = 6; // Index of the first character to delete
    int numCharsToDelete = 5; // Number of characters to delete

    for (int i = startIndex; i < startIndex + numCharsToDelete; ++i) {
        if (i < text.length()) {
            text[6] = 'o'; // Overwrite character with a space
        }
    } //*/
	std::cout << "\n" << std::endl;
	std::cout << text << "\n" << std::endl;
    
	while(juego == 0){
		if(juego == 0){ //Turno jugador 1
		hist ++;
			do{ 
		    	do{
					std::cout << "Coordenada 'x' de jugador 1: ";
					std::cin >> resX;
					if(!(resX == 'a' || resX == 'b' || resX == 'c')) std::cout << "Valor ingresado desconocido!! Intente de nuevo." << std::endl;
				}while(!(resX == 'a' || resX == 'b' || resX == 'c'));
				do{
					std::cout << "Coordenada 'y' de jugador 1: ";
					std::cin >> resY;
					if(resY <= 0 || resY >= 4) std::cout << "Valor ingresado desconocido!! Intente de nuevo." << std::endl;
				}while(resY <= 0 || resY >= 4);
				if ((reg1 == resY && let1 == resX) || (reg2 == resY && let2 == resX) || (reg3 == resY && let3 == resX) || (reg4 == resY && let4 == resX)) {
					std::cout << "Coordenada ya ocupada";
					permiso = 0;
				}
				else if ((reg5 == resY && let5 == resX) || (reg6 == resY && let6 == resX) || (reg7 == resY && let7 == resX) || (reg8 == resY && let8 == resX)){
					std::cout << "Coordenada ya ocupada";
					permiso = 0;
				}
				else{
					permiso = 1;
				}
			} while(permiso == 0);
			if(resX == 'a') numX = 2;
			if(resX == 'b') numX = 5;
			if(resX == 'c') numX = 8;
			std::cout << "Coordenada ingresada: " << resX << resY << std::endl;
			
			cont = numX; 
			for(int a = 1; a < resY; a++){
				cont += 21;
			}
	    	for (int b = 1; b <= cont; b++){
				if (b < text.length() && b == cont){
					text[b] = 'x';
				}
			}
			switch(hist){
				case 1:
					reg1 = resY;
					let1 = resX;
					break;
				case 3:
					reg3 = resY;
					let3 = resX;
					break;
				case 5:
					reg5 = resY;
					let5 = resX;
					break;
				case 7:
					reg7 = resY;
					let7 = resX;
					break;
			}
		} //Fin de turno de jugador 1
		std::cout << "\n" << text << std::endl; //progreso del juego
		/*
		if(let1 == 'a' && let3 == 'a') int let1_3 = 1;
		if(hist < 5){
		
			if((let1 == 'a' && let3 == 'a' && let5 == 'a') || (let1 == 'a' && let3 == 'a' && let7 == 'a'))
		
		} //*/
		
		if(juego == 0){ //Turno jugador 2
		hist ++;
			do{
		    	do{
					std::cout << "Coordenada 'x' de jugador 2: ";
					std::cin >> resX;
					if(!(resX == 'a' || resX == 'b' || resX == 'c')) std::cout << "Valor ingresado desconocido!! Intente de nuevo." << std::endl;
				}while(!(resX == 'a' || resX == 'b' || resX == 'c'));
				do{
					std::cout << "Coordenada 'y' de jugador 2: ";
					std::cin >> resY;
					if(resY <= 0 || resY >= 4) std::cout << "Valor ingresado desconocido!! Intente de nuevo." << std::endl;
				}while(resY <= 0 || resY >= 4);
				if ((reg1 == resY && let1 == resX) || (reg2 == resY && let2 == resX) || (reg3 == resY && let3 == resX) || (reg4 == resY && let4 == resX)) {
					std::cout << "Coordenada ya ocupada";
					permiso = 0;
				}
				else if ((reg5 == resY && let5 == resX) || (reg6 == resY && let6 == resX) || (reg7 == resY && let7 == resX) || (reg8 == resY && let8 == resX)){
					std::cout << "Coordenada ya ocupada\n\n";
					permiso = 0;
				}
				else{
					permiso = 1;
				}
			}while(permiso == 0);
			if(resX == 'a') numX = 2;
			if(resX == 'b') numX = 5;
			if(resX == 'c') numX = 8;
			std::cout << "Coordenada ingresada: " << resX << resY << std::endl;
		
			cont = numX;
			for(int a = 1; a < resY; a++){
				cont += 21;
			}
	    	for (int b = 1; b <= cont; b++){
				if (b < text.length() && b == cont){
					text[b] = 'o';
				}
			}
			switch(hist){
				case 2:
					reg2 = resY;
					let2 = resX;
					break;
				case 4:
					reg4 = resY;
					let4 = resX;
					break;
				case 6:
					reg6 = resY;
					let6 = resX;
					break;
				case 8:
					reg8 = resY;
					let8 = resX;
					break;
			}
		} //Fin de turno de jugador 2
		std::cout << "\n" << text << std::endl; //progreso del juego
		permiso = 1;
	}
	
	return 0;
}
