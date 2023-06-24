#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int n = 5, m = 3;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
cout << " *";
cout << endl;
}
cout << endl;
for (int i = n; i > 0; i--)
{
for (int j = m; j > 0; j--)
cout << " * ";
cout << endl;
}
system("PAUSE");
return EXIT_SUCCESS;
}



//a) los dos bucles anidados escriben un triángulo rectángulo de asteriscos
//b) se escribe un rectángulo de asteriscos que tiene seis filas y tres columnas de asterisco



 