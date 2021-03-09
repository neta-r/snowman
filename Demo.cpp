/**
 * Demo program for snowman exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-02
 */

#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

	cout << ariel::snowman(14224132) << endl;   /* Should print:
_===_
(.,.)
( : )
( : )
	*/
	std::string std = "       \n _===_ \n (o o) \n< (> <)>\n (\" \") \n";
	cout << std<<endl;
	cout << "========" << endl;
	cout << ariel::snowman(33232124) << endl;   /* Should print:
   _
  /_\
\(o_O)
 (] [)>
 (   )
	*/
    cout << "========" << endl;
	try {
		cout << ariel::snowman(5) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid code '5'"
	}
}
