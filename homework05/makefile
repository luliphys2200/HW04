CC = clang
CFLAGS = -Wall -g

radius: distance.o area.o perimeter.o radius.o geom.h
	$(CC) $(CFLAGS) -o radius distance.o area.o perimeter.o radius.o -lm
distance.o: distance.c geom.h
	$(CC) $(CFLAGS) -c distance.c
area.o: area.c distance.c perimeter.c geom.h
	$(CC) $(CFLAGS) -c area.c
perimeter.o: perimeter.c distance.c geom.h
	$(CC) $(CFLAGS) -c perimeter.c
radius.o: radius.c distance.c area.c perimeter.c geom.h
	$(CC) $(CFLAGS) -c radius.c
