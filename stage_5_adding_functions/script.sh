# /bin/bash

clear
filename=astree
yacc -d $filename.y
echo "Yacc Done"
lex $filename.l
echo "Lex Done"
gcc lex.yy.c y.tab.c
echo "Compile Done"
./a.out input.txt
g++ label_trans.cpp
echo "Compilation Done"
./a.out
echo "Translation Done"



