#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

    int i = 1 ;
while (i * i < 10)
{
int j = i;
while (j * j < 100)
{
cout << i + j << " ";
j *= 2;
}
i++;
cout << endl;
}
cout << "\n*****\n";
system("PAUSE");
return EXIT_SUCCESS;
}

//la salida es : 2 3 5 9
//               4 6 10
//               6 9
//               *****


