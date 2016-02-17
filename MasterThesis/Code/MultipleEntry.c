fbase <- function (a,b) {
PROLOG:
	if (OSR_LABEL == 0001)
		goto OSR1
	else if (OSR_LABEL == 0002)
		goto OSR2
	else 
		goto ENTRY
ENTRY: 
	//The regular entry code
	//...
CONT1: 
	//Some point in the code
	//that corresponds to osr1.
	//...
CONT2: 
	//Some point in the code
	//that corresponds to osr2.
	//...
OSR1:
	load_state1()
	goto CONT1
OSR2:
	load_state2()
	goto CONT2
}