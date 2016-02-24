#include "application.h"

class UdpDebug {
	public:
		UdpDebug(UDP * _UDPClient);
		UdpDebug(UDP * _UDPClient, const byte * remoteIP[4]);
		UdpDebug(UDP * _UDPClient, uint16_t remotePort);
		UdpDebug(UDP * _UDPClient, const byte * remoteIP[4], uint16_t remotePort);
		void begin();

		int print(String data);
		int print(const char data[]);
		int print(char data);
		int print(unsigned char data);
		int print(int data);
		int print(unsigned int data);
		int print(long data);
		int print(unsigned long data);
		int print(double data);
		int print();

		int println(String data);
		int println(const char data[]);
		int println(char data);
		int println(unsigned char data);
		int println(int data);
		int println(unsigned int data);
		int println(long data);
		int println(unsigned long data);
		int println(double data);
		int println();

	private:
		UDP * __UDPClient;
		byte _remoteIP[4] = {255, 255, 255, 255};
		uint16_t _remotePort = 5549;
};