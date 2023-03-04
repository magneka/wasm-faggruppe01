install:
	mkdir -p build 
	mkdir -p /var/www/html/31
	em++ -O1 -s WASM=1 -lembind myclass.cpp -o ./build/myclass.js
	cp myclass.html /var/www/html/31
	cp ./build/myclass.js /var/www/html/31
	cp ./build/myclass.wasm /var/www/html/31

clean:
	rm -f ./build/* /var/www/html/31/*
	rm -d build

	