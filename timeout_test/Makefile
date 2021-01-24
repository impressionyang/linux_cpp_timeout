object = main.o ctimeout.o
run_target = timeout_test
LFLAG = 

main : $(object)
	g++ -o $(run_target) $(object) $(LFLAG)

main.o : main.cpp
ctimeout.o : ctimeout.h ctimeout.cpp

.PHONY : clean
clean:
	rm $(object) 