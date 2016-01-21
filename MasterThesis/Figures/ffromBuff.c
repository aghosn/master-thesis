int f_from(a,b) {
//Some code.
//...

	if(OSR_CONDITION)
		goto OSR;
CONT:
//...

OSR:
//Saves the state
//into a shared buffer.
	save_state(); 
	return f_continuation(a,b);
}

int f_continuation(a,b) {
//Loads the state
//from the shared buffer.	
	load_state(); 
CONT:
//Equivalent for CONT.
//...
}