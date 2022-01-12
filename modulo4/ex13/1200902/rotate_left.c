int rotate_left (int num, int nbits) {
	int shift_l = num << nbits;
	int shift_r = num >> (32 - nbits);
	
	int rotate = (shift_l | shift_r);
	
	return rotate;
}
