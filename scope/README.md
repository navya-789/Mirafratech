FUNCTIONS:
---------
functions can be declared as static.
1.c: we can consider static as function declaration

2.c: we cannot considet perameters as static, because static variables stored in data and variables stored in stack so no connection between variable.

3.c: we cannot consider all static perameters and function data type as static that leads to storage class specifier error  

4.c: we can take static as function datatype and variables instde main as static.

STRUCTURES:
-----------

1s.c: we canot take static,const,auto inside structure as structure member.

2s.c: we can take structure as static datatype.

3s.c: we cannot take register as structure variable and member.

local : scope in blocks
global : variable default instalized value=0;
extern : we dont give any number while using extern datatype.
exter is used to access a variable from another file.
defined :variables with instalization.
declare: variable with out instalization.
if we instalized extern variable then memory will allocate.
extern use only declared not defined.
REGISTER:
stores variable in register
memory time will be reduced to use frequently used variable.

register variable can't declare globaly.why?
there are limited registers globel scop exist with in file but registet scope exist with in block.

no storage class can be declared as structure member, But we can declare structure as any storage class on structure name.
