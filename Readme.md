# conantest

## Order to create packages

A->B->C

## Command

conan create . pr:a=../profiles/default

## Error

Missing dll indicated by "Error 3221225781 while executing" during the self.run() in packC.

See e.g. missing aa.dll (thats transitively needed by bb) with:

dumpbin /dependents ...exe
