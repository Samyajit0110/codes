import socket as sock
my_socket = sock.socket()
port = 12345
my_socket.bind(("", port))
my_socket.listen(6)
while True:
    client, address = my_socket.accept()
    print("connection made")
    while True:
        message = input()
        client.send(message.encode())
        client_msg = client.recv(1024).decode()
        print(client_msg)
    client.close()
    break;
