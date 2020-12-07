struct Vector
{
    int *data;
    unsigned int length;
};

typedef struct Vector Vector;

// Return Type: void
// Name: printEvenOrOdd
// Parameters: int number
void printEvenOrOdd(int number);

// Return Type: int
// Name: getNumberFromUser
// Parameters: None
int getNumberFromUser();

// Return Type: unsigned int
// Name: factorial
// Parameters: unsigned int i
unsigned int factorial(unsigned int i);

// Return Type: float
// Name: meanVector
// Parameters: Vector* vec
float meanVector(Vector *vec);

// Return Type: int
// Name: minVector
// Parameters: Vector* vec
int minVector(Vector *vec);

// Return Type: int
// Name: maxVector
// Parameters: Vector* vec
int maxVector(Vector *vec);

// Return Type: int*
// Name: createVector
// Parameters: unsigned int length, int value
int *createVector(unsigned int length, int value);

// Return Type: int**
// Name: createMatrix
// Parameters: unsigned int rows, unsigned int cols, int value
int **createMatrix(unsigned int rows, unsigned int cols, int value);

// Return Type: int**
// Name: transposeMatrix
// Parameters: int** matrix_input, unsigned int rows, unsigned int cols
int **transposeMatrix(int **matrix_input, unsigned int rows, unsigned int cols);