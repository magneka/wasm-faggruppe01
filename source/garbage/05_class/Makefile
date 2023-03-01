install:
	mkdir -p build 
	emcc -lembind myclass.cpp	-o ./build/myclass.js
	cp myclass.html /source/public
	cp ./build/myclass.wasm /source/public

clean:
	rm -f ./build/* /source/public/*