BLUE="\033[38;5;69m"
GREEN="\033[38;5;113m"
PURPLE="\033[38;5;165m"
RESET="\033[0m"

echo "premiere ligne\nseconde ligne\ntroisieme ligne" > file
echo "\n\n$PURPLE==================== TEST KO ====================$RESET"
echo "$BLUE============== WITHOUT ARGS ==============$RESET"
./replace
echo "\n$BLUE============== WRONG FILENAME ==============$RESET"
./replace error test test
echo "\n$BLUE============== EMPTY ARG[2] ==============$RESET"
./replace file "" test
echo "\n$BLUE============== EMPTY ARG[3] ==============$RESET"
./replace file test ""

echo "\n\n$PURPLE==================== TEST OK ====================$RESET"
echo "premiere ligne\nseconde ligne\ntroisieme ligne" > file
echo "$BLUE============== FILE BEFORE REPLACE ==============$RESET"
cat file
./replace file "ligne" "test"
echo "\n$GREEN=============== FILE AFTER REPLACE ==============$RESET"
cat file

echo "\n\n$PURPLE==================== TEST OK ====================$RESET"
echo "premiere ligne\nseconde ligne\ntroisieme ligne" > file
echo "$BLUE============== FILE BEFORE REPLACE ==============$RESET"
cat file
./replace file "ligne" "testlignetest"
echo "\n$GREEN=============== FILE AFTER REPLACE ==============$RESET"
cat file