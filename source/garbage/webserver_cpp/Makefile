server2:
	mkdir -p build 
	emcc webserver2.c -o ./build/webserver2.js

install:
	mkdir -p build 
	em++ httplib.h server.cpp -o ./build/server.wasm
run_binary:    
	wasmer ./build/server.wasm   

clean:
	rm -f ./build/* 
