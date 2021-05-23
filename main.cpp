#include <iostream>
using namespace std;
#include <cstring>

int funcao (char*, char, char, char*);

int main() {
  int  num = 0;
  char palavra[70];
  char palavratrocada[70];
  char palaatual;
  char palatrocada;

 cout << "Digite a palavra a ser codificada" << endl;
 cin.getline(palavra, 70);

 cout << "Digite uma letra que será substituida" << endl;cin >> palaatual;
 fflush (stdin);

 cout << "Digite a letra para substituir a outra" << endl;cin >> palatrocada;
 fflush (stdin);

 num = funcao(palavra, palaatual, palatrocada, palavratrocada);

 cout << palavratrocada;
 cout << endl;
 cout << palavra;
 cout << endl;
 cout << num;
 cout << endl;

}
int funcao (char *palavraAnt, char letraAtual, char letraSubs, char *palavraNova){
int contador=0;
int i=0;
for (; i < strlen(palavraAnt); i++){
if (palavraAnt[i] == letraAtual){
  palavraNova[i] = letraSubs;
  contador++;
}
else palavraNova[i] = palavraAnt[i];

}
return contador;
}