int rotate_right (int num, int nbits) {
	int shift_r = num >> nbits;
	int shift_l = num << (32 - nbits);
	
	int rotate = (shift_r | shift_l);
	
	return rotate;
}
