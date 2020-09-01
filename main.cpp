/************************************
Name: Leslie Pratt

Coding: 01

Purpose: This is the main file for my
		 my Hello-World program. 
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
	
    std::cout << "My command line analyzer..." << std::endl;
    
    std::cout << "The number of command line parameters are: " << argc << std::endl;
    
    if (argc > 1){
       std::cout << "The length of the name of the program is: " << string_length(argv[0])<< std::endl; 
	   int i = 0;
       do{
       	std::cout << "The length of the first parameter is: " << string_length(argv[i]) << std::endl;
       	i++;
	   }while(i < argc);
	}

    return 0;
}
