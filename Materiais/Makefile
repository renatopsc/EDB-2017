#Variaveis para subdiretorio
BINDIR = bin
SRCDIR = src
INCLUDEDIR = include
APPDIR = application
OBJDIR = build
TESTDIR = test

#Variavel para o compilador g++
CC = g++
#Variavel para flags de compilacao
CFLAGS = -O3 -Wall -ansi -pedantic -I $(INCLUDEDIR)
#Variavel para diretivas do ligador, busca bibliotecas em diretorio especificado(sem uso para o exemplo)
LDFLAGS =
#Variavel para gerar executavel
BIN = ${BINDIR}/lab00
#Variavel para acessar o diretorio com o arquivo fonte da aplicacao
APP = ${APPDIR}/lab00.cpp

#Variavel que usa wildcard para especificar e pegar a lista dos arquivos fontes no diretorio src
SRC = $(wildcard $(SRCDIR)/*.cpp)
#Variavel que faz uso da funcao patsubst para gerar o arquivo objeto para o diretorio build pegando arquivos do diretorio src
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))
#Variavel que gera o arquivo objeto para o diretorio build pegando os arquivos fonte do diretorio application
APPOBJ = $(patsubst $(APPDIR)/%.cpp,$(OBJDIR)/%.o,$(APP))

#Pega a lista dos arquivos no diretorio test
_TESTS = $(wildcard $(TESTDIR)/*.cpp)
#Gera os arquivos objetos  de test
TESTS = $(patsubst %.cpp,%,$(_TESTS))
#Alvo padrão, seus pre requisitos e comandos
$(BIN): $(OBJS) $(APPOBJ)
	$(CC) -o $(BIN) $(APPOBJ) $(OBJS) $(CFLAGS) $(LDFLAGS)
#Regras de compilacao
$(APPOBJ): $(APP)
	$(CC) -c -o $@ $< $(CFLAGS)
    
${OBJDIR}/%.o: $(SRCDIR)/%.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(TESTS) 
	$(info ************  Testes concluídos com sucesso! ************)

$(TESTDIR)/t_%: $(TESTDIR)/t_%.cpp $(OBJS)
	$(CC) -o $@ $< $(OBJS) $(CFLAGS) $(LDFLAGS)
	$@
#Alvo para limpeza de arquivos gerados pela compilacao
clean:
	rm -f $(BIN) $(OBJS) $(APPOBJ)
	rm -f $(TESTS)
