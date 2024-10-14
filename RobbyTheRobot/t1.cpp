//#include <iostream>
//#include "GraphicsManager.h"	
//
//Room* room;
//Robot* robby;
//GraphicsManager* picture;
//
//int main() {
//	
//	room = new Room(4);
//	robby = new Robot();
//	picture = new GraphicsManager(room, robby);
//
//	while (true) {
//		if (robby->ahead_is_colour(room, "yellow")) {
//			robby->move();
//			//picture->draw();
//		}
//		else if (robby->ahead_is_colour(room, "green")) {
//			robby->move();
//			picture->draw();
//			break;
//		}
//		else {
//			robby->right();
//			picture->draw();
//		}
//	}
//
//	system("Pause");
//}