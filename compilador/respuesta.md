1.

Pre-procesador

``` gcc -E calculator.c -o calculator.pp.c ```

En esta etapa va incluir todas las librerias externas al programa, como los #include por ejmeplo

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



