main: cafeteria.o breakfast.o lunch.o snacks.o dinner.o 
	gcc cafeteria.o breakfast.o lunch.o snacks.o dinner.o -o output

cafeteria.o: cafeteria.c breakfast.o lunch.o snacks.o dinner.o
		gcc -c cafeteria.c 
	
breakfast.o: breakfast.c 
		gcc -c breakfast.c 

