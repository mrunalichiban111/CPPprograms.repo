#include<stdio.h>

int main(){
    // This is a Single line comment
    /*This is a 
    multi line comment*/
    /*Escape Sequence characters : Character with a backslash at start
    \n=new line
    \t=tab(8character space generated)
    to include quotes follow same way as python
    Check out list of all escape sequence character in tg saved message or on google*/
    /*int x; //Declaration
    x=20; //initialisation
    int age=10; //declaration + initialisation 
    float gpa=9.5;
    char grade='A'; //in C char and string are diffrent char is stored in single quotes and stores single character where as string in double quotes
    char name[]="Mrunal"; //array of characters
    printf("hello %s here\n",name); //%s is a format specifier for printing string and %c is used for printing a character
    printf("My GPA is %f \n",gpa);  //%f for printing float numbers
    printf("My age is %d \n",age);  //%d for printing decimal numbers i.e integers */
    char a='C';
    // single character %c
    char b[] = "Bro";
    // array of characters %s
    float c = 3.141592;
    //4 bytes (32 bits of precision) 67 digits %f
    double d=3.141592653589793;
    // 8 bytes (64 bits of precision) 15 16 digits %lf
    //bool e true;
    // 1 byte (true or false) %d
    //char f = 100;
    // 1 byte (-128 to +127) %d or %c
    //unsigned char g = 255;
    // 1 byte (0 to +255) %d or %c
    //short int h = 32767;
    // 2 bytes (-32,768 to +32,767) %d
    //unsigned short int i= 65535;
    //2 bytes (0 to +65,535) %d
    printf("Hello World");
    return 0;
}