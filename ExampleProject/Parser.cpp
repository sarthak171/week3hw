#include "Parser.h"
//we dont need to type 'using namespace std;' since that was defined in Parser.h
Parser::Parser() {

}

string Parser::getCommandRef(string cmd){

	if(cmd == "-p"){
			return "Prints out a pyramid\n";
		}if(cmd == "atom" || cmd == "nano"){
			return "A text editor\n";
		}if(cmd == "ls"){
			return "Prints all Files\n";
		}
	}

}
//we dont need to redefine the class here since we already did that in
