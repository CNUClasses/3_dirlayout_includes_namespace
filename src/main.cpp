/*
 * main.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: keith
 */
#include "../includes_usr/userio.h"
#include "../includes_usr/fileio.h"
#include "../includes_usr/manip.h"
#include "../includes_usr/constants.h"

using namespace std;

int main() {
	//1. try default first
	string filename = DEFAULT_SOURCE_FILE;
	string data;

	//stay in here until we either read data or user exits
	while(true){
		//if we can open the file and read the data then
		//bail out of this loop
		if(read(filename, data))
			break;

		//2. if cannot open default, ask user what to do
		filename = kp::input(ASK_FOR_FILE_OR_EXIT_CHAR);
		if (filename=="X" || filename =="x")
			return USERCHOSETOEXIT;
	}

	//3.manipulate the data
	manip(data);

	//	4. get dest filename to put encrypted data
	filename = kp::input(ASK_FOR_FILE_TO_STORE_DATA);

	//	5. save to dest filename
	if (!write(filename, data)){
		return COULDNOTOPENFILE;
	}
}



