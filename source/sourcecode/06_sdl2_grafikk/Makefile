install:
	mkdir -p build 
	mkdir -p /var/www/html/06

	emcc -c sdl_1_2_sample.c -o ./build/sdl_1_2_sample.o 
	emcc ./build/sdl_1_2_sample.o -o ./build/index.html 
	
	#emcc  demo.cpp --bind -O3 -o ./build/demo.js	
	cp ./build/index.html /var/www/html/06	
	cp ./build/index.js /var/www/html/06
	cp ./build/index.wasm /var/www/html/06
	#gå til http://localhost:3080/06/index.html

mandel:
	mkdir -p build 
	mkdir -p /var/www/html/06

	emcc -c sdmandel.c -o ./build/sdmandel.o 
	emcc ./build/sdmandel.o -o ./build/index.html 
	
	#emcc  demo.cpp --bind -O3 -o ./build/demo.js	
	cp ./build/index.html /var/www/html/06	
	cp ./build/index.js /var/www/html/06
	cp ./build/index.wasm /var/www/html/06
	#gå til http://localhost:3080/06/index.html


clean:
	rm -f ./build/* /var/www/html/06/*
	rm -d build
