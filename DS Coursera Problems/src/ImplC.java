class ImplC{
	public static void main(String args[]) {
		try {
			Float f1=new Float("3.0");
			int x=f1.intValue();
			byte a=f1.byteValue();
			double c=f1.doubleValue();
			System.out.println(x+a+c);
		}catch(NumberFormatException e) {
			System.out.println("Bad");
		}
	}
}