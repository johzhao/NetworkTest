# *-* coding:utf-8 *-*

import logging
import SocketServer

logging.basicConfig(level=logging.INFO)

class MyHandler(SocketServer.BaseRequestHandler):
	def handle(self):
		logger = logging.getLogger("Server")
		while 1:
			dataReceived = self.request.recv(1024)
			if not dataReceived:
				break
			#self.request.send(dataReceived)
			logger.info(dataReceived)


myServer = SocketServer.TCPServer(('localhost', 8001), MyHandler)
myServer.serve_forever()
