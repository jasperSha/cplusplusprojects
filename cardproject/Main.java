package solitaire;

/*Orion Tang
CECS 274 - 05
Program 2 - Solitaire
March 3, 2020
*/

import java.util.Scanner;

public class Main {
	static boolean isPrime(int x) {
		int i;
		if (x == 1) {
			return false;
		} else {
			for (i = 2; i < x; i++) {
				if (x % i == 0) {
					return false;
				}
			}
			return true;
		}
	}

	@SuppressWarnings("resource")
	static int menu() {
		Scanner scan = new Scanner(System.in);
		System.out.println("\nWelcome to Solitaire Prime!" 
						 + "\n1) New Deck" 
						 + "\n2) Display Deck" 
						 + "\n3) Shuffle Deck"
				         + "\n4) Play Solitaire Prime"
						 + "\n5) Exit" 
				         + "\n6) Simulate 1000 Games");
		return scan.nextInt();
	}

	static void solitairePrime(Deck deck) {
		int piles = 0;
		int sum = 0;
		System.out.print("Playing Solitaire Prime!!!\n");
		while (deck.cardsLeft() > 0) {
			Card card = deck.deal();
			card.display();
			System.out.print(", ");
			sum += card.getValue();
			if (deck.cardsLeft() == 0) {
				if (isPrime(sum) == true) {
					piles ++;
					System.out.print("Prime: " + sum + "\n");
					System.out.println("\nWinner in " + piles + " piles!");
				} else {
					System.out.println("\n\nLoser");
				}
			} else if (isPrime(sum) == true) {
				System.out.print("Prime: " + sum + "\n");
				sum = 0;
				piles ++;
			}
		}
	}

	static boolean solitairePrimeSimulate(Deck deck) {
		int sum = 0;
		boolean win = true;
		while (deck.cardsLeft() > 0) {
			Card card = deck.deal();
			sum += card.getValue();

			if (deck.cardsLeft() == 0)
				if (isPrime(sum) == true)
					win = true;
				else
					win = false;

			else if (isPrime(sum) == true)
				sum = 0;
		}
		return win;
	}

	public static void main(String[] args) {
		boolean quit = false;
		Deck myDeck = new Deck();

		while (quit == false) {
			int option = menu();

			if (option == 1) {
				myDeck = new Deck();
				System.out.println("New deck created.");
			}
			if (option == 2) {
				myDeck.display();
			}
			if (option == 3) {
				myDeck.shuffle();
				System.out.println("Deck shuffled.");
			}
			if (option == 4) {
				solitairePrime(myDeck);
			}
			if (option == 5) {
				System.out.println("Exiting solitaire prime...");
				quit = true;
			}
			if (option == 6) {
				int win = 0;
				int lose = 0;
				for (int i = 0; i < 1000; i++) {
					myDeck = new Deck();
					myDeck.shuffle();
					if (solitairePrimeSimulate(myDeck) == true)
						win++;
					else
						lose++;
				}
				System.out.println("In 1000 games, you won " + win + " and lost " + lose);
			}
		}
	}
}
