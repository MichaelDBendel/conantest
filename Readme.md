# conantest

## Order to create packages

A->B->C

## Command

conan create . pr:a=../profiles/default

## Error

Missing dll indicated by "Error 3221225781 while executing" during the self.run() in packC.

See e.g. missing aa.dll (thats transitively needed by bb) with:

dumpbin /dependents ...exe

## Under Linux

Instead of building with the default profile (MSVC Windows) build packages with profiles/linux-gcc.

This will result in the exception: "..b/build/Release/unittest/ccTest: error while loading shared libraries: libaa.so: cannot open shared object file: No such file or directory".
