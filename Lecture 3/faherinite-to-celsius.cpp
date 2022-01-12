#include<iostream>
using namespace std;

int main(){
   float Fahrenheit,Celsius;

   cout<<" Enter The value in Farenheit : "<<endl;

   cin >> Fahrenheit;

   Celsius = ((Fahrenheit-32)*5)/9;

   cout <<"Fahrenheit: "<<Fahrenheit <<" to Celsius conversion is: "<< Celsius;

   return 0;

}