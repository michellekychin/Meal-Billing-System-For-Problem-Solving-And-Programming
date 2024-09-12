// Problem solving assignment
// Define library function
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//sales & service tax
const double SST = 0.10;

//define meals price
const double price_1 = 9.00; //nasi lemak
const double price_2 = 8.00; //chicken rice
const double price_3 = 6.00; //masala dosa
const double price_4 = 5.00; //hamburger
const double price_5 = 12.00; //fish & chips
const double price_6 = 11.00; //grilled chicken chop
const double price_7 = 25.00; //grilled lamb chop

//define drinks price
const double price_8 = 4.90; //nescafe latte 
const double price_9 = 5.90; //matcha latte 
const double price_10 = 10.90; //vanilla milkshake
const double price_11 = 11.90; //matcha milkshake

//define food & drinks names
string mealname_1 = "Nasi Lemak";
string mealname_2 = "Chicken Rice";
string mealname_3 = "Masala Dosa";
string mealname_4 = "Hamburger";
string mealname_5 = "Fish & Chips";
string mealname_6 = "Grilled Chicken Chop";
string mealname_7 = "Grilled Lamb Chop";
string mealname_8 = "Nescafe Latte";
string mealname_9 = "Matcha Latte";
string mealname_10 = "Vanilla Milkshake";
string mealname_11 = "Matcha Milkshake";

// Define data types
int mealtype;
int quantity;
int total_customers = 0;
double total_sales = 0.0;
double total_SST_collected = 0.0;
double subtotal = 0.0;

// Function to display logo
void display_logo() {
	cout << "   WW      WW   EEEEE   LL        CCCCC     OOO      MM     MM   EEEEE         TTTTTTTTTT     OOO      \n ";
	cout << "  WW  WW  WW   EE      LL      CC        OO   OO    MMM   MMM   EE                TT       OO   OO    \n ";
	cout << "  WW  WW  WW   EEEEE   LL     CC        OO     OO   MM M M MM   EEEEE             TT      OO     OO   \n ";
	cout << "  WW W  W WW   EE      LL     CC        OO     OO   MM  M  MM   EE                TT      OO     OO   \n ";
	cout << "  WWW    WWW   EE      LL      CC        OO   OO    MM  M  MM   EE                TT       OO   OO    \n ";
	cout << "  WW      WW   EEEEE   LLLLLL    CCCCC     OOO      MM     MM   EEEEE             TT         OOO      \n\n\n\n ";

	cout << " \t\t\t\tHH     HH     &&&&        SSSSS     \n ";
	cout << " \t\t\t\tHH     HH    &&  &&      SS   SS    \n ";
	cout << " \t\t\t\tHHHHHHHHH     &&&&  &&    SSS       \n ";
	cout << " \t\t\t\tHH     HH    &&  &&&&       SSSS    \n ";
	cout << " \t\t\t\tHH     HH    &&   &&     SS    SS   \n ";
	cout << " \t\t\t\tHH     HH     &&&&  &&    SSSSS     \n\n\n\n ";

	cout << "  RRRRR    EEEEE   SSSSS   TTTTTTTTTT    AAA     UU   UU   RRRRR      AAA     NN     NN  TTTTTTTTTT        \n ";
	cout << "  RR  RR   EE     SS   SS      TT      AA   AA   UU   UU   RR  RR   AA   AA   NNN    NN      TT            \n ";
	cout << "  RR  RR   EEEEE   SSS         TT      AA   AA   UU   UU   RR  RR   AA   AA   NN NN  NN      TT            \n ";
	cout << "  RRRRR    EE        SSSS      TT      AAAAAAA   UU   UU   RRRRR    AAAAAAA   NN  NN NN      TT            \n ";
	cout << "  RR  RR   EE     SS    SS     TT      AA   AA   UU   UU   RR  RR   AA   AA   NN    NNN      TT            \n ";
	cout << "  RR   RR  EEEEE   SSSSS       TT      AA   AA     UUU     RR   RR  AA   AA   NN     NN      TT            \n ";

	cout << endl << endl << endl;

}

// Function to display the menu
void menu() {
	cout << "      MM     MM   EEEEE   NN     NN   UU   UU             \n ";
	cout << "     MMM   MMM   EE      NNN    NN   UU   UU              \n ";
	cout << "     MM M M MM   EEEEE   NN NN  NN   UU   UU              \n ";
	cout << "     MM  M  MM   EE      NN  NN NN   UU   UU              \n ";
	cout << "     MM  M  MM   EE      NN    NNN   UU   UU              \n ";
	cout << "     MM     MM   EEEEE   NN     NN     UUU                \n ";
	cout << endl;

	// Food menu & prices
	cout << "-------------------------------------------------- " << endl;
	cout << setw(28) << "FOOD" << endl;
	cout << "-------------------------------------------------- " << endl;
	cout << fixed << setprecision(2) << " 1 - " << mealname_1 << setw(30) << "RM " << price_1 << endl;
	cout << fixed << setprecision(2) << " 2 - " << mealname_2 << setw(28) << "RM " << price_2 << endl;
	cout << fixed << setprecision(2) << " 3 - " << mealname_3 << setw(29) << "RM " << price_3 << endl;
	cout << fixed << setprecision(2) << " 4 - " << mealname_4 << setw(31) << "RM " << price_4 << endl;
	cout << fixed << setprecision(2) << " 5 - " << mealname_5 << setw(27) << "RM" << price_5 << endl;
	cout << fixed << setprecision(2) << " 6 - " << mealname_6 << setw(19) << "RM" << price_6 << endl;
	cout << fixed << setprecision(2) << " 7 - " << mealname_7 << setw(22) << "RM" << price_7 << endl;
	cout << endl;

	// Drinks menu & prices
	cout << "-------------------------------------------------- " << endl;
	cout << setw(30) << "DRINKS " << endl;
	cout << "-------------------------------------------------- " << endl;
	cout << fixed << setprecision(2) << " 8 - " << mealname_8 << setw(27) << "RM " << price_8 << endl;
	cout << fixed << setprecision(2) << " 9 - " << mealname_9 << setw(28) << "RM " << price_9 << endl;
	cout << fixed << setprecision(2) << "10 - " << mealname_10 << setw(22) << "RM" << price_10 << endl;
	cout << fixed << setprecision(2) << "11 - " << mealname_11 << setw(23) << "RM" << price_11 << endl;
}

