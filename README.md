# asb
Base library for parsing and recompiling .asb and (potentially) .ainb files. Currently I believe these two files use the same library for compression and decompression as the formatting looks incredibly similar between the two. The main difference is the magic.

# Assets

The assets directory contains various binary files and other extreneous data I've found that seems directly related to the handling of asb/ainb files. Any C++ files are a
raw copy of Ghidra's decompilation attempt of code from the executable with personal notes added for future reference.
