#!/bin/bash

################ VARIABLES GLOBALES ################

i=1
GREEN="\033[38;5;113m"
RED="\033[38;5;160m"
GREY="\033[38;5;109m"
ORANGE="\033[38;5;208m"
WHITE="\033[38;5;15m"
CYAN="\033[38;5;51m"
PURPLE="\033[38;5;135m"
RESET="\033[0m"

################ FONCTIONS ################

convert()
{
    for value in $@
    do
        echo ""
        echo -e "$PURPLE>> Test $ORANGE$i$PURPLE for value $ORANGE$value$RESET"
        ./convert $value
        let "i+=1"
    done
}


################ SCRIPT ################

make

convert "'A'" "'$'" "'@'"
convert "0" "-0" "42" "-42" "2147483647" "-2147483648" "2147483648" "-2147483649"
convert "42.001" "-42.001" "42.42424242" "-42.42424242"
convert "42.42f" "0.0f" "-1.0f" "-3.0001f"
convert "9999999999999999999" "9999999999999999999.99999999999999999999"
convert "99999999999999999999999999999999999999999999999999999999999999999999.99999999999999999999"
convert "nan" "infinity" "-infinity"
convert "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
convert "test" "A" "\b"