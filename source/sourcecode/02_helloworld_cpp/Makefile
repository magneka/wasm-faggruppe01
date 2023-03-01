node:
	mkdir -p build
	emcc hello.cpp -o ./build/hello.js 
run_node:
	node ./build/hello.js

binary:
	mkdir -p build
	emcc hello.cpp -o ./build/hello.wasm
run_binary:        
	wasmer ./build/hello.wasm   

html:
	mkdir -p /var/www/html/02
	em++ hello.cpp -o /var/www/html/02/hello.html

clean:
	rm -f ./build/*  /var/www/html/02/*
	rm -d build