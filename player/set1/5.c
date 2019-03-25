#include<stdio.h>
#include<string.h>
 
int digit(char);
 
int main(){
 
    char roman_Number[6];
    int i=0;
    long int number =0;
 
    printf("Enter any roman number (Valid digits are vi):  \n");
    scanf("%s",roman_Number);
 while(roman_Number[i])
 {
 if(digit(roman_Number[i]) < 0){
  printf("Invalid roman digit : %c",roman_Number[i]);
   return 0;
         }
 
         if((strlen(roman_Number) -i) > 2){
             if(digit(roman_Number[i]) < digit(roman_Number[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
          }
 
         if(digit(roman_Number[i]) >= digit(roman_Number[i+1]))
             number = number + digit(roman_Number[i]);
         else{
             number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i]));
             i++;
          }
         i++;
    }
 
    printf("Its decimal value is : %ld",number);
 
    return 0;
 
}
 
int digit(char c){
 
    int value=0;
 
    switch(c){
         case 'Vi': value = 6; break;
         
         default: value = -1; 
    }
 
    return value;
}
