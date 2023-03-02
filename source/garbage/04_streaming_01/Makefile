install:
	mkdir -p build 	
	em++ -std=c++20 streaming.cpp -s WASM=1 -s EXPORTED_FUNCTIONS="[_Sum, _sumOfNInts]" -o ./build/streaming.js
	cp streaming.html /source/public
	cp ./build/streaming.wasm /source/public

clean:
	rm -f ./build/* /source/public/*