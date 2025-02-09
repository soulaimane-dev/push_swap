#!/bin/bash

GREEN="\033[92m"
RED="\033[91m"

from=-9999
to=9999
quantity=500

while true
do
	numbers=$(seq $from $to | sort -R | head -n $quantity | paste -sd" " -)
	ins=$(../push_swap/push_swap $numbers | wc -l | tr -d " ")
	if [ $ins -ge 5500 ]
	then
		echo -e "${RED}$ins"
		echo -e "${RED} squence ${numbers}"
		exit
	else
		echo -e "${GREEN}$ins"
	fi
	sleep 0.1
done
