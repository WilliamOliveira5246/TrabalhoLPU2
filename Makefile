all:
	g++ -o main bancoDAO.cpp funcionario.cpp geral.cpp main.cpp pessoa.cpp professor.cpp tecnicoADM.cpp
	./main
