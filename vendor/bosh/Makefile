
all: build lib lib/libbosh.a

build lib:
	mkdir -p $@

lib/libbosh.a: build/WasserkocherBosh_H4215.o
	libtool -static -o $@ $^

build/WasserkocherBosh_H4215.o: src/WasserkocherBosh_H4215.cpp
	g++ -c $^ -o $@
	
clean: 
	$(RM) lib/*.a
	$(RM) build/*.o
	
