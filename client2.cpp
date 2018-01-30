/*!
 * Simple socket program client.cpp
 * Version - 1.0.0
 * Based on: Simple chat program (client side).cpp - http://github.com/hassanyf
 *
 * Copyleft (c) 2017 Rodrigo Tufino <rtufino@ups.edu.ec, r.tufino@alumnos.upm.es>
 */
#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>

using namespace std;

int main() {
 /* -------------- INITIALIZING VARIABLES -------------- */
 int client; // socket file descriptors
 int portNum = 2705; // port number (same that server)
 int bufsize = 1024; // buffer size
 char buffer[bufsize]; // buffer to transmit
 char ip[] = "127.0.0.1"; // Server IP
 bool isExit = false; // var fo continue infinitly

 /* Structure describing an Internet socket address. */
 struct sockaddr_in server_addr;

 cout << "\n- Starting client..." << endl;

 /* ---------- ESTABLISHING SOCKET CONNECTION ----------*/

 client = socket(AF_INET, SOCK_STREAM, 0);

 /*
 * The socket() function creates a new socket.
 * It takes 3 arguments:
 * 1) AF_INET: address domain of the socket.
 * 2) SOCK_STREAM: Type of socket. a stream socket in
 * which characters are read in a continuous stream (TCP)
 * 3) Third is a protocol argument: should always be 0.
 * If the socket call fails, it returns -1.
 */

 if (client < 0) {
 cout << "\n-Error establishing socket..." << endl;
 exit(-1);
 }

 cout << "\n- Socket client has been created..." << endl;

 /*
 * The variable serv_addr is a structure of sockaddr_in.
 * sin_family contains a code for the address family.
 * It should always be set to AF_INET.
 * INADDR_ANY contains the IP address of the host. For
 * server code, this will always be the IP address of
 * the machine on which the server is running.
 * htons() converts the port number from host byte order
 * to a port number in network byte order.
 */

 server_addr.sin_family = AF_INET;
 server_addr.sin_port = htons(portNum);

 /*
 * This function converts an Internet address (either IPv4 or IPv6)
 * from presentation (textual) to network (binary) format.
 * If the comunication is on the same machine, you can comment this line.
 */
 inet_pton(AF_INET, ip, &server_addr.sin_addr);

 /* ---------- CONNECTING THE SOCKET ---------- */

 if (connect(client, (struct sockaddr *) &server_addr, sizeof(server_addr))
 < 0)
 cout << "- Connection to the server port number: " << portNum << endl;

 /*
 * The connect function is called by the client to
 * establish a connection to the server. It takes
 * three arguments, the socket file descriptor, the
 * address of the host to which it wants to connect
 * (including the port number), and the size of this
 * address.
 * This function returns 0 on success and -1
 * if it fails.
 * Note that the client needs to know the port number of
 * the server but not its own port number.
 */
 cout << "- Awaiting confirmation from the server..." << endl; //line 40

 // recive the welcome message from server
 recv(client, buffer, bufsize, 0);
 cout << buffer << endl;

 cout << "- Connection confirmed, you are good to go!" << endl;
 cout << "- Enter * to end the message" << endl;
 cout << "- Enter # to end the connection\n" << endl;
 // loop to send messages to server
 do {
 cout << "Message: ";
 /*
 * The function 'cin' get an word at time and send it
 * to the server. The send operation is call until
 * the user write '*'.
 */
 do {
 // read from terminal
 cin >> buffer;
 // send to the server
 send(client, buffer, bufsize, 0);
 if (*buffer == '#') {
 // exit from the loop
 *buffer = '*';
 isExit = true;
 }
 } while (*buffer != '*');
 // wait the response from the server
 cout << "Server says: ";
 recv(client, buffer, bufsize, 0);
 // print the server message
 cout << buffer << endl;
 } while (!isExit);

 /* ---------------- CLOSE CALL ------------- */

 cout << "\nConnection terminated.\n";

 /*
 * Once the server presses # to end the connection,
 * the loop will break and it will close the server
 * socket connection and the client connection.
 */
 close(client);
 return 0;
}
