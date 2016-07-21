main: typedef
	g++ -o main main.cpp TypeDef.h TypeDef.o
typedef:
	g++ -c TypeDef.cpp TypeDef.h

clean:
	rm main *.o
