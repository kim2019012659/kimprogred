#include <stdio.h>

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;

int main(void)
{
	COLOR my_color = YELLOW;
	int c = my_color;
	ARROW direction = UP;
	int d = direction;

	for (c = CYAN; c <= BLACK; c++)
	{
		d++;
		d = d % 4;
		if (c == my_color) 
			break;
	}

	switch (direction)
	{
	case UP: printf("Current direction : UP"); break;
	case DOWN: printf("Current direction : DOWN"); break;
	case LEFT: printf("Current direction : LEFT"); break;
	case RIGHT: printf("Current direction : RIGHT"); break;
	}
	return 0;
}