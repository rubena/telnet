all: server client

server: mt.h
client: mt.h

clean: 
	rm -f server client
