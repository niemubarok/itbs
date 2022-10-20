#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n,x,i,jumlah;
	double rerata;
	jumlah =0;
	i=1;
	
	cout << "Berapa banyak bilangan ? " ; cin >>n;
	
	do{
	    cout<< "Data ke- " << i <<"=";
	     cin>> x;
	    jumlah = jumlah + x;
	    i++;
	} while( i <= n);
	
	rerata = jumlah / n;
	cout << rerata; 
}