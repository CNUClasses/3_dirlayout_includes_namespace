/*
 * constants.h
 *
 *  Created on: Sep 14, 2017
 *      Author: keith
 */

#ifndef INCLUDES_USR_CONSTANTS_H_
#define INCLUDES_USR_CONSTANTS_H_
#include <string>

const std::string DEFAULT_SOURCE_FILE = "source.txt";
const std::string DEFAULT_DESTINATION_FILE = "dest.txt";
const std::string ASK_FOR_FILE_OR_EXIT_CHAR = "Please enter a source file or X to exit";
const std::string ASK_FOR_FILE_TO_STORE_DATA = "Please enter a destination file to store data";

const int SUCCESS 						= 0;
const int USERCHOSETOEXIT 				= -1;
const int COULDNOTOPENFILE 				= -2;

#endif /* INCLUDES_USR_CONSTANTS_H_ */
