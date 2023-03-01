node:
	mkdir -p build 
	emcc cowsay.cpp -s WASM=1 -std=c++20 -s EXPORTED_FUNCTIONS="['_main']" -o ./build/cowsay.js 
run_node:
	node ./build/cowsay.js "Luriken sier hallo"


binary:
	mkdir -p build 
	emcc cowsay.cpp -std=c++20 -o ./build/cowsay.wasm
run_binary:        
	wasmer ./build/cowsay.wasm "Hello lurikken!"


html:
	mkdir -p /var/www/html/03
	emcc cowsay.cpp -o ./build/cowsay.js
	cp cowsay.html /source/public
	cp ./build/cowsay.wasm /source/public
	# gå til

clean:
	rm -f ./build/*  /var/www/html/03/*
	rm -d build