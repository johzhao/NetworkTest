# *-* code:utf-8 *-*

import socket

remote_host = '192.168.217.128'
remote_port = 12345
#send_buf = open('binary.txt', 'rb').read()
send_buf = 'data for send.'
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.connect((remote_host, remote_port))
sock.send(send_buf)
response_data = sock.recv(1024)
#print response_data
sock.close()
