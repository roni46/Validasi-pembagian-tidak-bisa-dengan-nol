#include<iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
	int a,b,hasil;

	cout<<"PROGRAM VALIDASI PEMBAGIAN TIDAK SAMA DENGAN NOL"<<endl;
	cout<<"masukan bilangan yang akan di bagi : ";
	cin>>a;
	cout<<"masukan bilangan pembagi : ";
	cin>>b;
	if(b==0)
	{
		cout<<"bilangan pembagi tidak boleh nol"<<endl;
	}
	else{
		hasil=a/b;
		cout<<"hasilnya adalah : "<<a/b<<endl;}
		return 0;

}
