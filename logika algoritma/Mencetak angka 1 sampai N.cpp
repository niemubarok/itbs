#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n,i ;
	
	i=1;
	cout << "Berapa banyak bilangan ? " ; cin >>n;
	
	do{
	    cout<< i <<endl;
	    i++;
	} while( i <= n);
}