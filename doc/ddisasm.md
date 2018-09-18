% DDISASM(1) DATALOG DISASSEMBLER
% GrammaTech Inc.
% September 2018

# NAME

ddisasm - disassembles executables and generates assembly code that is ready for re-assembly.

# SYNOPSIS

ddisasm [*options*...] *binary* 

# DESCRIPTION

The datalog disassembler `ddisasm` executable disassembles a binary
(*binary*) and produces (*binary*).gtirb , an intermediate
representation for binary analysis (See [GTIRB](https://github.com/grammatech/gtirb)).
The [GTIRB pretty printer](https://github.com/grammatech/gtirb-pprinter) may then be
used to pretty print the GTIRB to reassemblable assembly code.

Currently `ddisasm` supports x64 executables in ELF format.


# OPTIONS

-d,--debug
:   print debugging information

-o,--output *FILE*
:   name of the output gtirb file (by default it is (*binary*).gtirb)

-s,--section *SECTION-NAME*
:   consider the *SECTION-NAME* as a code section for the disassembly. By default
    a fixed set of sections are considered. This option allows
	considering additional sections.

-d,--data-section *SECTION-NAME*
:   consider the *SECTION-NAME* as a data section for the disassembly. By default
    a fixed set of sections are considered. This option allows
	considering additional sections.

-p,--profile *FILE*
:   generate souffle profiling information into *FILE*. This profiling information
    can be used to generate a report using `souffle-profile`

-j,--jobs *NUM*
:   number of jobs used for the disassembly process. This option takes effect
    only if `ddisasm` has been compiled with support for openmp.

-V,--verbose *NUM*
:   verbosity level 0-3


# EXAMPLES

*ddisasm* ./examples/ex1/ex

# SEE ALSO

`gtirb-pprinter` (1).
The `gtirb-pprinter` prints gtirb files as assembly code.

`souffle-profile` (1).
`souffle-profile` reads a profiling information file generated by
`ddisasm` and generates graphs and statistics about the running time
of the different phases of the disassembly.