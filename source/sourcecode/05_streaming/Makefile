install:
	mkdir -p build 
	mkdir -p /var/www/html/05
	emcc streaming.c streaming_util.c -o ./build/streaming.js	
	cp index.html /var/www/html/05		
	cp ./build/streaming.wasm /var/www/html/05
	#gå til http://localhost:3080/05/index.html

clean:
	rm -f ./build/* /var/www/html/04/*
	rm -d build
