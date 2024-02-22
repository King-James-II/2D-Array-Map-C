// This program demonstrates the creation, initialization, and display of a 2D 
//grid-based map. It is done using a 5X5 2D array
#include <stdio.h>

#define MAP_ROWS 5
#define MAP_COLS 5

// Define symbols for different elements on the map
#define EMPTY_CELL '.'   // Empty cell symbol
#define PLAYER_CELL 'P'  // Player symbol
#define WALL_CELL '#'    // Wall symbol

// Function to display the map by calling the character arrays stored within 
// the map variable.
void displayMap(char map[MAP_ROWS][MAP_COLS]) {
    // Display the map
    for (int i = 0; i < MAP_ROWS; i++) {
        for (int j = 0; j < MAP_COLS; j++) {
            printf("%c ", map[i][j]); // Print the symbol for each cell
        }
        printf("\n");
    }
}

int main() {
    // Initialize the map
    char map[MAP_ROWS][MAP_COLS] = {
        {'#', '#', '#', '#', '#'},    // First row: walls
        {'#', '.', '.', '.', '#'},    // Second row: walls and empty cells
        {'#', '.', 'P', '.', '#'},    // Third row: walls, player, and empty cells
        {'#', '.', '.', '.', '#'},    // Fourth row: walls and empty cells
        {'#', '#', '#', '#', '#'}     // Last row: walls
    };

    // Display the map
    displayMap(map);

    return 0;
}
