
%.o: %.c
	gcc -c -o $@ $<

fizzbuzz: fizzbuzz.o
	gcc -o $@ $^ 

clean:
	rm -f *.o fizzbuzz
