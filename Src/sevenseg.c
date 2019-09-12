#include "sevenseg.h"

void display(int position, int number) {
	ALL_OFF
	;
	int ok = 1;
	switch (position) {
	case 1:
		D1_ON;
		break;
	case 2:
		D2_ON;
		break;
	case 3:
		D3_ON;
		break;
	case 4:
		D4_ON;
		break;
	default:
		ok = 0;		//secure. Dont turn LEDs, if position is different than 1-4
	}
	if (ok == 1) {
		switch (number) {
		case 0:
			SA_ON;
			SB_ON;
			SC_ON;
			SD_ON;
			SE_ON;
			SF_ON;
			break;
		case 1:
			SB_ON;
			SC_ON;
			break;
		case 2:
			SA_ON;
			SB_ON;
			SG_ON;
			SE_ON;
			SD_ON;
			break;
		case 3:
			SA_ON;
			SB_ON;
			SG_ON;
			SC_ON;
			SD_ON;
			break;

		case 4:
			SB_ON;
			SG_ON;
			SF_ON;
			SC_ON;
			break;
		case 5:
			SA_ON;
			SF_ON;
			SG_ON;
			SC_ON;
			SD_ON;
			break;

		case 6:
			SA_ON;
			SF_ON;
			SG_ON;
			SC_ON;
			SE_ON;
			SD_ON;
			break;

		case 7:
			SA_ON;
			SB_ON;
			SC_ON;
			break;

		case 8:
			SA_ON;
			SB_ON;
			SC_ON;
			SD_ON;
			SE_ON;
			SF_ON;
			SG_ON;
			break;

		case 9:
			SA_ON;
			SB_ON;
			SC_ON;
			SD_ON;
			SG_ON;
			SF_ON;
			break;

		case 10://F letter(force mode)
			SA_ON;
			SG_ON;
			SE_ON;
			SF_ON;
			break;

		case 11://O letter(ondemand mode)
			SA_ON;
			SB_ON;
			SC_ON;
			SD_ON;
			SE_ON;
			SF_ON;
			break;


		}
	}
	WAIT;
	ALL_OFF;
}

void display_twice(int position, int number) {
	int first_digit;
	int second_digit;
	ALL_OFF
	;
//brake a number into two digits
	if (number <= 9) {
		first_digit = 0;
		second_digit = number;
	}
	if ((number >= 10) && (number <= 19)) {		//check if number is from range
		first_digit = 1;
		second_digit = number - 10;
	}
	if ((number >= 20) && (number <= 29)) {		//check if number is from range
		first_digit = 2;
		second_digit = number - 20;
	}
	if ((number >= 30) && (number <= 39)) {		//check if number is from range
		first_digit = 3;
		second_digit = number - 30;
	}
	if ((number >= 40) && (number <= 49)) {		//check if number is from range
		first_digit = 4;
		second_digit = number - 40;
	}
	if ((number >= 50) && (number <= 59)) {		//check if number is from range
		first_digit = 5;
		second_digit = number - 50;
	}

	display(position, first_digit);
	display(position + 1, second_digit);

}
