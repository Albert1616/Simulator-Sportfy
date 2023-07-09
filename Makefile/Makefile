PROG = programa
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = ../build/main.o ../build/Perfil.o ../build/Musica.o ../build/Artista.o ../build/Stack.o ../build/menu.o

$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

../build/main.o: ../src/main.cpp
	$(CC) $(CPPFLAGS) -c ../src/main.cpp -o ../build/main.o

../build/Perfil.o: ../src/Perfil.cpp ../include/Perfil.h
	$(CC) $(CPPFLAGS) -c ../src/Perfil.cpp -o ../build/Perfil.o

../build/Musica.o: ../src/Musica.cpp ../include/Musica.h
	$(CC) $(CPPFLAGS) -c ../src/Musica.cpp -o ../build/Musica.o

../build/Artista.o: ../src/Artista.cpp ../include/Artista.h
	$(CC) $(CPPFLAGS) -c ../src/Artista.cpp -o ../build/Artista.o

../build/Stack.o: ../src/Stack.cpp ../include/Stack.h
	$(CC) $(CPPFLAGS) -c ../src/Stack.cpp -o ../build/Stack.o

../build/menu.o: ../src/menu.cpp ../include/Menu.h
	$(CC) $(CPPFLAGS) -c ../src/menu.cpp -o ../build/menu.o

.PHONY: run
run: $(PROG)
	./$(PROG)

clean:
	rm -f $(OBJS) $(PROG)
