#include <iostream>
#ifdef WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif // win32

using namespace std;

void sleepcp(int milliseconds);

void sleepcp(int milliseconds) // cross-platform sleep function
{
    #ifdef WIN32
    Sleep(milliseconds);
    #else
    usleep(milliseconds * 1000);
    #endif // win32
}
int main()
{
	cout << "Hi! At the count to 3, I'll die! :)" << endl;
	sleepcp(3000);
	cout << "urrrrggghhhh!" << endl;
}

 void ScrollText(string input) {
	for (int x = 0; x < input.length(); x++) {
		cout << input[x];
	}
}