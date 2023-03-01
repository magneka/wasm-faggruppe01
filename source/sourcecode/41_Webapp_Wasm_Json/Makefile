install:
	mkdir -p build 
	emcc --bind test_html5.cpp -s FETCH=1 -s WASM=1 -O1 -g -fdebug-compilation-dir='.' -o ./build/test_html5.js
clean:
	rm -rf build
	