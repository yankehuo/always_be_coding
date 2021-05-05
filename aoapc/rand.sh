#!/bin/bash
function rand(){
	begin=$1
	end=$2
	num=$(($RANDOM + 10000000000))
	echo $(($num % ($end - $begin + 1) + $begin))
}
for i in {1..50}
do
	rnd=$(rand 1 500000)
	echo $rnd
done

exit 0
