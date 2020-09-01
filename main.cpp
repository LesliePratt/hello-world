/************************************
Name: Leslie Pratt

Coding: 01

Purpose: This is the main file for my
		 my Hello-World program. 
/*************************************

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

    return 0;
}
