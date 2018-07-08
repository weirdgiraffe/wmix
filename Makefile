SOURCES:=$(shell ls src/*.cpp)
VENDOR_LIBS:=-L vendor/aeg/lib -L vendor/bosh/lib -l aeg -l bosh

.PHONY: all
all: build vendors kafemashine

kafemashine: $(patsubst src/%.cpp, build/%.o, $(SOURCES))
	g++ $^ $(VENDOR_LIBS) -o $@

build:
	mkdir -p $@

build/%.o: src/%.cpp
	$(CC) -c $(^) -o $(@) \
	-I vendor/aeg/src/ \
	-I vendor/bosh/src/ 

.PHONY: vendors
vendors:
	$(MAKE) -C vendor/aeg
	$(MAKE) -C vendor/bosh

.PHONY: clean
clean:
	$(MAKE) -C vendor/aeg clean
	$(MAKE) -C vendor/bosh clean
	$(RM) build/*
	$(RM) kafemashine
