/**
	@Oswaldo
	-All relative to collision must be here
*/

#pragma once

namespace collision {
	/**
	float { x, y, width, height }
		x & y position
		width & height dimensions
	*/
	struct boundingBox
	{
		float x;
		float y;
		float width;
		float height;
	};
	/**
		parameters
		(
			boundingBox *X,
			boundingBox *Y
		)
		return
			-true if hitting or colliding.
			-false otherwise.
	*/
	bool isColliding(boundingBox *X, boundingBox *Y) {
		bool r;
		boundingBox *nearT = (X->x < Y->x) ? X : Y;
		boundingBox *farT = (X->x > Y->x) ? X : Y;

		r = (nearT->x + nearT->width >= farT->x);
		nearT = (X->y < Y->y) ? X : Y;
		farT = (X->y > Y->y) ? X : Y;

		return r ? r : (nearT->y + nearT->height >= farT->y);
	}

}