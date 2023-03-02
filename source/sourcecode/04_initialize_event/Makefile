install:
	mkdir -p build 
	mkdir -p /var/www/html/04
	emcc  demo.cpp --bind -O3 -o ./build/demo.js	
	cp index.html /var/www/html/04	
	cp ./build/demo.js /var/www/html/04
	cp ./build/demo.wasm /var/www/html/04
	#gå til http://localhost:3080/04/index.html

clean:
	rm -f ./build/* /var/www/html/04/*
	rm -d build
