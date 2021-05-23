#include <iostream>
using namespace std;
#include <cstring>

int funcao (char*, char, char, char*);

int main() {
  int num=0;
  char palavra[70];
  char palavratrocada;
  char palaatual;
  char palatrocada;

 cout << "Digite a palavra a ser codificada" << endl;
 cin.getline(palavra, 70);

 cout << "Digite uma letra que será substituida" << endl;cin >> palaatual;
 fflush (stdin);

 cout << "Digite a letra para substituir a outra" << endl;cin >> palatrocada;
 fflush (stdin);

 

}