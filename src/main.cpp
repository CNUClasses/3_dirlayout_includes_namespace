/*
 * main.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: keith
 */
#include "../includes_usr/userio.h"
#include "../includes_usr/fileio.h"
#include "../includes_usr/constants.h"

//int main() {
////	1. Get src filename to encrypt from user
////	2. load filename
////	3. encrypt filenamedata
////	4. get dest filename to put encrypted data
////	5. save to dest filename
////	6. go to 1
//}

using namespace std;
int main() {
	int i=0;
	while (true){
		//	1. Get src filename to encrypt from user
		string filename = kp::input(ASK_FOR_FILE_OR_EXIT_CHAR);
		if (filename=="X" || filename =="x")
			return USERCHOSETOEXIT;

		//	2. load filename into data
		string data;
		if (!read(filename, data))
			return COULDNOTOPENFILE;

		//	deal with the data

		//	4. get dest filename to put encrypted data
		filename = kp::input(ASK_FOR_FILE_TO_STORE_DATA);

		//	5. save to dest filename
		if (!write(filename, data))
					return COULDNOTOPENFILE;

	}
}



