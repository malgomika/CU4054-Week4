//#include <iostream>
//
//int main() {
//	int userAge;
//	int peopleAmt = 0;
//	double totalCost;
//	const double U16cost = 2.50;
//	const double O65cost = 3.00;
//	const double NormCost = 5.00;
//	const double DiscCost = 0.30;
//
//	std::cout << "HIGHBURY SWIMMING POOL\n______________\n \nUnder 16's - £2.50\nOver 65's - £3.00\nNormal Price - £5.00\n \nHow old are each of the visitors? - " << std::endl;
//
//	while (true) {
//		std::cin >> userAge;
//		if (userAge == -1) {
//			break;
//		}
//		else if (userAge < 0) {
//			std::cout << "Invalid Age. Type -1 to exit." << std::endl;
//		}
//		else if (userAge <= 16) {
//			totalCost += U16cost;
//		}
//		else if (userAge >= 65) {
//			totalCost += O65cost;
//		}
//		else {
//			totalCost += NormCost;
//		}
//		peopleAmt++;
//	}
//
//	if (peopleAmt >= 6) {
//		totalCost *= DiscCost;
//	}
//
//	std::cout << "There are " << peopleAmt << " people in your group." << std::endl;
//	std::cout << "Your total cost is... " << totalCost;
//}