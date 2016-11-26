#Rule 1
main.c: mystring.c mystring.h
	gcc -Wall -o copier main.c

#Rule2
mystring.c:
	gcc -Wall -c mystring.c

#Rule3
mystring.h:
	gcc -Wall -c mystring.h
 
