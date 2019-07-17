1.

Pre-procesador

``` gcc -E calculator.c -o calculator.pp.c ```

En esta etapa va incluir todas las librerias externas al programa

Assembler

``` gcc -S calculator.c -o calculator.asm ```

En esta etapa se genera todo el codigo assembler de nuestro archivo a compilar

Codigo de Maquina

``` gcc -c calculator.c -o calculator.o ```

En este punto se pasa todo a codigo binario

``` gcc -v calculator.o -o calculator.e ```

Linkeo

``` gcc -v calculator.o -o calculator.e ```

Resuelve dependecias externas

2. 

En esta etapa va incluir todas las librerias externas al programa, como los #include por ejmeplo

3.


´´´  000000000000003e T add_numbers
                 U _GLOBAL_OFFSET_TABLE_
0000000000000000 T main
                 U printf ´´´

4.

Aca tenemos la tabla de simpolos  de calculator.o

```
SYMBOL TABLE:
0000000000000000 l    df *ABS*	0000000000000000 calculator.pp.c
0000000000000000 l    d  .text	0000000000000000 .text
0000000000000000 l    d  .data	0000000000000000 .data
0000000000000000 l    d  .bss	0000000000000000 .bss
0000000000000000 l    d  .rodata	0000000000000000 .rodata
0000000000000000 l    d  .note.GNU-stack	0000000000000000 .note.GNU-stack
0000000000000000 l    d  .eh_frame	0000000000000000 .eh_frame
0000000000000000 l    d  .comment	0000000000000000 .comment
0000000000000000 g     F .text	000000000000003e main
000000000000003e g     F .text	0000000000000014 add_numbers
0000000000000000         *UND*	0000000000000000 _GLOBAL_OFFSET_TABLE_
0000000000000000         *UND*	0000000000000000 printf

```



