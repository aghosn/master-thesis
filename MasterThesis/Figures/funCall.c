int f_from(a,b) {

	//Some code.
	//...
	//[Live values: c,d,e,f]
	if(OSR_Condition)
		goto OSR;
CONT:
//Some code.
//...
OSR:
	f_continuation(a, b, c, d, e, f);
}

int f_continuation(a,b, c, d, e, f) {
CONT:
	//Some code.
}