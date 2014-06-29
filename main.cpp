#include <thread>
#include <chrono>
#include <string>
#include <iostream>

#include "wait_message.h"

int main() {
	
	using namespace std;
	
	for(;;) {
		wait_message("Checking if your computer is on", chrono::seconds(6));
		
		cout << "YES." << endl;
		
		this_thread::sleep_for(chrono::milliseconds(2000));
		
		cout << "Would you like to check again? (Y/N) ";
		char answer;
		
		cin >> answer;
		
		if(answer == 'Y' || answer == 'y') {
			cout << endl;
			continue;
		}
		
		break;
	}
	
	return 0;
}

