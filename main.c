/*
 * main.c
 *
 *  Created on: Feb 3, 2015
 *      Author: Jeff
 */

#include <sstream>
#include <vector>
#include <string>


int main() {
   // inputs
   string str("abc:def");
   char split_char = ':';

   // work
   istringstream split(str);
   vector<std::string> tokens;
   for (std::string each; std::getline(split, each, split_char); tokens.push_back(each));
}
