struct Vector
{
    int *data;
    unsigned int length;
};

typedef struct Vector Vector;

int getNumberFromUser();

float meanVector(Vector *vec);

int minVector(Vector *vec);

int maxVector(Vector *vec);

int *createArray(unsigned int length, int value);

void printVector(Vector *vec);

int *freeArray(Vector *vec);
