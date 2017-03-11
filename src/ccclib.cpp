/*
	Copyright 2017 CCC

   	Licensed under the Apache License, Version 2.0 (the "License");
   	you may not use this file except in compliance with the License.
   	You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

   	Unless required by applicable law or agreed to in writing, software
   	distributed under the License is distributed on an "AS IS" BASIS,
   	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   	See the License for the specific language governing permissions and
   	limitations under the License.
*/

#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <string.h>
#include <math.h>
#define G 9.8

using namespace std;

int MCD (int m, int n){
	int r;
	do{
		r=m%n;
		if(r!=0){
		m=n;
		n=r;
		}
	}while(r!=0);
	cout<<"comune divisore: "<<n<<endl;
	return n;
}

void scam (int &x, int &y){
	int nc;
	nc=x;
	x=y;
	y=nc;
}

int leggi_val (int min, int max){
	int n;
	do{
		cout<<"Inserisci il primo valore compreso tra "<<min<<" e "<<max<<": ";
		cin>>n;
		if(n<min || n>max) cout<<"Valore non valido\nIl valore deve essere compreso tra "<<min<<" e "<<max<<": "<<endl;
	}while(n<min || n>max);
	system("cls");
	return n;
}

void cornice (int num){
	for(int i=0;i<10;i++) cout<<"=";
	cout<<"\n||  "<<num<<"  ||"<<endl;
	for(int i=0;i<10;i++) cout<<"=";
	cout<<endl<<endl;
}

void vai_piano(char stringa[], int vel){
	for(int i=0; i<strlen(stringa); i++){
		cout<<stringa[i];
		_sleep(vel);
	}
	cout<<endl;
}

void semplific (int &num1, int &num2){
	int num3;
	num3=num1;
	num1/=MCD(num1, num2);
	num2/=MCD(num3, num2);
}

int mcm(int num1, int num2){
	if (num1 < num2) scam (num1, num2);
	if ( (num1 % num2) == 0) return num1;
	int n=num1*num2;
	return n;
}

int nprimo(int n){
	for(int i=2; i<n; i++) if((n%i)==0) return true;
	return false;
}

float posci(float p){
	return pow((p/6.2832)*g);
}

void diffeanmegio(int &GG,int &MM,int &AAAA,int diff){
	int mesflow,annflow;
	GG+=diff;
	if(GG>30){
		mesflow=(int)GG/30;
		MM+=mesflow;
		GG-=(mesflow*30);
		if(GG>360){
			annflow=(int)AAAA/360;
			AAAA+=annflow;
		}
		while(MM>12){
			mesflow=(int)MM/12;
			MM=mesflow;
			++AAAA;
			mesflow-=12;
		}
	}
}

int piu_gra(int x){
	int y,ygra=0;
	for(int i=0;i<x;i++){
		cout<<"Inserire il numero: "; cin>>y;
		if(y>ygra) ygra=y;
		system("cls");
	}
	return ygra;
}

int addizzionale(int x){
	int som;
	for(int i=1;i<=x;i++) som+=i;
	return som;
}


void mak_stam(int &x, int &y, int &z){
	x=255-x;
	y=255-y;
	z=255-z;
}

void abs(int &n){
	n*=(-1);
}

float distanzapun(float x1,float x2,float y1,float y2){
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int giocomate (int n) {
	int cont=0;
	while (n>1) {
		if (!n%2) n/=2;
		else n=(n*3)+1;
		cont++;
	}
	return cont;	
}

float leggi_val_flo (int min, int max){
	float n;
	do{
		cout<<"Inserisci il primo valore compreso tra "<<min<<" e "<<max<<": ";
		cin>>n;
		if(n<min || n>max) cout<<"Valore non valido\nIl valore deve essere compreso tra "<<min<<" e "<<max<<": "<<endl;
	}while(n<min || n>max);
	system("cls");
	return n;
}

bool suffi(float n){
	if(n<6) return false;
	else return true;
}
