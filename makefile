cc = g++
cppflags = -std=c++11 -g -Wall
objs = source.o boov.o gorg.o competitor.o

app: $(objs)
	$(cc) $(cppflags) $(objs) -o app

source.o: source.cpp
	$(cc) $(cppflags) source.cpp -c

boov.o: boov.cpp boov.h
	$(cc) $(cppflags) boov.cpp -c

gorg.o: gorg.cpp gorg.h
	$(cc) $(cppflags) gorg.cpp -c

competitor.o: competitor.cpp competitor.h
	$(cc) $(cppflags) competitor.cpp -c

clean:
	rm *.o app
                    
