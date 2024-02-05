import socket as sock
try:
    # socket instance with ipv4 address family and tcp connection protocol
    my_socket = sock.socket(sock.AF_INET, sock.SOCK_STREAM)
    print("socket established")
except sock.error as error:
    print("failed because %s", (error))
port = 80  # default port for my_socket
try:
    # gets ip of through dns lookup
    get_ip = sock.gethostbyname("www.google.com")
    print("connected to google")
except sock.gaierror:
    print("unresolved dns")
my_socket.connect((get_ip, port))
# ----------------------------------------------------------------------------
socket_new = sock.socket()  # creating an socket object
print("socket object is created")
port = 12345
print("port is set to %s" % port)
socket_new.bind(("", port))  # binded to ip = "" and port
# ip is kept blank to enable the connection to listen to incomming requests from other computers
print("port is binded")
print("Socket is binded to %s" % (port))
socket_new.listen(6)  # putting the socket to listening mode
# args is the no. of connections that can be kept waiting
while True:
    print("Socket is listening")
    client, address = socket_new.accept()  # accept socket request
    print("received connection from ",address)
    client.send("Gotchu heyo bitch".encode())
    # message = socket_new.recv(1024).decode()
    # print(message)
    client.close()
    break
