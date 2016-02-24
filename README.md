UdpDebug
========

This is a simple class for sending debug messages (much like `Serial.print(...)`)
to the local network broadcast address (255.255.255.255) or a specific IP address
and/or port.  You can then use a utility such as tcpdump, netcat, ngrep, or
Wireshark to view the UDP broadcast messages.