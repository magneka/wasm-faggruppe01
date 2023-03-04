install:
	mkdir -p build 
	mkdir -p /var/www/html/70
	emcc --bind index.cpp -s FETCH=1 -s WASM=1 -O1 -std=c++20 -o ./build/index.html --shell-file ./my_shell.html
	
copyweb:
	cp ./build/index.html /var/www/html/70	
	cp ./build/index.js /var/www/html/70
	cp ./build/index.wasm /var/www/html/70

clean:
	rm -f ./build/* /var/www/html/70/*
	rm -d build
