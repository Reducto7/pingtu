#include <bangtal.h>
#include <stdio.h>
#include <time.h>

SceneID scene;
ObjectID pt[8], left, right, up, down, start, restart, end, blank;

int blankX = 480, blankY = 0;
int a, b;
int ptX[8] = { 0, 240, 480, 0, 240, 480, 0, 240 };
int ptY[8] = { 480, 480, 480, 240, 240, 240, 0 ,0 };

void startGame() {
	hideObject(start);
	showObject(up);
	showObject(down);
	showObject(left);
	showObject(right);
	showObject(restart);
}

void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == start) {
		showObject(end);
		startGame();
	}
	else if (object == restart) {
		locateObject(blank, scene, blankX = 480, blankY = 0);
		locateObject(pt[0], scene, ptX[0] = 0, ptY[0] = 480);
		locateObject(pt[1], scene, ptX[1] = 240, ptY[1] = 480);
		locateObject(pt[2], scene, ptX[2] = 480, ptY[2] = 480);
		locateObject(pt[3], scene, ptX[3] = 0, ptY[3] = 240);
		locateObject(pt[4], scene, ptX[4] = 240, ptY[4] = 240);
		locateObject(pt[5], scene, ptX[5] = 480, ptY[5] = 240);
		locateObject(pt[6], scene, ptX[6] = 0, ptY[6] = 0);
		locateObject(pt[7], scene, ptX[7] = 240, ptY[7] = 0);
	}
	else if (object == up && blankY != 480 ) {
		if (ptX[0] == blankX && ptY[0] == blankY + 240) {
			locateObject(pt[0], scene, blankX, blankY);
		}
		else if (ptX[1] == blankX && ptY[1] == blankY + 240) {
			locateObject(pt[1], scene, blankX, blankY);
		}
		else if (ptX[2] == blankX && ptY[2] == blankY + 240) {
			locateObject(pt[2], scene, blankX, blankY);
		}
		else if (ptX[3] == blankX && ptY[3] == blankY + 240) {
			locateObject(pt[3], scene, blankX, blankY);
		}
		else if (ptX[4] == blankX && ptY[4] == blankY + 240) {
			locateObject(pt[4], scene, blankX, blankY);
		}
		else if (ptX[5] == blankX && ptY[5] == blankY + 240) {
			locateObject(pt[5], scene, blankX, blankY);
		}
		else if (ptX[6] == blankX && ptY[6] == blankY + 240) {
			locateObject(pt[6], scene, blankX, blankY);
		}
		else if (ptX[7] == blankX && ptY[7] == blankY + 240) {
			locateObject(pt[7], scene, blankX, blankY);
		}
		blankY = blankY + 240;
		locateObject(blank, scene, blankX, blankY);
	}
	else if (object == down && blankY != 0) {
		if (ptX[0] == blankX && ptY[0] == blankY - 240) {
			locateObject(pt[0], scene, blankX, blankY);
		}
		else if (ptX[1] == blankX && ptY[1] == blankY - 240) {
			locateObject(pt[1], scene, blankX, blankY);
		}
		else if (ptX[2] == blankX && ptY[2] == blankY - 240) {
			locateObject(pt[2], scene, blankX, blankY);
		}
		else if (ptX[3] == blankX && ptY[3] == blankY - 240) {
			locateObject(pt[3], scene, blankX, blankY);
		}
		else if (ptX[4] == blankX && ptY[4] == blankY - 240) {
			locateObject(pt[4], scene, blankX, blankY);
		}
		else if (ptX[5] == blankX && ptY[5] == blankY - 240) {
			locateObject(pt[5], scene, blankX, blankY);
		}
		else if (ptX[6] == blankX && ptY[6] == blankY - 240) {
			locateObject(pt[6], scene, blankX, blankY);
		}
		else if (ptX[7] == blankX && ptY[7] == blankY - 240) {
			locateObject(pt[7], scene, blankX, blankY);
		}
		blankY = blankY - 240;
		locateObject(blank, scene, blankX, blankY);
	}
	else if (object == left && blankX != 0) {
		if (ptX[0] == blankX - 240 && ptY[0] == blankY) {
			locateObject(pt[0], scene, blankX, blankY);
		}
		else if (ptX[1] == blankX - 240 && ptY[1] == blankY) {
			locateObject(pt[1], scene, blankX, blankY);
		}
		else if (ptX[2] == blankX - 240 && ptY[2] == blankY) {
			locateObject(pt[2], scene, blankX, blankY);
		}
		else if (ptX[3] == blankX - 240 && ptY[3] == blankY) {
			locateObject(pt[3], scene, blankX, blankY);
		}
		else if (ptX[4] == blankX - 240 && ptY[4] == blankY) {
			locateObject(pt[4], scene, blankX, blankY);
		}
		else if (ptX[5] == blankX - 240 && ptY[5] == blankY) {
			locateObject(pt[5], scene, blankX, blankY);
		}
		else if (ptX[6] == blankX - 240 && ptY[6] == blankY) {
			locateObject(pt[6], scene, blankX, blankY);
		}
		else if (ptX[7] == blankX - 240 && ptY[7] == blankY) {
			locateObject(pt[7], scene, blankX, blankY);
		}
		blankX = blankX - 240;
		locateObject(blank, scene, blankX, blankY);
	}
	else if (object == right && blankX != 480) {
		if (ptX[0] == blankX + 240 && ptY[0] == blankY) {
			locateObject(pt[0], scene, blankX, blankY);
		}
		else if (ptX[1] == blankX + 240 && ptY[1] == blankY) {
			locateObject(pt[1], scene, blankX, blankY);
		}
		else if (ptX[2] == blankX + 240 && ptY[2] == blankY) {
			locateObject(pt[2], scene, blankX, blankY);
		}
		else if (ptX[3] == blankX + 240 && ptY[3] == blankY) {
			locateObject(pt[3], scene, blankX, blankY);
		}
		else if (ptX[4] == blankX + 240 && ptY[4] == blankY) {
			locateObject(pt[4], scene, blankX, blankY);
		}
		else if (ptX[5] == blankX + 240 && ptY[5] == blankY) {
			locateObject(pt[5], scene, blankX, blankY);
		}
		else if (ptX[6] == blankX + 240 && ptY[6] == blankY) {
			locateObject(pt[6], scene, blankX, blankY);
		}
		else if (ptX[7] == blankX + 240 && ptY[7] == blankY) {
			locateObject(pt[7], scene, blankX, blankY);
		}
		blankX = blankX + 240;
		locateObject(blank, scene, blankX, blankY);
	}
	else if ((object == up && blankY == 480) || (object == down && blankY == 0) || (object == left && blankX == 0) || (object == right && blankX == 480)) {
	    showMessage("이쪽으로 이동할 수 없어");
    }
	else if (object == end) {
	    endGame();
    }
}


