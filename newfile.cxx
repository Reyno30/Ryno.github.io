#include<iostream>
using namespace std;

int main( ){
	int a, b, hasil;
	char aritmatika;
	cout<<"program kalkulator sederhana\n-----------------------------\n"<<endl;
	//kalkulator sederhana
	cout<<"masukkan bilangan pertama : ";
	cin>>a;
	cout<<"pilih operator +, -, *, /: ";
	cin>>aritmatika;
	cout<<"masukkan bilangan kedua : ";
	cin>>b;
		
	if(aritmatika == '+'){
		hasil = a + b;
		cout<<"hasil perhitungan "<< a <<" + " << b << " = " << hasil<<endl;
	}
	else if(aritmatika == '-'){
		hasil = a - b;
		cout<<"hasil perhitungan "<< a <<" - " << b << " = " << hasil<<endl;
	}
	else if(aritmatika == '*'){
		hasil = a * b;
		cout<<"hasil perhitungan "<< a <<" x " << b << " = " << hasil<<endl;
	}
	else if(aritmatika == '/'){
		hasil = a / b;
		cout<<"hasil perhitungan "<< a << " : " << b << " = " << hasil<<endl;
	}
	else{
		cout<<" program tidak diketahui "<< endl;
	}
		
	cout<<"\n-Program by Rffy Lvskyy-";
}