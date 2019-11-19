CC=gcc
CXX=g++

DEBUGFLAGS = -O2

CFLAGS = $(DEBUGFLAGS) 
LDFLAGS =  $(DEBUGFLAGS) 
CXX_LINK = $(CXX) -o $@ $(LDFLAGS) 


utilsources = memory.c file.c kpseemu-c.c 


bibsources = bibtex.c bibtexmain.c


utilobjects = $(utilsources:.c=.o)

bibobjects = $(bibsources:.c=.o)


bibtexlite: $(headers) $(bibobjects)  $(utilobjects)
	$(CXX_LINK) $(utilobjects) $(bibobjects) -lcurl


$(utilobjects): %.o: %.c
	$(CC) -c $(CFLAGS) -I. -I tex/ -I pdftexdir/  $< -o $@

$(bibobjects): %.o: %.c
	$(CC) -c $(CFLAGS) -I.  $< -o $@



clean:
	rm -f depend *.o bibtexlite
