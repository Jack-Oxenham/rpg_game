
all: 
	clang++ -std=c++11 -o RPG Player.cpp Enemy.cpp Combat.cpp Item.cpp RPG.cpp
	./RPG
clean:
	rm -f RPG
	rm -f *.o
	rm -f *.dSYM
	rm -f *.exe
	rm -f *.out
	rm -f *.log
	rm -f *.txt
	rm -f *.dat		

