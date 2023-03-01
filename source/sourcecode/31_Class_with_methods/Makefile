install:
	mkdir -p build 
	em++ -O1 -s WASM=1 -lembind myclass.cpp -o ./build/myclass.js
	cp myclass.html /source/public	
	cp ./build/myclass.js /source/public
	cp ./build/myclass.wasm /source/public

clean:
	rm -f ./build/* /source/public/*

	