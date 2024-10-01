#include<iostream>

int main (){
    /*/Data input with spaces 
    std::string fullname;
    std::cout<<"Enter your name: ";
    std::getline(std::cin,fullname);
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    std::cout<<"Hii! "<<fullname<<" you are "<<age<<"years old";*/
    /*std::cerr<<"Error Message : Something went wrong";
    std::clog<<"Log Message : Something Happened";*/
   /* int a; //may contain a garbage value
    int b {};*///Initializes variable to zero 
    //Size of a type in memory
    std::cout<<"Size of int : "<<sizeof(int);
    
    return 0;
    }