/*
 * fileio.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: keith
 */
#include <iostream>
#include <fstream>
#include "../includes_usr/fileio.h"
using namespace std;
bool read(const std::string filename, std::string &filedata) {
	ifstream myInputfile;
	myInputfile.open(filename.c_str(), ios::in); //could open with  flags myfile.open(MYFILE, ios::in)
												 //note the .c_str() call on MYFILE
	if (!myInputfile.is_open())
		return false;

	//read the data
	std::string line;
	while (!myInputfile.eof()) {				//exits when reach end of file
		getline(myInputfile, line);				//gets a line up to '/n' char
		filedata += line;
	}
	myInputfile.close();
	return true;
}

bool write(const std::string filename, std::string &filedata) {
	ofstream myOutputfile;
	myOutputfile.open(filename.c_str());//could open with  flags myfile.open(MYFILE, ios::out)
									  //note the .c_str() call on MYFILE
	if (!myOutputfile.is_open())
			return false;

	myOutputfile << filedata;
	myOutputfile.close();
	return true;
}

