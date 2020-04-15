#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
using namespace std;

int main()
{
	ifstream plik1;
	ofstream plik2;

	int tab[1000];
	int x=0;

	plik1.open("zad.txt");

	if(plik1.good())
    while(!plik1.eof())
	{	
        plik1>>tab[x];
        x++;
    }
    plik1.close();

    plik2.open("zad2.txt");

	for(int i=x-1; i>=0; i--)
    plik2<<tab[i];
	plik2.close();

}



	return 0;
}
