program: main.o linear.o binary.o bubble.o selection.o merge.o insert.o quick.o linkedListInsertBegin.o linkedListInsertEnd.o linkedListInsertPos.o linkedListDeleteBegin.o linkedListDeleteEnd.o linkedListDeletePos.o freeList.o
	gcc main.o linear.o binary.o bubble.o selection.o merge.o insert.o quick.o linkedListInsertBegin.o linkedListInsertEnd.o linkedListInsertPos.o linkedListDeleteBegin.o linkedListDeleteEnd.o linkedListDeletePos.o freeList.o -o program
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
insert.o:insert.c functions.h
	gcc -c insert.c
quick.o: quick.c functions.h
	gcc -c quick.c
linkedListInsertBegin.o: linkedListInsertBegin.c functions.h
	gcc -c linkedListInsertBegin.c
linkedListInsertEnd.o: linkedListInsertEnd.c functions.h
	gcc -c linkedListInsertEnd.c
linkedListInsertPos.o: linkedListInsertPos.c functions.h
	gcc -c linkedListInsertPos.c
linkedListDeleteBegin.o: linkedListDeleteBegin.c functions.h 
	gcc -c linkedListDeleteBegin.c
linkedListDeleteEnd.o: linkedListDeleteEnd.c functions.h
	gcc -c linkedListDeleteEnd.c
linkedListDeletePos.o: linkedListDeletePos.c functions.h
	gcc -c linkedListDeletePos.c
freeList.o: freeList.c functions.h
	gcc -c freeList.c
clean:
	rm *.o program
