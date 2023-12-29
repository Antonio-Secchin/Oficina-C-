main: main.o pessoa.o livro.o emprestimo.o
	g++ -o main main.o pessoa.o livro.o emprestimo.o

main.o: main.cpp livro.h pessoa.h emprestimo.h
	g++ -c -o main.o main.cpp

pessoa.o: pessoa.cpp pessoa.h
	g++ -c -o pessoa.o pessoa.cpp

livro.o: livro.cpp livro.h pessoa.h
	g++ -c -o livro.o livro.cpp

emprestimo.o: emprestimo.cpp emprestimo.h livro.h pessoa.h
	g++ -c -o emprestimo.o emprestimo.cpp

clean:
	rm *.o
	rm main
	