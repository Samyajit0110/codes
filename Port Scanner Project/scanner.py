import socket as sock
import sys
# if len(sys.argv) < 2 or len(sys.argv) > 3:
#     print("Usage : codename target_ip")
#     sys.exit()
# elif len(sys.argv) == 2:
#     target_ip = sock.gethostbyname(sys.argv[1])
# else:
#     target_ip = sys.argv[2]
# target_ip = sock.gethostbyname("www.google.com")
target_ip = "104.31.85.168"
try:
    for port in range(0, 65535):  # range of ports to scan
        # creating socket object
        my_socket = sock.socket(sock.AF_INET, sock.SOCK_STREAM)
        sock.setdefaulttimeout(0)
        # try connect to target port
        is_open = my_socket.connect_ex((target_ip, port))
        if is_open == 0:
            print("port", port, " is open")
        # else:
            # print("port %s is closed" % port)
except KeyboardInterrupt:
    print("exiting....")
    sys.exit()
except sock.gaierror:
    print("unresolved dns")
except sock.error:
    print(sock.error)