// Function to display customer's order details
void customer_order() {
	cout << endl;
	double subtotal;
	double sstamount;
	double totalamount;
	double amountpaid;

	while (true) {
		cout << "Please enter your order (Enter 0 to exit): " << endl;
		cin >> mealtype;

		if (mealtype == 0) {
			cout << endl;
			cout << "Thank You, Pls Come Again!!! " << endl;
			break; // Exit the loop when the user enters 0
		}

		double totalcharge = 0.0;

		switch (mealtype)
		{
		case 1:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_1 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_1 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM " << sstamount << endl;
			cout << "Total Amount: RM " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_1 * quantity;

			break;

		case 2:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_2 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_2 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;

			totalcharge = price_2 * quantity;
			break;

		case 3:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_3 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_3 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_3 * quantity;
			break;

		case 4:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_4 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_4 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_4 * quantity;
			break;

		case 5:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_5 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_5 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_5 * quantity;
			break;

		case 6:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_6 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_6 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_6 * quantity;
			break;

		case 7:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_7 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_7 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_7 * quantity;
			break;

		case 8:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_8 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_8 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_8 * quantity;
			break;

		case 9:
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_9 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_9 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_9 * quantity;
			break;

		case 10: 
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_10 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_10 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_10 * quantity;
			break;

		case 11: 
			cout << "Quantity: ";
			cin >> quantity;
			subtotal = price_11 * quantity;
			sstamount = subtotal * SST;
			totalamount = subtotal + sstamount;

			cout << "-------------------------------------------------- " << endl;
			cout << "\t\t  Order Details " << endl;
			cout << "-------------------------------------------------- " << endl;
			cout << "Order: " << mealname_11 << endl;
			cout << "Quantity: " << quantity << endl;
			cout << "Subtotal: RM  " << fixed << setprecision(2) << subtotal << endl;
			cout << "SST (" << (SST * 100) << "%): RM  " << sstamount << endl;
			cout << "Total Amount: RM  " << totalamount << endl;

			//calculate change 
			do {
				cout << "Enter Amount Paid: RM  ";
				cin >> amountpaid;

				if (amountpaid >= totalamount) {
					double change = amountpaid - totalamount;
					cout << "Change: RM " << fixed << setprecision(2) << change << endl;
				}
				else {
					cout << "Insufficient Payment. Please Pay The Correct Amount. " << endl << endl;
				}

			} while (totalamount > amountpaid);
			total_sales += subtotal;
			total_SST_collected += sstamount;
			total_customers++;
			totalcharge = price_11 * quantity;
			break;

		default:
			cout << "Invalid Order " << endl;
			break;
		}

	}

}

// Fuction for extra feature (customer request)
void customization()
{
	string comments; // A variable to store comments
	char customization; // A variable to store customization requests 

	cout << "Would you like to customize your order? (y/n): ";
	cin >> customization;

	if (customization == 'y' || customization == 'Y')
	{
		cout << "Enter your customization  requests (Enter 'done' when finished) : " << endl;
		cin.ignore(); // Clear the newline character from previous input

		string customizationInput;
		do
		{
			cout << "- ";
			getline(cin, customizationInput);

			if (customizationInput != "done")
			{
				comments += customizationInput + "\n"; // Append customization to comments
			}

		} while (customizationInput != "done");

	}

	if (customization == 'n' || customization == 'N')
	{
		cin.ignore(); // Clear the newline character from previous input
		getline(cin, comments);
	}

	//Display customization in order details
	switch (customization) {
	case 'y': case 'Y':
		cout << "Customization: \n" << comments << endl;
		break;

	case 'n': case 'N':
		cout << "Customization: - " << endl;
		break;

	default:
		cout << "Invalid. Please try again. " << endl;
	}
}

// Display daily sales report
void daily_report() {
	cout << endl;
	cout << "-------------------------------------------------- " << endl;
	cout << "\t     Daily Meal Sales Report" << endl;
	cout << "-------------------------------------------------- " << endl;
	cout << "Total Customers : " << total_customers << endl;
	cout << "Total Sales: RM  " << fixed << setprecision(2) << total_sales << endl;
	cout << "Total SST Collected: RM  " << total_SST_collected << endl;
	cout << "Total Amount Collected: RM  " << (total_sales + total_SST_collected) << endl;

	// display final ending msg
	cout << endl;
	cout << "End Of The Day!!!" << endl;
}

// Main function
int main() {
	display_logo();
	system("pause");
	system("cls");
	menu();
	do {
		customer_order();
	} while (mealtype != 0);
	customization();
	system("pause");
	system("cls");
	daily_report();

	return 0;
}