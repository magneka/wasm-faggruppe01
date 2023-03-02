install:
	mkdir -p build 
	mkdir -p /var/www/html/51
	#emcc -O1 -s WASM=1 program.c -o ./build/program.js

	emcc mandelbrot.c -s WASM=1 -o ./build/mandelbrot.wasm

	cp index.html /var/www/html/51
	cp mandelbrot.js /var/www/html/51
	cp app.js /var/www/html/51	
	cp ./build/mandelbrot.wasm /var/www/html/51

clean:
	rm -f ./build/* /var/www/html/51/*
	rm -d build