#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  float userinputF; // User inputted Fahreinheit;
  float userinputC; // User inputted Celsius;
  float userinputK; // User inputted kelvin;
  float userinputINRtoEuro; // User inputted for INR to EURO;
  float userinputINRtoJPY; // User inputted for INR to JPY;
  float userinputINRtoRMB; // User inputted for INR to RMB;
  float userinputINRtoUSD; // User inputted for INR to USD;
  float userinputOunce; // User inputted for Ounce;
  float userinputGram; // User inputted for Gram;
  float fahrenheitToCelcius; // variable that stores the converted F->C;
  float celciusToFahrenheit; // variable that stores the converted C->F;
  float celciusToKelvin; // variable that stores the converted C->K;
  float KelvinTocelcius; // variable that stores the converted K->C;
  float INRtoEURO ; // varaible that stores the converted INR->EURO;
  float INRtoJPY; // stores the converted INR->JPY;
  float INRtoRMB; // stores the converted INR->RMB;
  float INRtoUSD; // stores the converted INR->USD;
  float ounceToPounds; // stores the converted Ounce->Pounds;
  float gramsToPounds; // stores the vonerted Grams->Pounds;
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      printf("Enter 3 for Celcius to Kelvin. \n");
      printf("Enter 4 for Kelvin to Celcius. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%f",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %0.2f",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%f",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %0.2f",celciusToFahrenheit);
      }
      else if(tempChoice == 3){
        printf("Please enter the Celcius degree: \n");
        scanf("%f",&userinputC);
        celciusToKelvin = (273.15+userinputC);
        printf("Kelvin: %0.2f",celciusToKelvin);
      }
      else if(tempChoice == 4){
        printf("Please enter the Kelvin: \n");
        scanf("%f",&userinputK);
        KelvinTocelcius = (userinputK-273.15);
        printf("Celcius: %0.2f",KelvinTocelcius);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for INR to Euro. \n");
      printf("Enter 2 for INR to JPY. \n");
      printf("Enter 3 for INR to RMB. \n");
      printf("Enter 4 for INR to USD. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoEuro);
          INRtoEURO = userinputINRtoEuro * 0.011;
          printf("Euro: %.3f",INRtoEURO); // %.3f = rounds the float to only 3 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoJPY);
          INRtoJPY = userinputINRtoJPY * 1.62;
          printf("JPY: %.3f",INRtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&userinputINRtoRMB);
        INRtoRMB = userinputINRtoRMB * 0.083;
        printf("RMB: %.3f",INRtoRMB);
      }
      else if(currencyChoice == 4) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&userinputINRtoUSD);
        INRtoUSD = userinputINRtoUSD * 0.012;
        printf("RMB: %.3f",INRtoUSD);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.3f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.3f",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}