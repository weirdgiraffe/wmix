
all: build lib lib/libaeg.a

build lib: 
	mkdir -p $@

lib/libaeg.a: build/WasserkocherAEG_15S12D.o
	libtool -static -o $@ $^

build/WasserkocherAEG_15S12D.o: src/WasserkocherAEG_15S12D.cpp
	g++ -c $^ -o $@
	
clean: 
	$(RM) lib/*.a
	$(RM) build/*.o
