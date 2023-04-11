#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	const int defaultpin = 0000;
	int attempts = 0;
	int select;
	float reference;
	char option,a,b,y,n;
	char T,F ,letter;
	int number;
	float amount;
	int pin,age;
	int c_pin;
	int new_pin;
	float balance, counter;
	string digits;
	balance=1000;
cout<<"Main Menu"<<endl;
cout<<"1.Transfer & send money"<<endl;
cout<<"2. Reset & Change Pin"<<endl;
cout<<"3. Check Account Balance"<<endl;
cout<<"4.Financial Services"<<endl;
cout<<"5.Allow Cash Out "<<endl;
cin>>select;
cout<<select;
 if(select==1)
{
	cout<<"Enter Mobile Number "<<endl;
	cin>>number;
	cout<<"Enter Amount To Transfer "<<endl;
	cin>>amount;
	cout<<"Transfer "<<amount<<" to "<<number<<endl;
	cout<<"Enter Reference "<<endl;
	cin>>reference;
	cout<<"Please enter your PIN: "<<endl;
	cin>> pin;
	do{
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;
		}
		else if (pin== defaultpin){
			cout<<"You have successfully sent "<<amount<<" to "<<number<<endl;
			cout<<"Your current balance is "<<balance-amount<<endl;	
		}
	} while (pin != defaultpin && attempts >3);
	if(attempts>3){
		cout<<"Maximum attempts reached."; 
		cout<<"Exiting Program"<<endl;
	}
	switch(pin){
		break;
	}

	}	
	
	else if(select==2)
{
	cout<<" Are You Sure You Want To Change Your Pin  "<<endl;
	cout<<" Choose T/F "<<endl;
	cin>>option;
	if(option==T){
		cout<<"Enter New Pin" <<endl;
		cin>>new_pin;
		pin==new_pin;
		cout<<" Your New Pin Is "<<"new_pin";
	}
	else if(option==F){
		cout<<"No I Donot want to change it"<<endl;
	}
	
}
if (select==5){
		cout<<"Do u want to allow cashout"<<endl;
	if(letter==y){
		cout<<"cash out done"<<endl;
		return 0;
}
	else if(letter==n)
	cout<<"cashout cancelled"<<endl;
	return 0;
	}
	
if(select==3)
{
	do{
		cout<<"Please enter your 4-digit PIN: "<<endl;
		cin>> pin;
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. do it again" <<endl;
		}
		else if (pin== defaultpin){
			cout<<"Your balance is 1000";	
		}
	} while (pin != defaultpin && attempts <3);
	if(attempts>3){
		cout<<"you have reached."; 
		cout<<"Exiting Program"<<endl;
	}
	switch(pin){
		break;
	}
}
else if(select==4)
{
   	cout<<"loan"<<endl;
   	cout<<"enter your age"<<endl;
   	cin>>age;


if(age<=18){
	cout<<"please you cannot get loan"<<endl;
	return 0;}

else if(age>=18){
	cout<<"how much you need "<<endl;
	cout<<"a.20"<<endl;
	cout<<"b.50"<<endl;
	cin>>option;
}
if(letter==a){
	cout<<"you have received GH20"<<endl;
}
else if(letter==b){
	cout<<"you have received GH50"<<endl;
}
cout<<"make sure you pay or police will be after you"<<endl;}

 
	return 0;
}
	
	
