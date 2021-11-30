// Return Type: void
// Name: printEvenOrOdd
// Parameters: int number
void printEvenOrOdd(int number);

// Return Type: int
// Name: getNumberFromUser
// Parameters: None
int getNumberFromUser();

// Return Type: int
// Name: max
// Parameters: int number_a, int number_b
int max(int number_a, int number_b);

// Return Type: int
// Name: max
// Parameters: int number_a, int number_b
int min(int number_a, int number_b);

// Return Type: float
// Name: mean
// Parameters: int number_a, int number_b
float mean(int number_a, int number_b);

// Return Type: unsigned int
// Name: factorial
// Parameters: unsigned int i
unsigned int factorial(unsigned int i);

// Return Type: int
// Name: binom
// Parameters: int a, int b
void binom(int *a, int *b, int *c);

// Return Type: float
// Name: meanArray
// Parameters: int array[], unsigned int length
float meanArray(int array[], unsigned int length);

// Return Type: int
// Name: minArray
// Parameters: int array[], unsigned int length
int minArray(int array[], unsigned int length);

// Return Type: int
// Name: maxArray
// Parameters: int array[], unsigned int length
int maxArray(int array[], unsigned int length);

int *createArray(unsigned int length, int value);

void printArray(int *p_array, unsigned int length);

int *freeArray(int *p_array);

int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value);

void printMatrix(int **p_matrix, unsigned int num_rows, unsigned int num_cols);

int **freeMatrix(int **p_matrix, unsigned int num_rows);