int main()
{

	setMouseCallback(mouseCallback);

	scene = createScene("0.jpg");

	pt[0] = createObject("1.png");
	locateObject(pt[0], scene, 0, 480);
	showObject(pt[0]);

	pt[1] = createObject("3.png");
	locateObject(pt[1], scene, 240, 480);
	showObject(pt[1]);

	pt[2] = createObject("6.png");
	locateObject(pt[2], scene, 480, 480);
	showObject(pt[2]);

	pt[3] = createObject("5.png");
	locateObject(pt[3], scene, 0, 240);
	showObject(pt[3]);

	pt[4] = createObject("2.png");
	locateObject(pt[4], scene, 240, 240);
	showObject(pt[4]);

	pt[5] = createObject("9.png");
	locateObject(pt[5], scene, 480, 240);
	showObject(pt[5]);

	pt[6] = createObject("4.png");
	locateObject(pt[6], scene, 0, 0);
	showObject(pt[6]);

	pt[7] = createObject("8.png");
	locateObject(pt[7], scene, 240, 0);
	showObject(pt[7]);

	left = createObject("left.png");
	locateObject(left, scene, 800, 400);

	right = createObject("right.png");
	locateObject(right, scene, 1000, 400);

	up = createObject("up.png");
	locateObject(up, scene, 900, 500);

	down = createObject("down.png");
	locateObject(down, scene, 900, 300);

	start = createObject("start.png");
	locateObject(start, scene, 880, 175);
	showObject(start);

	restart = createObject("restart.png");
	locateObject(restart, scene, 880, 215);

	end = createObject("end.png");
	locateObject(end, scene, 880, 150);

	startGame(scene);

}