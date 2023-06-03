# Build an Executable from Source Files

<br>

## in `CMakeLists.txt`

### Add a Target `build_exec` to Add an Executable File Using Source `a.c`

```
add_executable(build_exec a.c)
```

### Set Properties to the Target
#### Output Directory `bin`
#### Output File Name `foo`
```
set_target_properties(
    build_exec
        PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
            OUTPUT_NAME foo
)
```

<br>

## in CLI

### Generate a Buildsystem for `make`

Source Directory = Current Directory
<br>
Build Directory = `build`
```
cmake -G "Unix Makefiles" -S . -B build
```

or, if `make` is default, simply:

```
cmake -S . -B build
```

### Build the Executable
#### Using Generated `Makefile` Directly
```
cd build
make
```
#### Using `cmake --build`
```
cmake --build ./build
```
