#include <thread>
#include <iostream>

#include "wait_message.h"

void wait_message(std::string msg, std::chrono::seconds duration) {
	using namespace std;
	using clock = chrono::system_clock;
	
	// I found 167 milliseconds to be a good speed for each dot
	chrono::milliseconds tickDuration(167);
	
	cout << msg;
	clock::time_point before = clock::now();
	
	while(clock::now() - before < duration) {
	
		for(unsigned i=0; 3 > i; i++) {
			cout << ".";
			this_thread::sleep_for(tickDuration);
		}
		
		if(!(clock::now() - before < duration)) {
			// The '\b' character moves the consoles "cursor" back a character.
			// This works on all (most??) operating systems. Here we are moving
			// the character back 3 characters and replacing them with spaces,
			// essentially clearing.
			cout << "\b\b\b   ";
			break;
		}
		
		this_thread::sleep_for(tickDuration*2);
		
		for(unsigned i=0; 3 > i; i++) {
			cout << "\b \b";
			this_thread::sleep_for(tickDuration);
		}
		
	}
	
	std::cout << string(msg.length(), '\b')
	          << string(msg.length(), ' ')
	          << string(msg.length(), '\b');
}
