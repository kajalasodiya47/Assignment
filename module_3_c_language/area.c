#include<stdio.h>                     // header file
int main()                            // main() function with int return type
{
	int radius, length, width, height, base;     // Declare the variables
	float area;   
	printf("Enter the radius to find area of circle:");                  // Read the variable radius
	scanf("%d",&radius);
	area = 3.14 * radius * radius;               // Area of circle
	printf("Area of circle is:%0.2f",area);      // Print the area of circle
	printf("\nEnter the length to find area of rectangle:");               // Read the variable length
	scanf("%d",&length);
	printf("Enter the width to find area of rectangle:");                 // Read the variable width
	scanf("%d",&width);
	area = length * width;                   // Area of rectangle
	printf("Area of rectangle is:%0.2f",area);        // Print the area of rectangle
	printf("\nEnter the height to find area of triangle:");             // Read the variable height
	scanf("%d",&height);
    printf("Enter the base to find area of triangle:");	             // Read the variable base
	scanf("%d",&base);
	area = 0.5 * height * base;             // Area of triangle
	printf("Area of triangle is:%0.2f",area);       // Print the area of triangle
	return 0;                         // return 0 ends the main() function
}
