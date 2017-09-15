/*
 * fileio.h
 *
 *  Created on: Sep 14, 2017
 *      Author: keith
 */

#ifndef FILEIO_FILEIO_H_
#define FILEIO_FILEIO_H_
#include <string>

bool read(const std::string filename, std::string &filedata);
bool write(const std::string filename, std::string &filedata);

#endif /* FILEIO_FILEIO_H_ */
