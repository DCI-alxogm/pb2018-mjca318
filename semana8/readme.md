Esta semana vimos el tema de "apuntadores", y con base a ello realizamos 7 ejemplos, de los cuales algunos contenian errores que tenian que ser  corregidos por nosotros.

Ejemplo 1 "ejemplo1": este fue uno de los ejemplos mas sencillos, el cual contenia apuntadores adentro de arreglos, de modo que para pasar al siguiente elemento de nuestro arreglo teniamos que hacer un ptr++.

Ejemplo 2 "ejemplo2": este ejemplo consisitió en el uso de la función "malloc", la cual reserva la memoria y podemos utilizarla en forma de areglo. Finalmente para expresarla, o "liberarla" tuvimos que usar un free(ptr).

Ejemplo 3 "ejemplo3": en este ejemplo trabajamos con la función "calloc", la cual era basicamente igual a la anterior, o sea para reservar memoria.

Ejemplo 4 "ejemplo4": en este ejemplo vimos la función "realloc", la cual sirve para indicar o redactar el tamaño de un arreglo a utilizar.

Ejemplo 5 "ejemplo5": este ejemplo trató del como podemos utilizar los arreglos para crear espacios de memoria los cuales se reservan como apuntadores.

Ejemplo 6 "ejemplo6": este ejemplo es basicamente lo inverso al ejemplo anterior.

Ejemplo 7: este ejemplo no lo podia compilar de la forma en la que estaba escrito en el ejemplo; por lo cual en la parte de num=(int*) malloc(num*sizeof(int)), cambie el num*sizeof por 6*sizeof debido a que, de todas formas el num iba a tomar 6 valores.
