install:
	mkdir -p build 
	mkdir -p /var/www/html/03
	em++ -std=c++20 -O1 -s WASM=1 -lembind cowsay.cpp -o ./build/cowsay.js
	cp cowsay.html /var/www/html/03	
	cp ./build/cowsay.js /var/www/html/03
	cp ./build/cowsay.wasm /var/www/html/03
	#gå til http://localhost:3080/03/cowsay.html

clean:
	rm -f ./build/* /var/www/html/03/*
	rm -d build

	