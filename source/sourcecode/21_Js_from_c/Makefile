install:
	mkdir -p build 
	mkdir -p /var/www/html/21
	emcc -O1 -s WASM=1 program.c -o ./build/program.js
	cp index.html /var/www/html/21
	cp ./build/program.js /var/www/html/21
	cp ./build/program.wasm /var/www/html/21

clean:
	rm -f ./build/* /var/www/html/21/*
	rm -d build