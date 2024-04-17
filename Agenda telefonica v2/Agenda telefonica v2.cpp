// Agenda telefonica v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Teme Struct : Agenda Telefonică
//Scop:
//  Creează o structură pentru a stoca informații despre contactele dintr - o agendă 
// telefonică.Apoi, scrie un program care permite utilizatorului să adauge noi contacte 
// și să le afișeze.
//Permite utilizatorului să introducă date pentru 3 contacte diferite.
//Afișează toate contactele la final.


/*▄▄▄      ██▓   ▓█████▒██   ██▒
▒██  ▀█▄ ▒██░   ▒███  ░░  █   ░
░██▄▄▄▄██▒██░   ▒▓█  ▄ ░ █ █ ▒
▓█   ▓██░██████░▒████▒██▒ ▒██▒
▒▒   ▓▒█░ ▒░▓  ░░ ▒░ ▒▒ ░ ░▓ ░
▒   ▒▒ ░ ░ ▒  ░░ ░  ░░   ░▒ ░
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

//Constante de preprocesor - Cod de control ANSI pentru modificarea culorilor in terminal
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

using namespace std;

struct agenda {
	std::string nume;
	std::string prenume;
	std::string nr_tel;
};

struct criteriu {
	int nr;
	agenda agenda_in;
};


int main(){
	char row = 205, col = 179, cornerL = 198, cornerR = 181, midd = 197, cornerLU = 218;
	char cornerRU = 188, middU = 193, cornerRR = 191, cornerLL = 218, middleSingle = 194; //ascii codes
	criteriu P[10], t;
	int j, i, nr = 0;
    for (int x = 0; x < 15; x++) {
        std::cout << " ";
    }
	std::cout << GREEN << "Agenda telefonica\n\n\n" << RESET;
	std::cout << "Cate persoane doriti sa introduceti : ";
	std::cin >> nr;
    std::cout << "\n\n";
	for (i = 0; i < nr; i++) {
		
		P[i].nr = nr;
		std::cout << BLUE << "Numele : ";
        cin >> P[i].agenda_in.nume;
        std::cout << RESET;
		std::cout << GREEN <<"Prenume : ";
		cin >> P[i].agenda_in.prenume;
        std::cout << RESET;
	    std::cout << CYAN<<"Nr. telefon : ";
	    cin>> P[i].agenda_in.nr_tel;
        std::cout << RESET;
        std::cout << "\n\n";
	}

    if (nr != 0) {
        system("CLS");
        for (int i = 0; i < 20; i++) {
            std::cout << " ";
            if (i == 18) { std::cout << GREEN << "Agenda\n" << RESET; }
            else if (i == 19) {
                for (int f = 0; f < 45; f++) {
                    std::cout << row;
                }
            }
        }

        std::cout << "\n";
        for (int i = 0; i < 10; i++) {
            if (i == 0) {
                std::cout << cornerLL;
            }
            if (i == 2) {
                for (int i = 0; i < 2; i++) {
                    std::cout << row;
                }
            }
            if (i == 3) {
                std::cout << middleSingle;
            }
            if (i == 4) {
                for (int i = 0; i < 13; i++) {
                    std::cout << row;
                }
            }
            if (i == 5) {
                std::cout << middleSingle;
            }
            if (i == 6) {
                for (int i = 0; i < 13; i++) {
                    std::cout << row;
                }
            }
            if (i == 7) {
                std::cout << middleSingle;
            }
            if (i == 8) {
                for (int i = 0; i < 13; i++) {
                    std::cout << row;
                }
            }
            if (i == 9) {
                std::cout << cornerRR << std::endl;
            }
        }

        int crt = 0;
        for (i = 0; i < nr; i++) {
            std::string nume, prenume, nr_telefon;
            crt += 1;
            nume = P[i].agenda_in.nume;
            prenume = P[i].agenda_in.prenume;
            nr_telefon = P[i].agenda_in.nr_tel;
            // Dimensionam spatiul
            int dimeniune_nume = nume.size();
            int dimeniune_prenume = prenume.size();
            int dimeniune_telefon = nr_telefon.size();
            std::cout << col;
            for (int i = 0; i < 6; i++) {
                if (i == 0) {
                    if (crt <= 9) { 
                        std::cout << " ";
                        std::cout << YELLOW << crt << RESET;
                    } else std::cout << YELLOW << crt << RESET;
                    

                    std::cout << col;
                }
                if (i == 3) {
                    std::cout << BLUE << nume << RESET;
                    for (int i = 0; i < 13 - dimeniune_nume; i++) {
                        std::cout << " ";
                    }
                    std::cout << col;
                }
                if (i == 4) {
                    std::cout << GREEN << prenume << RESET;
                    for (int i = 0; i < 13 - dimeniune_prenume; i++) {
                        std::cout << " ";
                    }
                    std::cout << col;
                }
                if (i == 5) {
                    std::cout << CYAN << nr_telefon << RESET;
                    for (int i = 0; i < 13 - dimeniune_telefon; i++) {
                        std::cout << " ";
                    }
                    std::cout << col << std::endl;

                    // Inchidem tabelul
                    for (int i = 0; i < 10; i++) {
                        if (i == 0) {
                            std::cout << cornerL;
                        }
                        if (i == 2) {
                            for (int i = 0; i < 2; i++) {
                                std::cout << row;
                            }
                        }
                        if (i == 3) {
                            std::cout << midd;
                        }
                        if (i == 4) {
                            for (int i = 0; i < 13; i++) {
                                std::cout << row;
                            }
                        }
                        if (i == 5) {
                            std::cout << midd;
                        }
                        if (i == 6) {
                            for (int i = 0; i < 13; i++) {
                                std::cout << row;
                            }
                        }
                        if (i == 7) {
                            std::cout << midd;
                        }
                        if (i == 8) {
                            for (int i = 0; i < 13; i++) {
                                std::cout << row;
                            }
                        }
                        if (i == 9) {
                            std::cout << cornerR << std::endl;
                        }
                    }
                }
            }
        } 
    }
    std::cout << "\n\n\n";
    for (int c = 0; c < 18; c++) {
        std::cout << " ";
        if (c == 17) {
            std::cout << GREEN << "Va multumesc" << RESET << "\n\n\n\n\n\n\n";
        }
       
    }
}
	

