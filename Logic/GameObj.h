/*
 * GameObj.h
 *
 *  Created on: 2013-05-04
 *      Author: Samuel
 */

#ifndef GAMEOBJ_H_
#define GAMEOBJ_H_

#include <MAUtil/String.h>

using namespace MAUtil;

class GameObj{
	enum Direction{
		UP,
		DOWN,
		LEFT,
		RIGHT
	};

	protected:
		int x;						//x position
		int y;						//y position
		int width;					//width of obj(for image)
		int height;					//height of obj(for image)
		int state;
		int direction;
		String name;

		GameObj interactObject;

	public:

		//GameObj(String objName, int px, int py, GameWorld gmWorld);
		GameObj(String objName, int px, int py);

		//Direction getDirection();
		//void setDirection(Direction direction);

		int getHeight() const;
		void setHeight(int height);

		int getWidth() const;
		void setWidth(int width);

		int getX() const;
		void setX(int x);

		int getY() const;
		void setY(int y);

		String getName() const;
		void setName(String name);

		virtual void update();
};




#endif /* GAMEOBJ_H_ */
