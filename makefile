bin/programa: src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/programa

ejecutar: bin/programa	
	./bin/programa

clean  : bin/programa
	rm bin/programa
	
ejecutar2: bin/animacion
	./bin/animacion

bin/animacion:src/animacion.cpp include/*.hpp
	g++ src/animacion.cpp -Include -obin/animacion -lftxui-screen -lftxui-dom -lftxui-component -std=c++2a