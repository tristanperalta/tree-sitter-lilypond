# tree-sitter-lilypond

A [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for [LilyPond](https://lilypond.org/) music notation.

## Status

**Work in Progress** - This grammar is under active development.

Currently supported:
- Version statements (`\version "2.24.0"`)
- Header blocks (`\header { ... }`)
- Book blocks (`\book { ... }`)
- Comments (`% line comment`)
- String assignments

## Installation

### Neovim (nvim-treesitter)

Add to your nvim-treesitter configuration:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.lilypond = {
  install_info = {
    url = "/home/tristan/workspace/tree-sitter-lilypond",
    files = { "src/parser.c" },
    branch = "main",
  },
  filetype = "lilypond",
}
```

Then run `:TSInstall lilypond`.

### Helix

Add to `languages.toml`:

```toml
[[language]]
name = "lilypond"
scope = "source.ly"
file-types = ["ly", "ily"]
roots = []

[[grammar]]
name = "lilypond"
source = { git = "https://github.com/YOUR_USERNAME/tree-sitter-lilypond", rev = "main" }
```

Then run `hx --grammar fetch` and `hx --grammar build`.

## Development

### Prerequisites

- Node.js 18+
- npm

### Setup

```bash
git clone https://github.com/tristanperalta/tree-sitter-lilypond
cd tree-sitter-lilypond
npm install --ignore-scripts
```

### Commands

```bash
# Generate parser from grammar.js
npx tree-sitter generate

# Run tests
npx tree-sitter test

# Parse a file
npx tree-sitter parse example.ly

# Parse with AST output
npx tree-sitter parse example.ly --debug
```

## Grammar Reference

Based on LilyPond 2.24.4 source:
- Parser: `lily/parser.yy`
- Lexer: `lily/lexer.ll`
