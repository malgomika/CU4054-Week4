//#include <iostream>
//#include "GraphicsManager.h"	
//
//Room* room;
//Robot* robby;
//GraphicsManager* picture;
//
//int main() {
//
//	room = new Room(5);
//	robby = new Robot();
//	picture = new GraphicsManager(room, robby);
//
//	while (true) {
//		while (robby->ahead_is_colour(room, "yellow")) {
//			robby->move();
//			picture->draw();
//			if (robby->ahead_is_colour(room, "white")) {
//				robby->right();
//				if (robby->ahead_is_colour(room, "white")) {
//					robby->left();
//					robby->left();
//					picture->draw();
//				}
//			}
//			else if (robby->ahead_is_colour(room, "black")) {
//				robby->right();
//				picture->draw();
//			}
//
//		}
//		if (robby->ahead_is_colour(room, "green")) {
//			robby->move();
//			picture->draw();
//			break;
//		}
//	}
//
//	system("Pause");
//}