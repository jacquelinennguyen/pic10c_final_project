#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Let me generate a story for you!\n";
	string noun1, noun2, noun3, noun4, noun5, noun6, noun7, fem, pl_noun1, pl_noun2, verb, person_in_room, body1, pl_body, adj1, adj2, liquid;
	cout << "Enter 7 nouns, separated by spaces: ";
	cin >> noun1 >> noun2 >> noun3 >> noun4 >> noun5 >> noun6 >> noun7;
	cout << "Enter a woman's name: ";
	cin >> fem;
	cout << "Enter 2 plural nouns, separated by a space: ";
	cin >> pl_noun1 >> pl_noun2;
	cout << "Enter a verb: ";
	cin >> verb;
	cout << "Enter the name of a person in the room: ";
	cin >> person_in_room;
	cout << "Enter a body part: ";
	cin >> body1;
	cout << "Enter a body part that's plural: ";
	cin >> pl_body;
	cout << "Enter 2 adjectives, separated by a space: ";
	cin >> adj1 >> adj2;
	cout << "Enter the name of a liquid: ";
	cin >> liquid;
	cout << endl << "It was Thanksgiving, and the scent of succulent roast "
		<< noun1 << " wafted through my house. \"" << person_in_room << ", it's my time to "
		<< verb << "!\" my mother called. I couldn't wait to get my "
		<< body1 << " on that " << adj1 << " Thanksgiving meal. My family "
		<< "sat around the dining room " << noun2 << ". The table was laid "
		<< "out with every kind of " << noun3 << ". There was a basket of hot "
		<< "buttered " << pl_noun1 << " and glasses of sparkling " << liquid
		<< ". The " << adj2 << " turkey sat, steaming, next to a tureen of "
		<< noun4 << " gravy. A bowl of ruby-red " << noun5 << " sauce, a sweet-"
		<< noun6 << " casserole, and a dish of mashed " << pl_noun2 << " tempted "
		<< "my tastebuds. But the dish I looked forward to the most was Grandma "
		<< fem << "'s famous " << noun7 << " pie. Thanksgiving is my favorite "
		<< "holiday, " << pl_body << " down." << endl;
	return 0;
}