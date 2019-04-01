declare -a arr
function insert(){
	arr[$1]=$2
}
function remove_last(){
	unset arr[$1]
}
function display(){
	echo "${arr[*]}"
}
ch='y'
idx=0
while [ $ch == 'y' ]
do
	echo '1 to add , 2 to remove , 3 to display'
	read x
	if [ $x -eq 1 ]
	then 
		read val
		insert $idx $val
		idx=$((idx + 1))
	elif [ $x -eq 2 ]
	then
		echo 'which index?'
		read index
		remove_last $index
		idx=$((idx - 1))
	else
		display
	fi
	echo 'y to continue n to stop'
	read ch
done
