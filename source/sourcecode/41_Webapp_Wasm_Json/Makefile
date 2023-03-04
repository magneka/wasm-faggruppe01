install:
	mkdir -p build 
	mkdir -p /var/www/html/41
	emcc --bind test_html5.cpp -s FETCH=1 -s WASM=1 -O1 -g -o ./build/test_html5.js
	cp ./index.html /var/www/html/41
	cp ./*.json /var/www/html/41
	cp ./build/test_html5.js /var/www/html/41
	cp ./build/test_html5.wasm /var/www/html/41

clean:
	rm -f ./build/* /var/www/html/41/*
	rm -d build
