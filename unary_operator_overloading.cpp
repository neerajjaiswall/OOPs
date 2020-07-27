class Integer {
public:
	int x;

	Integer operator++ () {
		Integer temp;
		temp .x= ++x;

		return temp;
	}

	Integer operator++ (int ) {			// to differentiate b/w pre and post increment we accept an int parameter
										// which is of no use just to avoid confusion 
		Integer temp;
		temp .x= x++;

		return temp;
	}
}

int main() {
	Integer a1, a2, a3;
	a1.x = 2;
	a2 = a1++;
	a3 = ++ a1;     		// due to post increment done above the value of a1.x is already increased by 1 and now again


}