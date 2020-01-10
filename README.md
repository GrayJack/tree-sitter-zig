# tree-sitter-zig

Zig grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

# TODOs
 * Async/await machinery
  - [X] Async call
  - [X] Await expression
  - [X] Suspend/Resume expression
  - [ ] Suspend/Resume block

# Testing the parser
## Install dependency
```sh
npm install
```

## Test a zig file
```sh
./node_modules/tree-sitter-cli/tree-sitter parse <ZIG_FIlE>
```

## References
[Zig master branch docs](https://ziglang.org/documentation/master/)
