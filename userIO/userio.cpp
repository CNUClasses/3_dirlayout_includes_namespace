/*
 * userio.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: keith
 */
#include <iostream>
#include "../includes_usr/userio.h"

using namespace std;
namespace kp {
	std::string input(const std::string &phrase) {
		cout << phrase << endl;
		string input;
		cin >> input;
		return input;
	}
	void output(const std::string &phrase) {
		cout << phrase << endl;
	}
}
