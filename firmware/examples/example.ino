#include "UdpDebug.h"

UDP udp;
UdpDebug udpdebug(&udp);


void setup() {
	udpdebug.begin();
	udpdebug.print("setup() complete!");
}


void loop() {
	udpdebug.println(millis());
	delay(10);
}