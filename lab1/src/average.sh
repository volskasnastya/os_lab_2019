#!/bin/bash
echo "число параметров $#"
sum=0
for param in $@
do
sum=$(($sum+$param))
done
avg=$(($sum/$#))
echo "среднее значение ${avg}"