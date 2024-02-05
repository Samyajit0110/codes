import socket as sock
csock = sock.socket()
port = 12345
csock.connect(("192.168.0.107",port))
while True:
    message = csock.recv(1024).decode()
    print(message)
    reply = input("enter reply: ")
    csock.send(reply.encode())
csock.close