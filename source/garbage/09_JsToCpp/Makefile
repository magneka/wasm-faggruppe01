install:
	emcc double.c -s WASM=1 -s EXPORTED_FUNCTIONS="['_getDoubleNumber']" -o ./double.js
	cp * /source/public

clean:
	rm -f /source/public/*
	rm ./double.js
	rm ./double.wasm