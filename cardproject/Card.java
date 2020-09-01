package solitaire;

public class Card {
	private char suit;
	private char rank;
	
	public Card(char r, char s) {
		rank = r;
		suit = s;
	}
	
	public void display() {
		String value = (rank == 'T') ? "10" : Character.toString(rank);
		System.out.printf("%s%c", value, suit);
	}
		
	
	public int getValue() {
		if (rank == 'A') {
			return 1;
		}
		if (rank == 'J' || rank == 'Q' || rank =='K' || rank == 'T') {
			return 10;		
		}
		else {
			return Character.getNumericValue(rank);
		}
	}
}
