
struct Vector
{
    int *data;
    unsigned int length;
};

typedef struct Vector Vector;


void printEvenOrOdd(int number);


int getNumberFromUser();


int max(int number_a, int number_b);


int min(int number_a, int number_b);


float mean(int number_a, int number_b);


unsigned int factorial(unsigned int i);


void binom(int *a, int *b, int *c);


float meanArray(int array[], unsigned int length);


int minArray(int array[], unsigned int length);


int maxArray(int array[], unsigned int length);


int *createArray(unsigned int length, int value);


void printArray(int *p_array, unsigned int length);


int* freeArray(int *p_array);


int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value);


void printMatrix(int **p_matrix, unsigned int num_rows, unsigned int num_cols);


int ** freeMatrix(int **p_matrix, unsigned int num_rows);


int **transposeMatrix(int **p_matrix, unsigned int num_rows, unsigned int num_cols);
