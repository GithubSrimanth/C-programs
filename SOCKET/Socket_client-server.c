/*Socket_Client Program*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<net/ethernet.h>
#include<arpa/inet.h>
#include<string.h>

int main()
{
        int sock_fd;
        struct sockaddr_in server;
        char *message,server_reply[2048];
        sock_fd= socket(AF_INET,SOCK_STREAM,0);
 if(sock_fd == -1)
 {
         puts("Couldn't create socket\n");
         exit(1);
 }

 server.sin_addr.s_addr = inet_addr("127.0.0.1");// we have to give our own system IP address //inet_addr("172.217.168.46");
 server.sin_port = htons(9999);//htons(80);
 server.sin_family =AF_INET;

 if(connect(sock_fd,(struct sockaddr *)&server,sizeof(server))<0)
 {
         puts("Connect failed\n");
         exit(1);
 }
 puts("Connected\n");

 message = "GET /HTTP/1.1\r\n\r\n";
 if(send(sock_fd,message,strlen(message),0)<0)
 {
         puts("Send failed\n");
         return -1;
 }
 puts("Data sent\n");
 if(recv(sock_fd,server_reply,2048,0)<0)
 {
         puts("receive failed\n");
         return -1;
 }
 
 
 
 
 
 
 /*Socket_Server program*/
 #include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<net/ethernet.h>
#include<arpa/inet.h>
#include<string.h>

int main()
{
        int sock_fd,new_sock,c;
        struct sockaddr_in server,client;
        char *message,server_reply[2048];
        sock_fd= socket(AF_INET,SOCK_STREAM,0);
 if(sock_fd == -1)
 {
         puts("Couldn't create socket\n");
         exit(1);
 }

 server.sin_addr.s_addr = INADDR_ANY; /server can listen to any kind of connection from any IP address/ // inet_addr("172.217.168.46");
 server.sin_port = htons(9999); /* for unique port number*///htons(80); it is a google standard port number
 server.sin_family =AF_INET;

 if(bind(sock_fd,(struct sockaddr *)&server,sizeof(server))<0)// we need to bind this socket that we  created. now we bind socket_fd to INADDR_ANY and PORT number 9999
 {
         puts("bind failed\n");
         exit(1);
 }
 puts(" Bind Successful\n");

 listen(sock_fd,5);// 5 backlog connections can be handle by keeping queue


//waiting for connection
c= sizeof(struct sockaddr_in);
new_sock = accept(sock_fd, (struct sockaddr *)&client, (socklen_t *)&c);
if(new_sock <0)
puts("accept failed\n");
puts("Connection accepted\n");
/ after connection established we need to send data
message="Hello Client, I have received your connection";
write(new_sock,message,strlen(message));
return 0;
}
/*OUTPUT IS: srimanth@srimanth-VirtualBox:~/Desktop$ ./sock_client
Connected

Data sent

Received data
Hello Client, I have received your connection
*/



/*NOTE: client always going to send request to a particular  IP address and PORT number only once, that's why sock fd is enough to take care of that connection .
 But server prospective there are hundreds of connections are coming,in this case  same sock_fd is not going to take care of all.
 that 
 s why sock_fd will be used to lisen for different  connections .
 Once client raise a connect to server then in this client struture it will client IP address and PORT number along with server IP address and PORT number it will generate in a new fd for tracking that particular connection.
 So, if there are hundred different clients that are trying to connect server,then hundred new fds will be generated.
and further any kind of communication  with that client  this new sock  will be going to used, for sending and receiving the data */
