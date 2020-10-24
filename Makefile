PROYECTO=practica1
DESTDIR=/usr/local/bin
CFLAGS=-Wall
LFLAGS=-lm
COMPILER =gcc

all: $(PROYECTO) 

%.o:%.c
	$(COMPILER) -c $< $(CFLAGS)

$(PROYECTO): $(patsubst %.c,%.o,$(wildcard *.c))
	$(COMPILER) $^ -o $@ $(LFLAGS)

.PHONY: clean

install: all
	if [ ! -d $(DESTDIR) ] ; then \
		sudo mdkdir $(DESTDIR); \
	fi; \
		sudo cp $(PROYECTO) $(DESTDIR)

uninstall: 
	sudo rm $(DESTDIR)/$(PROYECTO)

clean:
	rm -f *.o $(PROYECTO)
	
keep: 
	rm -f *.o

edit:
	subl *.c

edith:
	subl *.h


