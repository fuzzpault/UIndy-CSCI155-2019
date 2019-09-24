CC=g++
CFLAGS=-c -Wall -ggdb -I.
LDFLAGS=
SOURCES=main.c singlelinklist.c
TESTS=single_test.cpp


#TODO: Need a more elegant way of specifying objects and tests
GTESTDIR=~/environment/googletest
OBJECTS=$(SOURCES:.cpp=.o)

FLAGS   = -Iinclude

#all: $(SOURCES) $(EXECUTABLE)
	

# These next lines do a bit of magic found from http://stackoverflow.com/questions/2394609/makefile-header-dependencies
# Essentially it asks the compiler to read the .cpp files and generate the needed .h dependencies.
# This way if any .h file changes the correct .cpp files will be recompiled
depend: .depend

.depend: $(SOURCES)
	rm -f ./.depend
	$(CC) $(CFLAGS) -MM $^ >> ./.depend;

include .depend
# End .h file magic

#$(EXECUTABLE): $(OBJECTS) 
#	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

#.cpp.o:
#	$(CC) $(CFLAGS) $< -o $@

clean:
#	rm -rf *o $(EXECUTABLE) test_executable
	rm -f ./.depend
	rm $(GTESTDIR)/libgtest.a
	rm $(GTESTDIR)/gtest-all.o

# Google test section
$(GTESTDIR)/libgtest.a: 
	$(CC) -isystem $(GTESTDIR) -I $(GTESTDIR) -pthread -c $(GTESTDIR)/gtest/gtest-all.cc -o $(GTESTDIR)/gtest-all.o
	ar -rv $(GTESTDIR)/libgtest.a $(GTESTDIR)/gtest-all.o

# This will also recompile if any source file is changed.
test_executable: $(GTESTDIR)/libgtest.a $(TESTS) depend
	$(CC) -isystem $(GTESTDIR) -pthread -ggdb $(TESTS) $(GTESTDIR)/gtest/gtest_main.cc $(GTESTDIR)/libgtest.a -o test_executable

test: test_executable
	./test_executable --gtest_print_time=0
	
