//Klemp Le�n Ra�l 2AV4
#include<iostream>

using namespace std;
int Max(int a, int b);

main(){
  int N1,N2,N3;
  cout<<"Introduzca el valor del primer numero: ";cin>>N1;
  cout<<"Introduzca el valor del segundo numero: ";cin>>N2;
  cout<<"Introduzca el valor del tercer numero: ";cin>>N3;
  int max=Max(Max(N1,N2),N3);
  cout<<"El mayor es: "<<max;
  return 0;
}

int Max(int a, int b){
  int c;
  if(a>b){return a;}
  else{return b;}
 }
