/************************************
Name: Leslie Pratt

Coding: 01

Purpose: This is the main file for my
		 my Hello-World program. Note 
		 that the parameter lists argc
		 and argv contain the number of 
		 parameters passed to main and 
		 names.
*************************************/

/*
 * This is a simple Hello World in C++.
 * Note the header structure and files.
 * The only thing included here is main.h
 * main.h contains all other directives
 */

/* 
 * File:   main.cpp
 * Author: Alex Katrompas
 */

#include "main.h"

int main(int argc, char** argv) {

// Counter for do-while loop to track number of argv[n] parameters	
	int i = 1;																						
	
    std::cout << "My command line analyzer..." << std::endl;
    
    std::cout << "The number of command line parameters are: " << argc << std::endl;

// Setup for if statements based on number of command line parameters    
    if (argc == 1){
       std::cout << "The length of the name of the program is: " << string_length(argv[0])<< std::endl;
	}
		
	if (argc > 1){
	   std::cout << "The length of the name of the program is: " << string_length(argv[0])<< std::endl;
	   int i = 1;
       do{
       	 std::cout << "The length of parameter " << i << " is: " << string_length(argv[i]) << std::endl;
       	 i++;
	   }while(i < argc);
	}



    return 0;
}
