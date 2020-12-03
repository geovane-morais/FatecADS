#!/bin/bash

cd src

gcc -c funcaoExtra.c -o funcaoExtra.o
gcc -c funcao.c      -o funcao.o  
gcc -c derivada.c    -o derivada.o 
gcc -c integral.c    -o integral.o 
gcc -c matriz.c      -o matriz.o   
gcc -c ordenar.c     -o ordenar.o 
gcc -c main.c        -o main.o 

gcc funcaoExtra.o 
    funcao.o 
    derivada.o 
    integral.o 
    matriz.o 
    ordenar.o 
    main.o  
    -o ../linux/main -lm  

rm *.o                             

cd ../linux/
./main
