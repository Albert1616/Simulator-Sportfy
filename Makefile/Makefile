PROG = programa
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o Perfil.o Musica.o Artista.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG) -o ../bin

main.o: ../src/main.cpp
	$(CC) $(CPPFLAGS) -c ../src/main.cpp -o ../build/main.o
Perfil.o: ../include/Perfil.h
	$(CC) $(CPPFLAGS) -c ../src/Perfil.cpp -o ../build/Perfil.o
Musica.o: ../include/Musica.h
	$(CC) $(CPPFLAGS) -c ../src/Musica.cpp -o ../build/Musica.o
Artista.o: ../include/Artista.h
	$(CC) $(CPPFLAGS) -c ../src/Artista.cpp -o ../build/Artista.o
clean:
	rm -f *.o $(PROG)