struct Vector
{
    int *data;
    unsigned int length;
};

typedef struct Vector Vector;

// Return Type: void
// Name: printEvenOrOdd
// Parameters: int number
// Declaration
void printEvenOrOdd(int number);

// Return Type: int
// Name: getNumberFromUser
// Parameters: None
// Declaration
int getNumberFromUser();

// Return Type: unsigned int
// Name: factorial
// Parameters: unsigned int i
// Declaration
unsigned int factorial(unsigned int i);

// Return Type: float
// Name: meanVector
// Parameters: Vector* vec
// Declaration
float meanVector(Vector *vec);

// Return Type: int
// Name: minVector
// Parameters: Vector* vec
// Declaration
int minVector(Vector *vec);

// Return Type: int
// Name: maxVector
// Parameters: Vector* vec
// Declaration
int maxVector(Vector *vec);

// Return Type: int*
// Name: createVector
// Parameters: unsigned int length, int value
// Declaration
int *createVector(unsigned int length, int value);

// Return Type: int**
// Name: createMatrix
// Parameters: unsigned int rows, unsigned int cols, int value
// Declaration
int **createMatrix(unsigned int rows, unsigned int cols, int value);

// Return Type: int**
// Name: transposeMatrix
// Parameters: int** matrix_input, unsigned int rows, unsigned int cols
// Declaration
int **transposeMatrix(int **matrix_input, unsigned int rows, unsigned int cols);