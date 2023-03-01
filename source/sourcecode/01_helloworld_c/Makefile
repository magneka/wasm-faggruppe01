node:
	mkdir -p build 
	emcc hello.c -o ./build/hello.js 
run_node:
	node ./build/hello.js

binary:
	mkdir -p build 
	emcc hello.c -o ./build/hello.wasm
run_binary:    
	wasmer ./build/hello.wasm   

html:
	mkdir -p /var/www/html/01
	emcc hello.c -o /var/www/html/01/hello.html
	# gå til http://localhost:3080/01/hello.html

clean:
	rm -f ./build/*  /var/www/html/01/*
	rm -d build