install:
	mkdir -p build 
	mkdir -p /var/www/html/70
	cp ./build/index.html /var/www/html/70	
	cp ./build/index.js /var/www/html/70
	cp ./build/index.wasm /var/www/html/70
	em++ index.c -s WASM=1 -s EVAL_CTORS=2 --bind -std=c++17 -O3 -o ./build/index.html --shell-file my_shell.html	
	#gå til http://localhost:3080/70/index.html


clean:
	rm -f ./build/* /var/www/html/70/*
	rm -d build
