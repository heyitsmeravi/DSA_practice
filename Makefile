program: main.o linear.o binary.o bubble.o selection.o merge.o
	gcc main.c linear.c binary.c bubble.c selection.c merge.c -o program
main.o: main.c functions.h
	gcc -c main.c
linear.o: linear.c functions.h
	gcc -c linear.c
binary.o: binary.c functions.h
	gcc -c binary.c
bubble.o: bubble.c functions.h
	gcc -c bubble.c
selection.o:selection.c functions.h
	gcc -c selection.c
merge.o: merge.c functions.h
	gcc -c merge.c
clean:
	rm *.o program
