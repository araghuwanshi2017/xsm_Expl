# /bin/bash

filename=astree
echo yacc -d $filename.y
echo lex $filename.l
echo gcc lex.yy.c y.tab.c
echo ./a.out

echo g++ label_trans.cpp
echo ./a.out


