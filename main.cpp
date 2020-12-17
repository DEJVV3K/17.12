#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

void load() {
	ifstream ciag;
	ofstream wynik;
	int d;
	bool first = true;
	int num,numl,num1,diff,diff1,diff2 = 0;
	string a;
	
	ciag.open("ciagi.txt");
	wynik.open("wynik1.txt");
	while(ciag.good()){
		bool aciag = true;
		if(!ciag.eof()) {			
			ciag >> num;
			numl = num;
			
			for(int i = 0;i < numl;i++) {
			 	ciag > >num;
			 	
			 	if(first == false) {
			 	difffabs(num1-num);
			 	}
			 	
			 	if(diff!=diff1 && i > 2) {
				aciag = false;
				
				}
				num1 = num;
				first = false;
				diff1 = diff;
			}
			
			if(abs(diff1) > diff2){
				diff2 = diff;
			}
		}
	}
	wynik << diff << endl << d;
	
	ciag.close();
	wynik.close();
}


int main() {
	load();
	return 0;
}
