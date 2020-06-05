#include<bangtal.h>
#include<string.h>
#include<stdio.h>

SceneID scene1;
ObjectID coin[20][14], back;
int y[20] = {
	656, 624, 591, 558, 526, 495, 464, 432, 400, 368, 334, 302, 270, 237, 205, 172, 140, 108, 75, 42
};
int x[14] = {
	115, 154, 193, 232, 271, 310, 349, 418, 457, 498, 538, 577, 617, 657
};
int X[4] = {
	224, 290, 485, 555
};

int main(){
	int i, j=0;
	scene1 = createScene("packman", "background.png");
	
	for (i = 0; i < 5; i++) {
		coin[i][j] = createObject("coin.png");
		locateObject(coin[i][j], scene1, x[i], y[j]);
	    showObject(coin[i][j]);
	    scaleObject(coin[i][j], 0.5f);
	}
	back = createObject("틀3.png");


	
	
	locateObject(back, scene1, 105, 35);
	
	scaleObject(back, 0.64f);
	startGame(scene1);
}