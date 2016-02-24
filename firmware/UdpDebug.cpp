#include "application.h"
#include "UdpDebug.h"

UdpDebug::UdpDebug(UDP * _UDPClient) {
	__UDPClient = _UDPClient;
}

UdpDebug::UdpDebug(UDP * _UDPClient, const byte * remoteIP[4]) {
	memcpy(_remoteIP, remoteIP, 4);
}

UdpDebug::UdpDebug(UDP * _UDPClient, uint16_t remotePort) {
	_remotePort = remotePort;
}

UdpDebug::UdpDebug(UDP * _UDPClient, const byte * remoteIP[4], uint16_t remotePort) {
	memcpy(_remoteIP, remoteIP, 4);
	_remotePort = remotePort;
}


void UdpDebug::begin() {
	__UDPClient->begin(_remotePort);
}

// print() and overloads
int UdpDebug::print(String data) {
	__UDPClient->beginPacket(_remoteIP, _remotePort);
	__UDPClient->write(data);
	return __UDPClient->endPacket();
}

int UdpDebug::print(const char data[]) {
	return print(String(data));
}

int UdpDebug::print(char data) {
	return print(String(data));
}

int UdpDebug::print(unsigned char data) {
	return print(String(data));
}

int UdpDebug::print(int data) {
	return print(String(data));
}

int UdpDebug::print(unsigned int data) {
	return print(String(data));
}

int UdpDebug::print(long data) {
	return print(String(data));
}

int UdpDebug::print(unsigned long data) {
	return print(String(data));
}

int UdpDebug::print(double data) {
	return print(String(data));
}

int UdpDebug::print() {
	return 0;
}


// println() and overloads
int UdpDebug::println(String data) {
	return print(data);
}

int UdpDebug::println(const char data[]) {
	return print(String(data));
}

int UdpDebug::println(char data) {
	return print(String(data));
}

int UdpDebug::println(unsigned char data) {
	return print(String(data));
}

int UdpDebug::println(int data) {
	return print(String(data));
}

int UdpDebug::println(unsigned int data) {
	return print(String(data));
}

int UdpDebug::println(long data) {
	return print(String(data));
}

int UdpDebug::println(unsigned long data) {
	return print(String(data));
}

int UdpDebug::println(double data) {
	return print(String(data));
}

int UdpDebug::println() {
	return 0;
}