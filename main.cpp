#include <iostream>

int main(){

int N;              //numeros de letra na palavra
int teclas[50];     //tecla da letra desejada 
int apertos[50];    //quantidade de apertos até a letra 
char hashtag;       //recebe #
char igual;         //recebe =
//Fazendo a matriz do alfabeto
char alfabeto[8][4]= {{'A' ,'B', 'C'} ,      
                      {'D' ,'E' ,'F'},
                      {'G' ,'H' ,'I'},
                      {'J' ,'K' ,'L'},
                      {'M' ,'N' ,'O'}, 
                      {'P' ,'Q' ,'R','S'},
                      {'T' ,'U' ,'V'},
                      {'W' ,'X' ,'Y', 'Z'}};

std:: cout<<"Olá, vamos descobrir a palavra? Digite a quantidade de letra da palavra no maximo 50. \n "; 
std:: cin>>N; 

std:: cout<<"Digite os seguites dados, '#' + 'número da tecla' + 'número de apertos'. Exemplo #9=2 \n ";

for (int cont=0;cont<N;cont++){ 
      
   std:: cin >> hashtag;
   std:: cin >> teclas[cont];
   std:: cin >> igual;
   std:: cin >> apertos[cont];

std::cout << "\n A letra é: \n";
for(int j=0;j<N;j++){ 

    std:: cout << alfabeto[teclas[j]][apertos[j]];         
  }
}


}