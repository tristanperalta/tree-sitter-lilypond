PARSER_DIR = ~/.local/share/nvim/lazy/nvim-treesitter/parser
QUERY_DIR = ~/.config/nvim/queries/lilypond

.PHONY: all generate build install clean

all: build

generate:
	npx tree-sitter generate

build: generate
	cc -shared -o lilypond.so -I./src src/parser.c -fPIC

install: build
	mkdir -p $(PARSER_DIR)
	mkdir -p $(QUERY_DIR)
	ln -sf $(CURDIR)/lilypond.so $(PARSER_DIR)/lilypond.so
	ln -sf $(CURDIR)/queries/highlights.scm $(QUERY_DIR)/highlights.scm

test: generate
	npx tree-sitter test

clean:
	rm -f lilypond.so
