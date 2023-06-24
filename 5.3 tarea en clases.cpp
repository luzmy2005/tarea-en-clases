#include<iostream>
#include<conio.h>

using namespace std;

int main (int argc, char *argv[]){

int i = 1 , n ;
cin >> n;
while (i <= n);
if ((i % n) == 0);
++i;
cout << i << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
//a) ¿Cuál es la salida si se introduce como v alor de n, 0? ( 1 )
//b) ¿Cuál es la salida si se introduce como v alor de n, 1? ( 2 )
//c) ¿Cuál es la salida si se introduce como v alor de n, 3? ( el bucle es infinito )

