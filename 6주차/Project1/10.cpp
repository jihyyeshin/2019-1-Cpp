#include "10.h"

int main() {
	Buffer buf("Hello");
	Buffer &temp = append(buf, "Guys");
	temp.print();//HelloGuys
	buf.print();//HelloGuys
}