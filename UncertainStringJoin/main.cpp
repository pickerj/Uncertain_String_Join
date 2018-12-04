//// Uncertain String Join
// Written by James Picker
// 
// Implementation of the string similarity join technique in the paper 
// "Similarity Joins for Uncertain Strings" by Manish Patil and Rahul Shah, published in SIGMOD/PODS'14
//
// UncertainStringJoin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "usj_filter.h"


int main()
{
	const std::string DATA_PATH = "./Text.txt";
	
	std::ifstream datafile;
	datafile.open(DATA_PATH);
	if (!datafile.is_open()) {
		std::cout << "Error opening datafile at location \"" + DATA_PATH + "\". Abort.";
		return -1;
	}



    std::cout << "Hello World!\n";
}