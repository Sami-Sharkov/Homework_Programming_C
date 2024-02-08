taskmanager: taskmanager.c processes.o
	gcc -o taskmanager taskmanager.c processes.o

processes.o: processes.c processes.h
	gcc -c processes.c

clean:
	rm -f *.o taskmanager