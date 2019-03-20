#pragma once
class Tower {
private:
	int height;
public:
	Tower() {
		height = 1;
	}
	Tower(int h) {
		height = h;
	}
	int getHeight() {
		return height;
	}
};